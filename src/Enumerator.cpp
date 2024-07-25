//
// Created by anon on 9/3/21.
//


#include "Enumerator.h"
#include <cmath>
#include <algorithm>

// Generator
void Generator::reset_generator(std::string new_placeholder) {
    //this->placeholder = new_placeholder;
    this->ph_copy = placeholder;
    init();
    if (next_depth != nullptr)
        next_depth->reset_generator(ph_copy);
}


// MultiLevelGenerator
int MultiLevelGenerator::objectCount = 0;

MultiLevelGenerator::MultiLevelGenerator(std::unique_ptr<Generator> gen,
                                         clang::SourceRange range,
                                         std::string &placeholder) : range(range), Generator(placeholder) {
    actual_generator = std::move(gen);
    ph_copy = placeholder;
    id = objectCount++;
    size = 1000000;
}


std::string MultiLevelGenerator::init() {
    ph_copy = placeholder;
    return ph_copy;
}

bool MultiLevelGenerator::has_next() {
    if (next_depth != nullptr)
        return next_depth->has_next() || actual_generator->has_next();
    return actual_generator->has_next();
}

void MultiLevelGenerator::next(clang::Rewriter &rw) {

    assert(has_next() == true);
    rewriter = &rw;
    next();
}

void MultiLevelGenerator::set_synthesizer(std::vector<std::vector<std::string>> &synt) {
    this->replacements = &synt;
}

void MultiLevelGenerator::reset_generator() {
    ph_copy = placeholder;
    actual_generator->reset_generator(ph_copy);
}

std::vector<std::string> MultiLevelGenerator::next() {
    if (next_depth != nullptr && next_depth->has_next()) {
        if (ph_copy == placeholder)
            for (int i = 0; i < size && actual_generator->has_next(); i++) {
                ph_copy = actual_generator->next()[0];
                copies.push_back(ph_copy);
            }
        MultiLevelGenerator &nextd = (MultiLevelGenerator &) (*next_depth);
        nextd.next(*rewriter);
    } else {
        copies.erase(copies.begin(), copies.end());
        for (int i = 0; i < size && actual_generator->has_next(); i++) {
            ph_copy = actual_generator->next()[0];
            copies.push_back(ph_copy);
        }
        if (next_depth != nullptr) {
            MultiLevelGenerator &nextd = (MultiLevelGenerator &) (*next_depth);
            nextd.reset_generator();
            nextd.next(*rewriter);
        }
    }

    std::stringstream s;



    std::set<std::string> new_set;
    for (string copy : copies)
        new_set.insert(copy);
    copies = std::vector<string>();
    for (string copy : new_set)
        copies.push_back(copy);


    for (int i = 0; i < copies.size(); i++) {
        s << "if(env_var_" << id << " == " << i << ") { ";
        (*replacements)[id].push_back(copies[i]);
        s << copies[i] << "; }" << std::endl;
    }

    std::string output = s.str();
    llvm::StringRef replc(output);
    range.dump(rewriter->getSourceMgr());

    rewriter->RemoveText(range);
    rewriter->InsertText(range.getEnd(), replc, true, true);
    std::vector<std::string> vec;
    return vec;
}


// FooGenerator

VarGenerator::VarGenerator(std::map<std::string, clang::ValueDecl *> var_names, std::string placeholder, int s,
                           bool arithmetic_type) :
        var_names(var_names), arithmetic_type(arithmetic_type), Generator(placeholder) {
    size = s;
    first_time = true;
    init_aux();
}

bool VarGenerator::has_next() {
    if (next_depth != nullptr)
        return next_depth->has_next() || it != var_names.end();
    return it != var_names.end();
}

std::string VarGenerator::init_aux() {
    std::map<std::string, clang::ValueDecl *> viable_vars;

    if (arithmetic_type) {
        for (auto var: var_names) {
            if (!var.second->getType()->isPointerType() && var.second->getType()->isArithmeticType()) {
                viable_vars[var.first] = var.second;
            }
        }
        var_names = viable_vars;
    }
    it = var_names.begin();
    std::stringstream stream;
    stream << "foo_" << size;
    auto idx = ph_copy.find(stream.str());
    ph_copy = it->first;
    return ph_copy;
}

std::string VarGenerator::init() {
    return init_aux();
}

std::vector<std::string> VarGenerator::next() {
    assert(has_next() == true);


    if (next_depth && next_depth->has_next()) {
        if (first_time) {
            it++;
            first_time = false;
        } // this is an horrible hack
        auto vec = next_depth->next();
        vec.push_back(ph_copy);
        return vec;
    } else {
        ph_copy = placeholder;
        std::stringstream stream;
        stream << "foo_" << size;
        auto idx = ph_copy.find(stream.str());
        //ph_copy.replace(idx, 5, it->first);
        ph_copy = it->first;
        it++;
        if (next_depth) {
            next_depth->reset_generator(ph_copy);
            auto vec = next_depth->next();
            vec.push_back(ph_copy);
            return vec;
        } else {
            std::vector<std::string> vec;
            vec.push_back(ph_copy);
            return vec;
        }

    }
}


// FunGenerator

FunGenerator::FunGenerator(const std::map<clang::CXXMethodDecl *, std::string> &method_names,
                           std::map<std::string, clang::ValueDecl *> var_names,
                           std::map<clang::FunctionDecl *, std::string> c_funcs, clang::Sema &sema,
                           std::string &placeholder, bool arithmetic_type) :
        method_names(method_names), var_names(var_names), c_funcs(c_funcs), sema(sema),
        arithmetic_type(arithmetic_type), Generator(placeholder) {
    size = 1;
    init_aux();
}

bool FunGenerator::has_next() {
    if (next_depth != nullptr)
        return next_depth->has_next() || it != viable_methods.end();
    return it != viable_methods.end();
}

std::string FunGenerator::init() {
    return init_aux();
}

std::string FunGenerator::init_aux() {
    std::stringstream stream;
    stream << "fun_" << size;


    std::smatch match;
    std::regex parenthesis(stream.str() + R"(\((.*)\))");
    std::regex_search(ph_copy, match, parenthesis);

    std::string args = match.str(1);
    args.erase(std::remove_if(args.begin(), args.end(), ::isspace), args.end());
    n_args = std::count(args.begin(), args.end(), ',') + 1;

    // now getting the arguments names
    std::regex re("[ ,]");
    std::sregex_token_iterator first{args.begin(), args.end(), re, -1}, last;
    arg_placeholders = std::vector<std::string>{first, last};

    if (arg_placeholders[0].empty()) { // if there's no arg
        arg_placeholders[0] = args;
        n_args = 0;
    }

    for (auto method: method_names) {
        if (arithmetic_type) {
            //method.first->getReturnType().dump();
            std::cerr << method.second << std::endl;
        }
        if (std::abs((int) method.first->param_size() - n_args) <= 0 && (!arithmetic_type ||
                                                                         method.first->getReturnType().getDesugaredType(
                                                                                 method.first->getASTContext())->isArithmeticType())) {
            viable_methods[method.first] = method.second;
            std::cerr << "viable method name is " << method.first->getNameAsString() << std::endl;
        }
    }

    for (auto method: c_funcs) {
        if (arithmetic_type) {
            method.first->getReturnType().dump();
            std::cerr << method.second << std::endl;
        }
        if (std::abs((int) method.first->param_size() - n_args) <= 1) {
            viable_methods[method.first] = method.second;
            std::cerr << "viable method name is " << method.first->getNameAsString() << std::endl;
        }
    }

    it = viable_methods.begin();
    arguments = next_aux();
    return ph_copy;
}


std::vector<std::string> FunGenerator::next() {

    if (next_depth && next_depth->has_next() && !cur_vec.empty()) {
        auto tmp = next_depth->next();
        tmp.insert(tmp.end(), cur_vec.begin(), cur_vec.end());
        return tmp;
    } else if (next_depth && !next_depth->has_next())
        next_depth->reset_generator(placeholder);

    assert(has_next() == true);

    while (arguments == nullptr || (!arguments->has_next() && has_next())) {
        arguments = next_aux();
        if (n_args == 0) {
            next_aux();
            std::vector<std::string> vec;
            vec.push_back(ph_copy + "()");
            return vec;
        }
    }

    std::string rvalue = ph_copy + "( ";
    std::stringstream args_str;

    auto actual_values = arguments->next();
    for (int i = 0; i < n_args; i++) {
        rvalue += actual_values[i] + ",";
    }
    rvalue.pop_back();
    rvalue += " )";

    //std::cerr << "Generated code: " << rvalue << std::endl;
    cur_vec.clear();
    cur_vec.push_back(rvalue);

    if (next_depth) {
        auto tmp = next_depth->next();
        tmp.insert(tmp.end(), cur_vec.begin(), cur_vec.end());
        return tmp;
    }

    return cur_vec;
}

std::unique_ptr<Generator> FunGenerator::next_aux() {

    if (it == viable_methods.end()) {
        n_args = 0;
        return nullptr;
    }

    std::stringstream stream;
    stream << "fun_"; // hack
    ph_copy = placeholder;
    int idx = ph_copy.find(stream.str()); // this is a problem i still need to figure out ...
    ph_copy = it->second;
    current = it->first;
    if (current->getReturnType()->isPointerType())
        ph_copy = "*" + ph_copy;
    it++;

    std::unique_ptr<VarGenerator> arg = nullptr;
    std::unique_ptr<Generator> prev_arg = nullptr;

    if (ph_copy == "result.insert(foo_1, foo_2)" || ph_copy == "result.assign(1)") {
        //std::cerr << ph_copy << std::endl;
        current->dump();
    }

    n_args = current->getNumParams();
    arg_placeholders = std::vector<string>();


    for (int i = 0; i < n_args; i++) {
        arg_placeholders.push_back(std::string("foo_") + to_string(i));
        auto param = current->getParamDecl(i);
        clang::QualType actual_type = param->getType(); // remove const
        if (auto tmp = actual_type->getAs<clang::ReferenceType>()) { // if it's a reference type (had a problem with std::string)
            //std::cerr << ph_copy << std::endl;
            //tmp->dump();
            actual_type = tmp->getPointeeType();
            //tmp->getArg(0).getAsType().getCanonicalType().dump();
            //actual_type = tmp->getArg(0).getAsType().getCanonicalType();
            //actual_type = first->getReplacementType(); // remove const
        }
        std::vector<std::pair<std::string, clang::ValueDecl *>> viable_variables;
        for (auto it: var_names) {
            auto var_decl = it.second;
            // FIXME hack
            var_decl->dump();
            auto var_decl_type = var_decl->getType();
            if (var_decl_type->isArrayType()) {
                var_decl_type.dump();
                if (auto tmp = llvm::dyn_cast<clang::ArrayType>(var_decl_type))
                    var_decl_type = tmp->getElementType();
            }
            else if (var_decl_type->isReferenceType()) {
                var_decl_type = var_decl_type->getPointeeType();
            }

            bool giant_hack = false; // it.first.find("()") != -1;

            if (sema.CheckAssignmentConstraints(var_decl->getLocation(), actual_type, var_decl_type) ==
                clang::Sema::Compatible || giant_hack) {
                //std::cerr << "SUCCESS" << std::endl;
                //it.second->dump();
                //actual_type.dump();
                viable_variables.emplace_back(it);
            }
        }

        if (ph_copy == "result.insert(foo_1, foo_2)" || ph_copy == "result.assign(1)") {
            //std::cerr << ph_copy << std::endl;
            for (auto var: viable_variables)
                std::cerr << var.first << std::endl;
        }

        if (!viable_variables.empty()) {
            std::map<std::string, clang::ValueDecl *> mapped_values;
            std::copy(viable_variables.begin(), viable_variables.end(),
                      std::inserter(mapped_values, mapped_values.begin()));
            arg = std::make_unique<VarGenerator>(mapped_values, arg_placeholders[i], i + 1);
            if (prev_arg != nullptr) arg->next_depth = std::move(prev_arg);
            prev_arg = std::move(arg);
        } else {
            return next_aux();
        }
    }

    return std::move(prev_arg);
}


int IfExprGenerator::ifCount = 0;


IfExprGenerator::IfExprGenerator(std::unique_ptr<Generator> gen,
                                 clang::IfStmt *stmt,
                                 clang::SourceRange range,
                                 std::string &placeholder,
                                 clang::Stmt *grandparent) : grandparent(grandparent),
                                                             MultiLevelGenerator(std::move(gen), range, placeholder) {

    std::cerr << "hello world!" << std::endl;
    if_stmt = stmt;
    if_id = ifCount++;
}


std::string IfExprGenerator::init() {
    return "";
}

bool IfExprGenerator::has_next() {
    return actual_generator->has_next();
}


std::vector<std::string> IfExprGenerator::next() {

    if (next_depth != nullptr && next_depth->has_next()) {
        if (ph_copy == placeholder)
            for (int i = 0; i < size && actual_generator->has_next(); i++) {
                ph_copy = actual_generator->next()[0];
                copies.push_back(ph_copy);
            }
        MultiLevelGenerator &nextd = (MultiLevelGenerator &) (*next_depth);
        nextd.next(*rewriter);
    } else {
        copies.erase(copies.begin(), copies.end());
        for (int i = 0; i < size && actual_generator->has_next(); i++) {
            ph_copy = actual_generator->next()[0];
            copies.push_back(ph_copy);
        }
        if (next_depth != nullptr) {
            MultiLevelGenerator &nextd = (MultiLevelGenerator &) (*next_depth);
            nextd.reset_generator();
            nextd.next(*rewriter);
        }
    }


    auto opt = clang::LangOptions();
    auto policy = clang::PrintingPolicy(opt);
    std::string stringx;
    llvm::raw_string_ostream os(stringx);

    class : public clang::PrinterHelper {

    public:
        bool handledStmt(clang::Stmt *E, llvm::raw_ostream &OS) override {
            return false;
        }

    } x;

    if_stmt->getCond()->printPretty(os, &x, policy);

    auto begin_loc = if_stmt->getBeginLoc();

    std::stringstream stream;
    stream << "_res_key_if_" << if_id;


    std::stringstream define;
    if (grandparent) define << "{" << std::endl;
    define << "int " << stream.str() << ";" << std::endl;


    std::stringstream s;


    std::set<std::string> new_set;
    for (string copy : copies)
        new_set.insert(copy);
    copies = std::vector<string>();
    for (string copy : new_set)
        copies.push_back(copy);


    for (int i = 0; i < copies.size(); i++) {
        s << "if(env_var_" << id << " == " << i << ") { ";
        (*replacements)[id].push_back(copies[i]);
        s << stream.str() << " = " << copies[i] << "; }" << std::endl;
    }


    rewriter->InsertText(begin_loc, define.str() + s.str(), true, true);
    rewriter->ReplaceText(range, stream.str());

    if (grandparent) {
        std::string closing_brackets = "}";
        rewriter->InsertText(if_stmt->getEndLoc(), closing_brackets, true, true);
        grandparent->getEndLoc().dump(rewriter->getSourceMgr());
        grandparent->dump();
    }


    return copies;
}

ArithmeticGenerator::ArithmeticGenerator(const map<clang::CXXMethodDecl *, std::string> &method_names,
                                         std::map<std::string, clang::ValueDecl *> var_names,
                                         std::map<clang::FunctionDecl *, std::string> c_funcs, clang::Sema &sema,
                                         string &placeholder) : method_names(method_names),
                                                                var_names(std::move(var_names)), c_funcs(c_funcs),
                                                                sema(sema), Generator(placeholder) {
    init_aux();
}

bool ArithmeticGenerator::has_next() {
    return arguments->has_next();
}

std::string ArithmeticGenerator::init() {
    return std::string();
}

std::string ArithmeticGenerator::init_aux() {
    // this is going to look for all fun placeholders and create fun generators
    // same goes for variable placeholders,
    // be sure to tell the generators that we are only going to accept arithmetic types
    // problem with integer division and floats. how to cope?

    std::string keyword;



    // find all functions (we dont support nesting)
    auto fun_idx = placeholder.find("fun_");
    while (fun_idx != std::string::npos) {
        std::pair<int, int> p(fun_idx, 0);
        functions.push_back(p);
        fun_idx = placeholder.find("fun_", fun_idx + 1);
    }

    for (std::pair<int, int> &fn: functions) {
        int end, count = 1;
        for (end = placeholder.find('(', fn.first + 1) + 1; count > 0; end++) {
            if (placeholder[end] == '(')
                count++;
            if (placeholder[end] == ')')
                count--;
        }
        fn.second = end;
    }


    // This code finds arrays and treats them as functions



    std::regex re_arr("foo_[0-9]*\\[.*\\]");
    std::smatch match_arr;
    string::const_iterator start_arr(placeholder.cbegin());
    fun_idx = 0;
    while (std::regex_search(start_arr, placeholder.cend(), match_arr, re_arr)) {
        if (!match_arr.empty()) {
            int pos = match_arr.position();
            bool is_fn_argument = false;
            for (auto fn: functions) {
                if ((fun_idx + pos) >= fn.first && (fun_idx + pos) <= fn.second)
                    is_fn_argument = true;
            }
            if (!is_fn_argument) {
                std::pair<int, int> p(fun_idx + pos, fun_idx + pos + match_arr.length());
                functions.push_back(p);
            }
        }

        start_arr = match_arr.suffix().first;
        fun_idx += match_arr.prefix().length() + match_arr.length();
    }


    // This code finds arrays and treats them as functions - END

    std::regex re("foo_[0-9]*");
    std::smatch match;


    // we also want the var placeholders
    string::const_iterator start(placeholder.cbegin());
    auto idx_prev = 0;
    while (std::regex_search(start, placeholder.cend(), match, re)) {
        if (!match.empty()) {
            bool is_fn_argument = false;
            int pos = match.position();
            for (auto fn: functions) {
                if ((idx_prev + pos) >= fn.first && (idx_prev + pos) <= fn.second)
                    is_fn_argument = true;
            }
            if (!is_fn_argument) {
                variables.emplace_back(pos + idx_prev, pos + match.length() + idx_prev);
            }
        }
        start = match.suffix().first;
        idx_prev += match.prefix().length() + match.length();
    }


    assert((functions.size() > 0 || variables.size() > 0) &&
           "Statement contains not placeholders for arithmetic generator");
    // now we create the function and variable generators
    std::unique_ptr<Generator> prev = nullptr;
    for (auto fn: functions) {
        auto tmp = placeholder.substr(fn.first, fn.second - fn.first);
        auto g1 = std::make_unique<FunGenerator>(method_names, var_names, c_funcs, sema, tmp,
                                                 false);  // this doesnt handke recursion yet;
        auto g2 = std::make_unique<VarGenerator>(var_names, tmp, size = std::atoi(&(tmp.back())), false);
        auto g = std::make_unique<CombinedGenerator>(std::move(g1), std::move(g2)); // this doesnt handke recursion yet;
        if (prev != nullptr) g->next_depth = std::move(prev);
        prev = std::move(g);
    }

    for (auto variable: variables) {
        auto tmp = placeholder.substr(variable.first, variable.second - variable.first);
        auto g = std::make_unique<VarGenerator>(var_names, tmp, size = std::atoi(&(tmp.back())), false);
        if (prev != nullptr) g->next_depth = std::move(prev);
        prev = std::move(g);
    }

    arguments = std::move(prev);
    return std::string();
}

std::vector<std::string> ArithmeticGenerator::next() {
    auto vec = arguments->next();
    std::string copy = placeholder;
    int i = 0;
    std::vector<std::string> phs;

    // this is really dumb
    for (auto fn: functions) {
        auto substr = copy.substr(fn.first, fn.second - fn.first);
        phs.push_back(substr);
    }
    for (auto var: variables) {
        auto substr = copy.substr(var.first, var.second - var.first);
        phs.push_back(substr);
    }

    assert (phs.size() == vec.size());

    for (int i = 0; i < vec.size(); i++) {
        int idx = copy.find(phs[i]);
        if (idx == -1) {
            std::cerr << "Corresponding placeholder not found at code generation. Nested functions are not supported."
                      << std::endl;
            continue;
        }
        copy.replace(idx, phs[i].size(), vec[i]);
    }

    return std::vector<std::string>{copy};
}

std::unique_ptr<Generator> ArithmeticGenerator::next_aux() {
    return std::unique_ptr<Generator>();
}


CombinedGenerator::CombinedGenerator(std::unique_ptr<Generator> gen1, std::unique_ptr<Generator> gen2) :
        first(std::move(gen1)), second(std::move(gen2)), choice(true), Generator(gen1->placeholder) {

}

std::string CombinedGenerator::init() {
    return placeholder;
}


void CombinedGenerator::reset_generator(std::string new_placeholder) {
    first->reset_generator(new_placeholder);
    second->reset_generator(new_placeholder);
    if (next_depth) next_depth->reset_generator(new_placeholder);
    choice = true;
    prev = std::vector<std::string>();

}

bool CombinedGenerator::has_next() {
    if (!first->has_next()) {
        choice = false;
        return second->has_next() || (next_depth && next_depth->has_next());
    }
    return true;
}

std::vector<std::string> CombinedGenerator::next() {
    std::vector<std::string> tmp;
    if (next_depth && next_depth->has_next() && !prev.empty()) {
        tmp = next_depth->next();
        tmp.insert(tmp.end(), prev.begin(), prev.end());
        return tmp;
    } else if (next_depth) {
        if (!next_depth->has_next())
            next_depth->reset_generator("reset generator");
        tmp = next_depth->next();
    }


    if (choice) {
        prev = first->next();
        tmp.insert(tmp.end(), prev.begin(), prev.end());
        return tmp;
    } else {
        prev = second->next();
        tmp.insert(tmp.end(), prev.begin(), prev.end());

        return tmp;
    }

}


int ForExprGenerator::forCount = 0;

ForExprGenerator::ForExprGenerator(std::unique_ptr<Generator> gen,
                                   clang::ForStmt *stmt,
                                   clang::SourceRange range,
                                   std::string &placeholder) :
        MultiLevelGenerator(std::move(gen), range, placeholder) {

    for_stmt = stmt;
    for_id = forCount++;
}


std::string ForExprGenerator::init() {
    return "";
}

bool ForExprGenerator::has_next() {
    return actual_generator->has_next();
}


std::vector<std::string> ForExprGenerator::next() {

    if (next_depth != nullptr && next_depth->has_next()) {
        if (ph_copy == placeholder)
            for (int i = 0; i < size && actual_generator->has_next(); i++) {
                ph_copy = actual_generator->next()[0];
                copies.push_back(ph_copy);
            }
        MultiLevelGenerator &nextd = (MultiLevelGenerator &) (*next_depth);
        nextd.next(*rewriter);
    } else {
        copies.erase(copies.begin(), copies.end());
        for (int i = 0; i < size && actual_generator->has_next(); i++) {
            ph_copy = actual_generator->next()[0];
            copies.push_back(ph_copy);
        }
        if (next_depth != nullptr) {
            MultiLevelGenerator &nextd = (MultiLevelGenerator &) (*next_depth);
            nextd.reset_generator();
            nextd.next(*rewriter);
        }
    }


    auto opt = clang::LangOptions();
    auto policy = clang::PrintingPolicy(opt);
    std::string stringx;
    llvm::raw_string_ostream os(stringx);

    class : public clang::PrinterHelper {

    public:
        bool handledStmt(clang::Stmt *E, llvm::raw_ostream &OS) override {
            return false;
        }

    } x;

    for_stmt->getCond()->printPretty(os, &x, policy);

    auto begin_loc = for_stmt->getBeginLoc();


    std::stringstream breaks;

    breaks << " {" << std::endl;




    std::set<std::string> new_set;
    for (string copy : copies)
        new_set.insert(copy);
    copies = std::vector<string>();
    for (string copy : new_set)
        copies.push_back(copy);


    for (int i = 0;
         i < copies.size(); i++) { // FIXME: Declare if_for_res = true; use break inside the for as first instruction!
        breaks << "if (env_var_" << id << " == " << i << " && !(" << copies[i] << ")) break;" << std::endl;
    }




    //rewriter->InsertText(begin_loc, define.str(), true, true);
    rewriter->ReplaceText(range, "true");
    rewriter->InsertText(for_stmt->getBody()->getBeginLoc(), breaks.str(), true, true);
    rewriter->InsertText(for_stmt->getEndLoc(), "}", true, true);


    return copies;
}


int WhileGenerator::forCount = 0;

WhileGenerator::WhileGenerator(std::unique_ptr<Generator> gen,
                               clang::WhileStmt *stmt,
                               clang::SourceRange range,
                               std::string &placeholder) :
        MultiLevelGenerator(std::move(gen), range, placeholder) {

    for_stmt = stmt;
    for_id = forCount++;
}


std::string WhileGenerator::init() {
    return "";
}

bool WhileGenerator::has_next() {
    return actual_generator->has_next();
}


std::vector<std::string> WhileGenerator::next() {

    if (next_depth != nullptr && next_depth->has_next()) {
        if (ph_copy == placeholder)
            for (int i = 0; i < size && actual_generator->has_next(); i++) {
                ph_copy = actual_generator->next()[0];
                copies.push_back(ph_copy);
            }
        MultiLevelGenerator &nextd = (MultiLevelGenerator &) (*next_depth);
        nextd.next(*rewriter);
    } else {
        copies.erase(copies.begin(), copies.end());
        for (int i = 0; i < size && actual_generator->has_next(); i++) {
            ph_copy = actual_generator->next()[0];
            copies.push_back(ph_copy);
        }
        if (next_depth != nullptr) {
            MultiLevelGenerator &nextd = (MultiLevelGenerator &) (*next_depth);
            nextd.reset_generator();
            nextd.next(*rewriter);
        }
    }


    auto opt = clang::LangOptions();
    auto policy = clang::PrintingPolicy(opt);
    std::string stringx;
    llvm::raw_string_ostream os(stringx);

    class : public clang::PrinterHelper {

    public:
        bool handledStmt(clang::Stmt *E, llvm::raw_ostream &OS) override {
            return false;
        }

    } x;

    for_stmt->getCond()->printPretty(os, &x, policy);

    auto begin_loc = for_stmt->getBeginLoc();


    std::stringstream breaks;

    breaks << " {" << std::endl;



    std::set<std::string> new_set;
    for (string copy : copies)
        new_set.insert(copy);
    copies = std::vector<string>();
    for (string copy : new_set)
        copies.push_back(copy);


    for (int i = 0;
         i < copies.size(); i++) { // FIXME: Declare if_for_res = true; use break inside the for as first instruction!
        breaks << "if (env_var_" << id << " == " << i << " && !(" << copies[i] << ")) break;" << std::endl;
    }




    //rewriter->InsertText(begin_loc, define.str(), true, true);
    rewriter->ReplaceText(range, "true");
    rewriter->InsertText(for_stmt->getBody()->getBeginLoc(), breaks.str(), true, true);
    rewriter->InsertText(for_stmt->getEndLoc(), "}", true, true);


    return copies;
}


DeclStmtGenerator::DeclStmtGenerator(std::unique_ptr<Generator> gen,
                                     clang::DeclStmt *stmt, clang::SourceRange range,
                                     std::string &placeholder, clang::Stmt *grandparent) : grandparent(grandparent),
                                                                                           MultiLevelGenerator(
                                                                                                   std::move(gen),
                                                                                                   range, placeholder) {
    decl_stmt = stmt;
}

std::string DeclStmtGenerator::init() {
    return "";
}

bool DeclStmtGenerator::has_next() {
    return actual_generator->has_next();
}

std::vector<std::string> DeclStmtGenerator::next() {
    if (next_depth != nullptr && next_depth->has_next()) {
        if (ph_copy == placeholder)
            for (int i = 0; i < size && actual_generator->has_next(); i++) {
                ph_copy = actual_generator->next()[0];
                copies.push_back(ph_copy);
            }
        MultiLevelGenerator &nextd = (MultiLevelGenerator &) (*next_depth);
        nextd.next(*rewriter);
    } else {
        copies.erase(copies.begin(), copies.end());
        for (int i = 0; i < size && actual_generator->has_next(); i++) {
            ph_copy = actual_generator->next()[0];
            copies.push_back(ph_copy);
        }
        if (next_depth != nullptr) {
            MultiLevelGenerator &nextd = (MultiLevelGenerator &) (*next_depth);
            nextd.reset_generator();
            nextd.next(*rewriter);
        }
    }


    auto opt = clang::LangOptions();
    auto policy = clang::PrintingPolicy(opt);
    std::string stringx;
    llvm::raw_string_ostream os(stringx);

    class : public clang::PrinterHelper {

    public:
        bool handledStmt(clang::Stmt *E, llvm::raw_ostream &OS) override {
            return false;
        }

    } x;

    clang::SourceLocation begin_loc = decl_stmt->getBeginLoc();
    decl_stmt->printPretty(os, &x, policy);
    std::string define = stringx.substr(0, stringx.find('='));



    std::stringstream s;
    s << define << ";" << std::endl;



    std::set<std::string> new_set;
    for (string copy : copies)
        new_set.insert(copy);
    copies = std::vector<string>();
    for (string copy : new_set)
        copies.push_back(copy);


    for (int i = 0; i < copies.size(); i++) {
        s << "if(env_var_" << id << " == " << i << ") { ";
        copies[i] = copies[i].substr(stringx.find(' '), copies[i].length() - stringx.find(' ') + 1);
        (*replacements)[id].push_back(copies[i]);
        s << copies[i] << "; }" << std::endl;
    }

    std::string output = s.str();
    llvm::StringRef replc(output);
    range.dump(rewriter->getSourceMgr());

    rewriter->RemoveText(range);
    rewriter->InsertText(range.getEnd(), replc, true, true);
    return copies;
}


// switch


int SwitchExprGenerator::switchCount = 0;


SwitchExprGenerator::SwitchExprGenerator(std::unique_ptr<Generator> gen,
                                 clang::SwitchStmt *stmt,
                                 clang::SourceRange range,
                                 std::string &placeholder) : MultiLevelGenerator(std::move(gen), range, placeholder) {

    std::cerr << "hello world!" << std::endl;
    switch_stmt = stmt;
    switch_id = switchCount++;
}


std::string SwitchExprGenerator::init() {
    return "";
}

bool SwitchExprGenerator::has_next() {
    return actual_generator->has_next();
}


std::vector<std::string> SwitchExprGenerator::next() {

    if (next_depth != nullptr && next_depth->has_next()) {
        if (ph_copy == placeholder)
            for (int i = 0; i < size && actual_generator->has_next(); i++) {
                ph_copy = actual_generator->next()[0];
                copies.push_back(ph_copy);
            }
        MultiLevelGenerator &nextd = (MultiLevelGenerator &) (*next_depth);
        nextd.next(*rewriter);
    } else {
        copies.erase(copies.begin(), copies.end());
        for (int i = 0; i < size && actual_generator->has_next(); i++) {
            ph_copy = actual_generator->next()[0];
            copies.push_back(ph_copy);
        }
        if (next_depth != nullptr) {
            MultiLevelGenerator &nextd = (MultiLevelGenerator &) (*next_depth);
            nextd.reset_generator();
            nextd.next(*rewriter);
        }
    }


    auto opt = clang::LangOptions();
    auto policy = clang::PrintingPolicy(opt);
    std::string stringx;
    llvm::raw_string_ostream os(stringx);

    class : public clang::PrinterHelper {

    public:
        bool handledStmt(clang::Stmt *E, llvm::raw_ostream &OS) override {
            return false;
        }

    } x;

    switch_stmt->getCond()->printPretty(os, &x, policy);

    auto begin_loc = switch_stmt->getBeginLoc();

    std::stringstream stream;
    stream << "_res_key_if_" << switch_id;


    std::stringstream define;
    define << "int " << stream.str() << ";" << std::endl;


    std::stringstream s;



    std::set<std::string> new_set;
    for (string copy : copies)
        new_set.insert(copy);
    copies = std::vector<string>();
    for (string copy : new_set)
        copies.push_back(copy);


    for (int i = 0; i < copies.size(); i++) {
        s << "if(env_var_" << id << " == " << i << ") { ";
        (*replacements)[id].push_back(copies[i]);
        s << stream.str() << " = " << copies[i] << "; }" << std::endl;
    }


    rewriter->InsertText(begin_loc, define.str() + s.str(), false, true);
    rewriter->ReplaceText(switch_stmt->getCond()->getSourceRange(), stream.str());


    return copies;
}
