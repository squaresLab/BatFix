//
// Created by anon on 11/4/21.
//

#include <string>
#include <vector>
#include <unordered_map>
#include <fstream>
#include <sstream>
#include <iostream>
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "lldb/API/SBDebugger.h"
#include "lldb/API/SBTarget.h"
#include "lldb/API/SBLaunchInfo.h"
#include "lldb/API/SBError.h"
#include "lldb/API/SBProcess.h"
#include "lldb/API/SBThread.h"
#include "lldb/API/SBCommandInterpreter.h"
#include "lldb/API/SBCommandReturnObject.h"
#include "lldb/API/LLDB.h"
#include <regex>
#include "ClangCompressedCFG.h"


using namespace std;
using namespace clang;

class RunTimeValue;
unsigned int edit_distance(const std::string& s1, const std::string& s2);

void compile_debug(const string &file_name);

namespace std {
    template<> class hash<RunTimeValue> {
    public:
        size_t operator()(const RunTimeValue &c) const; // don't define yet
    };
}

class RunTimeValue {
public:
    RunTimeValue(std::string type, std::string name, std::string value, bool readable = true) : type(type), name(name), value(value), readable(readable) {

    };

    RunTimeValue() {

    };

    friend size_t std::hash<RunTimeValue>::operator ()(const RunTimeValue&) const;

    bool operator==(const RunTimeValue& other) const{
        return (type == other.type) && (name == other.name) && (value == other.value);
    }

    const std::string &getType() const {
        return type;
    }

    const std::string &getName() const {
        return name;
    }

    const std::string &getValue() const {
        return value;
    }

    const bool &getReadable() const {
        return readable;
    }

private:
    std::string type;
    std::string name;
    std::string value;
    bool readable;
};

class ExecutionStep {
public:
    ExecutionStep();

    ExecutionStep(std::string stmt) : stmt(stmt) {}

    void add_var(RunTimeValue val) { vars.push_back(val); }

    bool is_diverging(ExecutionStep other, std::unordered_map<RunTimeValue, RunTimeValue> values_map) {

        // we need to check whether we are actually executing the correct step.

        for (auto pair : values_map) {
            RunTimeValue source_value = pair.first;
            RunTimeValue target_value = pair.second;

            if (source_value.getReadable() && target_value.getReadable()) {
                if (target_value.getType() == "int") {
                    if (source_value.getValue() != target_value.getValue()) {
                        div = source_value;
                        return true;
                    }
                } else if (target_value.getType().find('*') != std::string::npos) {

                } else if (target_value.getValue().find("0x") != std::string::npos) {

                } else if (source_value.getValue() != target_value.getValue()) {
                    div = source_value;
                    return true;
                }
            }
        }
        return false;
    }

    RunTimeValue getDivergent() {
        return div;
    }

    bool operator==(const ExecutionStep &other) const {
        return stmt == other.stmt;
    }

    std::unordered_map<RunTimeValue, RunTimeValue> generate_map(ExecutionStep &step) {
        std::unordered_map<RunTimeValue, RunTimeValue> map;
        for (int i = 0; i < this->vars.size(); i++)
            for (int j = 0; j < step.vars.size(); j++)
                if (this->vars[i].getName() == step.vars[j].getName())
                    map[this->vars[i]] = step.vars[j];
        return map;
    }


    const string &getStmt() const {
        return stmt;
    }

    std::vector<RunTimeValue> getVars() {
        return vars;
    }

    friend std::ostream& operator<<(std::ostream&, const RunTimeValue&);


    void set_line_number(int line_number) {
        this->line_number = line_number;
    }

    int get_line_number() {
        return this->line_number;
    }


private:
    int line_number;
    std::vector<RunTimeValue> vars;
    std::string stmt;
    RunTimeValue div;
};


std::ostream& operator<<(std::ostream& stream, const RunTimeValue& rtv) {
    return stream << rtv.getType() << " " << rtv.getName() << " = " << rtv.getValue();
}

ExecutionStep::ExecutionStep() {

}


size_t std::hash<RunTimeValue>::operator()(const RunTimeValue &x) const
{
    return std::hash<std::string>()(x.name + x.name + x.value);
}

typedef std::vector<ExecutionStep> ExecutionTrace;

RunTimeValue parse_runtime_value(std::string raw) {
    std::string rgx_expr = "([a-zA-Z0-9_]+) = (.*)";
    std::regex rgx(rgx_expr);
    std::smatch holder;
    std::regex_match(raw, holder, rgx);

    RunTimeValue rtv("UNKNOWN", holder.str(1), holder.str(2));
    return rtv;

}

std::vector<Node*> match_step_to_node(ExecutionStep &step, Node* &node) {

    std::vector<Node*> nodes;

    auto children = node->get_children();
    if (children.size() == 2) {
        if (node->get_line_number() == step.get_line_number()) {
            nodes.push_back(node);
            return nodes;
        } else if (children[0]->get_line_number() == step.get_line_number()) {
            node = children[0];
        } else {
            node = children[1];
        }
    }

    while (node->get_line_number() == step.get_line_number()) {
        children = node->get_children();
        nodes.push_back(node);
        if (children.size() == 1) {
            node = children[0];
        } else {
            break;
        }
    }

    return nodes;
}

ExecutionTrace load_java_trace(std::string file_name, Node* root) {
    ExecutionTrace trace;

    std::ifstream my_file;
    my_file.open(file_name);
    std::string line;

    std::cerr << "Loading trace from " << file_name << std::endl;
    assert(my_file.is_open());

    std::regex re("Statement: (.*)\r?");
    while (std::getline(my_file, line)) {
        std::smatch sm;
        std::regex_match (line ,sm, re);
        if (!sm.empty()) {
            ExecutionStep step( sm.str(1));

            std::getline(my_file, line);
            std::regex re_line("Line: ([0-9]+)\r?\n?");
            std::smatch sm_line;
            std::regex_match (line , sm_line, re_line);

            if (!sm_line.empty()) {
                int line_n = std::stoi(sm_line.str(1));
                step.set_line_number(line_n);
            }

            while (std::getline(my_file, line) && !line.empty() && line.find("serialVersionUID") == std::string::npos)
                step.add_var(parse_runtime_value(line));
            trace.push_back(step);
        }
    }
    return trace;
}

unsigned int edit_distance(const std::string& s1, const std::string& s2)
{
    const std::size_t len1 = s1.size(), len2 = s2.size();
    std::vector<std::vector<unsigned int>> d(len1 + 1, std::vector<unsigned int>(len2 + 1));

    d[0][0] = 0;
    for(unsigned int i = 1; i <= len1; ++i) d[i][0] = i;
    for(unsigned int i = 1; i <= len2; ++i) d[0][i] = i;

    for(unsigned int i = 1; i <= len1; ++i)
        for(unsigned int j = 1; j <= len2; ++j)
            // note that std::min({arg1, arg2, arg3}) works only in C++11,
            // for C++98 use std::min(std::min(arg1, arg2), arg3)
            d[i][j] = std::min({ d[i - 1][j] + 1, d[i][j - 1] + 1, d[i - 1][j - 1] + (s1[i - 1] == s2[j - 1] ? 0 : 1) });
    return d[len1][len2];
}


std::string print_stmt_code(clang::ASTContext& context, clang::Stmt* block_stmt) {
    clang::Stmt* S = block_stmt;
    auto opt = clang::LangOptions();
    auto policy = clang::PrintingPolicy(opt);
    opt.CPlusPlus = true;
    policy.Bool = true;

    class : public clang::PrinterHelper{

    public:
        bool handledStmt (clang::Stmt *E, llvm::raw_ostream &OS) override {
            return false;
        }

    } x;

    std::string stringx;
    llvm::raw_string_ostream os(stringx);
    block_stmt->printPretty(os, &x, policy);
    llvm::StringRef text;
    auto loc = clang::FullSourceLoc(S->getBeginLoc(), context.getSourceManager());
    if (!loc.isValid() || loc.isInSystemHeader()) return "INVALID!!!!!!!!";

    if (S->getSourceRange().isValid()) {
        text = clang::Lexer::getSourceText(clang::CharSourceRange::getTokenRange(S->getSourceRange()),
                                           context.getSourceManager(),
                                           clang::LangOptions(), 0);
        //std::cerr << "output parsed " << "line " << loc.getLineNumber() << " column " << loc.getColumnNumber() << " --- " << text.str() << std::endl;
    }



    return os.str();
}

std::vector<clang::Stmt*> preproccess(CFGBlock* block) {
    //block->dump();
    clang::RecursiveAdd add_stmt;
    std::vector<clang::Stmt*> in_block;
    auto block_e = block->rbegin();
    for (auto i = block->rbegin(); i != block->rend(); ++i) {
        clang::CFGElement E = *i;
        bool found = false;
        if (auto SE = E.getAs<clang::CFGStmt>()) {
            clang::FindStmtVisitor visitor((clang::Stmt*) SE->getStmt());
            add_stmt.TraverseStmt((clang::Stmt*) SE->getStmt());
            // SE->getStmt()->dump();
            for (auto prev : in_block) { // this is used to avoid duplication
                visitor.TraverseStmt(prev); // because some nodes are shown in multiple cfg elements
                if (visitor.Found || llvm::dyn_cast<clang::ImplicitCastExpr>(SE->getStmt())) { //FIXME This is an hack to prevent the CFG from having implicit casts in vector declarations like n; int left[n]
                    found = true;
                    break;
                }
            }
            if (!found) in_block.push_back((clang::Stmt*) SE->getStmt());
        }
    }
    reverse(in_block.begin(), in_block.end());
    // idk about this FIXME
    if (block->getTerminator().isValid()) {
        in_block.push_back(block->getTerminatorStmt());
    }
    return in_block;
}


class ExecutionTraceExec {
public:

    ExecutionTraceExec(string file_name, std::string java_trace,
                       ClangCompressedCFG* cfg_cpp, Node* cfg_java,
                       std::map<Stmt *, Node *> cfg_map, clang::ASTContext& context) : file_name(std::move(file_name)),
                                                                                       cfg_cpp(cfg_cpp), java_trace_file(java_trace), cfg_java(cfg_java),
                                                                                       cfg_map(cfg_map), context(context) {
        compile_debug();
    }

    void new_compute_execution_traces() {

        lldb::SBDebugger::Initialize();

        auto debugger = lldb::SBDebugger(lldb::SBDebugger::Create());
        debugger.SetAsync(false);
        auto target = debugger.CreateTarget("/tmp/a.out");
        target.BreakpointCreateByName("f_filled", target.GetExecutable().GetFilename());
        auto launch_info = lldb::SBLaunchInfo(NULL);
        auto errors = lldb::SBError();
        auto process = target.Launch(launch_info, errors);
        auto thread = process.GetSelectedThread();
        auto interp = debugger.GetCommandInterpreter();

        auto java_trace = load_java_trace(java_trace_file, cfg_java);


        // Get stack frame
        lldb::SBFrame frame = process.GetSelectedThread().GetSelectedFrame();
        std::string current_name = frame.GetFunction().GetDisplayName();
        std::string main_name = "main";

        // Get the entry node
        auto current_node = cfg_cpp->entry_block;
        auto current_java_node = cfg_java;
        if (current_java_node->get_kind() == Node::kind::Special)
            current_java_node = current_java_node->get_children()[0];
        // Get the stmts in the entry node
        // auto block_statements = preproccess(&current_node);
        std::cerr << "Executing ... " << current_name << std::endl;
        while (current_name != main_name) {
            frame = thread.GetSelectedFrame();

            auto vars = frame.GetVariables(true, true, false, true, lldb::DynamicValueType::eDynamicCanRunTarget);
            lldb::SBStream ss;
            auto line_entry = thread.GetSelectedFrame().GetLineEntry();
            debugger.GetSourceManager().DisplaySourceLinesWithLineNumbers(line_entry.GetFileSpec(),
                                                                                   line_entry.GetLine(), 0, 0, "", ss);
            //std::cout << "line entry is " << line_entry.GetLine() << std::endl;
            std::string line = ss.GetData();
            if (line.find("f_filled") != std::string::npos) break;
            std::cerr << "line content is as follows" << line << std::endl;

            // match this line with cfg nodes and walk the cfg
            auto cpp_cfg_nodes = match_lldb_cfg(line, current_node, current_java_node, line_entry.GetLine());
            if (cpp_cfg_nodes.empty()) { thread.StepOver(); continue;}
            auto java_step = java_trace[count++];
            auto java_cfg_nodes = match_step_to_node(java_step, current_java_node);
            std::string stmt_code;
            int c = 0;


            for (auto node : cpp_cfg_nodes) {
                if (java_cfg_nodes.empty()) assert(0 && "Execution couldnt match.");

                // for python
                if (std::find(java_cfg_nodes.begin(), java_cfg_nodes.end(), cfg_map[node]) == java_cfg_nodes.end()) {
                    if (cfg_map[node] == NULL) {
                        current_node->walk();
                        thread.StepOver();
                        break;
                    } else {
                        cout << "Instruction pointer divergence!" << std::endl;
                        cout << "Current node is " << print_stmt_code(context, node) << std::endl;
                        cout << "Java node is " << java_cfg_nodes[0]->getStatement() << std::endl;
                        cout << "Previous node is " << print_stmt_code(context, prev) << std::endl;
                        IPDivergence = true;
                        return;
                    }
                }

                c = 0;
                for (auto entry : cfg_map) {
                    if (entry.second == cfg_map[node])
                        c++;
                }


                stmt_code += print_stmt_code(context, node);
                store_2darray(print_stmt_code(context, node));
            }

            auto cpp_step = cpp_execution_step(vars, stmt_code, interp);
            if (c <= 1 && !match_steps(java_step, cpp_step)) {
                FindVarDefinition varDefinition;
                varDefinition.TraverseStmt(prev);
                if (varDefinition.exists() && prev_step.getStmt().find("(") != std::string::npos) { // we should get prev stmt
                  IPDivergence = true;
                  ValueDivergence = false;
                  prev = varDefinition.init;
                }
                return;
            }
            else if (c > 1) {
                // current_node = current_node->get_children()[0];
                current_node->walk();
                thread.StepOver();
            }


            prev = cpp_cfg_nodes.back();
            prev_step = java_step;
            thread.StepOver();
        }

        IPDivergence = true;

    }


    void sketchy_impl() {

        lldb::SBDebugger::Initialize();

        auto debugger = lldb::SBDebugger(lldb::SBDebugger::Create());
        debugger.SetAsync(false);
        auto target = debugger.CreateTarget("/tmp/a.out");
        target.BreakpointCreateByName("f_filled", target.GetExecutable().GetFilename());
        auto launch_info = lldb::SBLaunchInfo(NULL);
        auto errors = lldb::SBError();
        auto process = target.Launch(launch_info, errors);
        auto thread = process.GetSelectedThread();
        auto interp = debugger.GetCommandInterpreter();

        auto java_trace = load_java_trace(java_trace_file, cfg_java);


        // Get stack frame
        lldb::SBFrame frame = process.GetSelectedThread().GetSelectedFrame();
        std::string current_name = frame.GetFunction().GetDisplayName();
        std::string main_name = "main";

        // Get the entry node
        auto current_node = cfg_cpp->entry_block;
        auto current_java_node = cfg_java;
        if (current_java_node->get_kind() == Node::kind::Special)
            current_java_node = current_java_node->get_children()[0];
        // Get the stmts in the entry node
        // auto block_statements = preproccess(&current_node);
        std::cerr << "Executing ... " << current_name << std::endl;
        while (current_name != main_name) {
            frame = thread.GetSelectedFrame();

            auto vars = frame.GetVariables(true, true, false, true, lldb::DynamicValueType::eDynamicCanRunTarget);
            lldb::SBStream ss;
            auto line_entry = thread.GetSelectedFrame().GetLineEntry();
            debugger.GetSourceManager().DisplaySourceLinesWithLineNumbers(line_entry.GetFileSpec(),
                                                                          line_entry.GetLine(), 0, 0, "", ss);
            //std::cout << "line entry is " << line_entry.GetLine() << std::endl;
            std::string line = ss.GetData();
            if (line.find("f_filled") != std::string::npos) break;
            std::cerr << "line content is as follows" << line << std::endl;

            // match this line with cfg nodes and walk the cfg
            auto cpp_cfg_nodes = match_lldb_cfg(line, current_node, current_java_node, line_entry.GetLine());
            if (cpp_cfg_nodes.empty()) { thread.StepOver(); continue;}
            auto java_step = java_trace[count++];
            auto java_cfg_nodes = match_step_to_node(java_step, current_java_node);

            std::string stmt_code;
            int c = 0;

            for (auto node : cpp_cfg_nodes) {
                if (java_cfg_nodes.empty()) assert(0 && "Execution couldnt match.");

                if (std::find(java_cfg_nodes.begin(), java_cfg_nodes.end(), cfg_map[node]) == java_cfg_nodes.end()) {
                    cout << "Instruction pointer divergence!" << std::endl;
                    cout << "Current node is " << print_stmt_code(context, node) << std::endl;
                    cout << "Java node is " << java_cfg_nodes[0]->getStatement() << std::endl;
                    cout << "Previous node is " << print_stmt_code(context, prev) << std::endl;
                    IPDivergence = true;
                    return;
                }

                c = 0;
                for (auto entry : cfg_map) {
                    if (entry.second == cfg_map[node])
                        c++;
                }


                stmt_code += print_stmt_code(context, node);
                store_2darray(print_stmt_code(context, node));
            }

            auto cpp_step = cpp_execution_step(vars, stmt_code, interp);
            if (c <= 1 && !match_steps(java_step, cpp_step))
                return;
            else if (c > 1) {
                // current_node = current_node->get_children()[0];
                current_node->walk();
                thread.StepOver();
            }


            prev = cpp_cfg_nodes.back();
            thread.StepOver();
        }

    }


    void store_2darray(std::string stmt_code) {
        std::smatch holder;
        if (std::regex_search(stmt_code,holder, std::regex("[a-zA-Z0-9_]+\\ *([a-zA-Z0-9_]+)\\ *\\[(.*)\\].*\\[(.*)\\]"))) {
            if (prev_decl_col.find(holder.str(1)) == prev_decl_col.end()) {
                prev_decl_row[holder.str(1)] = holder.str(2);
                prev_decl_col[holder.str(1)] = holder.str(3);
            }
        }
    }

    Stmt* getPrev() const {
        return prev;
    }

    bool match_steps(ExecutionStep &java_step, ExecutionStep &cpp_step) {
        auto map = java_step.generate_map(cpp_step);
        // we have to query clang only about the variables being used as right values
        bool is_diverging = java_step.is_diverging(cpp_step, map);
        if (is_diverging) {

            cout << "Found diverging values." << endl;
            cout << "Java step is " << java_step.getStmt() << endl;
            cout << "Clang step is " << cpp_step.getStmt() << endl;
            cout << "Divergent value is " << java_step.getDivergent() << endl;

            java_divergent = java_step.getDivergent();
            cpp_divergent = map[java_divergent];
            ValueDivergence = true;
            return false;
        }

        return true;
    }

    void compile_debug() const {
        stringstream command;
        command << "g++ -g -std=c++17 " << file_name << " -o /tmp/a.out";
        auto path = __fs::filesystem::current_path(); //getting path
        cerr << path.string() << endl;
        string res_str = command.str();
        auto file = popen(res_str.c_str(), "r");
        char buffer[1024];
        while (fgets(buffer, 1024, file));
    }

    void walk_both(CompressedBlock* &current_block, Node* &java_node) {
        if (java_node->getStatement().find('=') == std::string::npos) {
            java_node = java_node->get_children()[0];
            return;
        } else if (java_node->getStatement().find(" new ") != std::string::npos) {
            java_node = java_node->get_children()[0];
            count++;
            return;
        }
    }

    std::vector<Stmt*> match_lldb_cfg(const std::string& line, CompressedBlock* &current_block, Node* &java_block, int line_n) {
        std::vector<Stmt*> corresponding_stmts;
        StmtPrinter printer(context);

        Stmt* stmt = (Stmt*) current_block->walk();

        // This code deals with end of blocks
        if (stmt == nullptr) {
            bool found = false;
            auto children = current_block->get_children();
            for (auto child: children) {
                stmt = (Stmt *) child->walk();
                auto loc = FullSourceLoc(stmt->getBeginLoc(), context.getSourceManager());
                if (loc.getLineNumber() == line_n) {
                    current_block->reset();
                    current_block = child;
                    found = true;
                    break;
                } else {
                    child->walk_back();
                }
            }

            // Something strange happened here
            if (stmt == nullptr || !found) {
                return corresponding_stmts;
            }
        }

        // This code decides how many steps we should walk in cfg
        while (stmt != nullptr) {
            auto loc = FullSourceLoc(stmt->getBeginLoc(), context.getSourceManager());
            int actual_line = loc.getLineNumber();
            if (actual_line == line_n) {
                corresponding_stmts.push_back(stmt);
            } else if (!corresponding_stmts.empty()) {
                current_block->walk_back();
                break;
            } else if (auto decl = dyn_cast<DeclStmt>(stmt)) {
                walk_both(current_block, java_block);
                return match_lldb_cfg(line, current_block, java_block, line_n);
            } else {
                assert(0 && "Couldn't match execution trace");
            }
            stmt = (Stmt*) current_block->walk();
        }

        for (auto stmt2 : corresponding_stmts)
            std::cerr << "cfg line is " << printer.print(stmt2);
        return corresponding_stmts;
    }

    ExecutionStep cpp_execution_step(lldb::SBValueList& vars, std::string stmt_code, lldb::SBCommandInterpreter& frame) {
        ExecutionStep step(stmt_code);

        for (int i = 0; i < vars.GetSize(); i++) {
            if (vars.GetValueAtIndex(i).IsValid()) {
                lldb::SBStream ss;
                vars.GetValueAtIndex(i).GetDescription(ss);
                std::string data = ss.GetData();

                std::string vector_rgx_expr = "\\((.*)\\) ([a-zA-Z0-9_]+) = ([{(](.|\n)*[})])\n";
                std::regex rgx(vector_rgx_expr);
                std::smatch holder;

                if (std::regex_search(data,holder, std::regex("\\((.*) \\[\\]\\[\\]\\) ([a-zA-Z0-9_]+) ="))) {
                    if (prev_decl_col.find(holder.str(2)) == prev_decl_col.end())
                        continue;

                    stringstream final_val = extract2DArray(vars, frame, i, holder);

                    if (final_val.str().empty()) {
                        RunTimeValue rtv(holder.str(1) + "[][]", holder.str(2), final_val.str(), false);
                        step.add_var(rtv);
                    } else {
                        RunTimeValue rtv(holder.str(1) + "[][]", holder.str(2), final_val.str());
                        step.add_var(rtv);
                    }

                    std::cerr << final_val.str();
                } else if (std::regex_match(data,holder, rgx)) {
                    //std::cout << holder.str(3) << std::endl;
                    std::stringstream s;
                    std::string line;
                    s << "{ ";
                    auto type = holder.str(1);
                    auto name = holder.str(2);

                    std::string tmp_holder = data;
                    int cols = std::count(data.begin(), data.end(), '[') - 1;
                    for (int k = 0; k < cols; k++) {
                        auto pos = tmp_holder.find("[" + to_string(k) + "] =");
                        tmp_holder = tmp_holder.substr(pos + 6);
                        while (tmp_holder[0] == ' ' or tmp_holder[0] == '\n') tmp_holder = tmp_holder.substr(1);
                        while (isalpha(tmp_holder[0]) or isdigit(tmp_holder[0]) or tmp_holder[0] == '-') {
                            s << tmp_holder[0];
                            tmp_holder = tmp_holder.substr(1);
                        }
                        if (k != cols - 1) {
                            s << ", ";
                        }
                    }


                    s << " }";
                    std::string val = s.str();
                    std::cerr << val;
                    RunTimeValue rtv(type, name, val);
                    step.add_var(rtv);
                } else if (std::regex_search(data,holder, std::regex("\\((.*)\\) ([a-zA-Z0-9_]+) = <variable not available>"))) {
                    RunTimeValue rtv(holder.str(1), holder.str(2), "", false);
                } else {
                    std::string rgx_expr = "\\((.*)\\) ([a-zA-Z0-9_]+) = (.*)\n";
                    std::regex rgx(rgx_expr);
                    std::regex_match(data,holder, rgx);
                    RunTimeValue rtv(holder.str(1), holder.str(2), holder.str(3));
                    step.add_var(rtv);
                    std::cerr << data;
                }
            }
        }

        return step;

    }

    stringstream
    extract2DArray(const lldb::SBValueList &vars, lldb::SBCommandInterpreter &frame, int i, const smatch &holder) {
        if (var_size.find(holder.str(2)) == var_size.end()) {
            std::string n_holder_col = getRowsCols(frame, holder, prev_decl_col);
            std::string n_holder_row = getRowsCols(frame, holder, prev_decl_row);

            int second = atoi(n_holder_col.c_str());
            int first = atoi(n_holder_row.c_str());

            var_size[holder.str(2)] = make_pair(first, second);

        }
        lldb::SBStream ss;

        auto b = vars.GetValueAtIndex(i).GetType().GetBasicType();
        auto res = lldb::SBCommandReturnObject();
        int row = var_size[holder.str(2)].first;
        int col = var_size[holder.str(2)].second;
        string command = "p *(" + holder.str(1) +"(*)[" + to_string(row) + "][" + to_string(col) + "])" + holder.str(2);

        frame.HandleCommand(command.c_str(), res);
        string data = res.GetOutput();
        stringstream final_val;
        if (data == "") {
            return final_val;
        }



        std::string tmp_holder = data;
        for (int j = 0; j < row; j++) {
            size_t pos = tmp_holder.find("[" + to_string(j) + "]");
            tmp_holder = tmp_holder.substr(pos + 3);
            final_val << "{ ";
            for (int k = 0; k < col; k++) {
                pos = tmp_holder.find("[" + to_string(k) + "] =");
                tmp_holder = tmp_holder.substr(pos + 6);
                while (tmp_holder[0] == ' ' or tmp_holder[0] == '\n') tmp_holder = tmp_holder.substr(1);
                while (isalpha(tmp_holder[0]) or isdigit(tmp_holder[0]) or tmp_holder[0] == '-') {
                    final_val << tmp_holder[0];
                    tmp_holder = tmp_holder.substr(1);
                }
                if (k != col - 1) {
                    final_val << ", ";
                }
            }
            if (j == row - 1) final_val << " }}";
            else final_val << " }, ";
        }
        return final_val;
    }

    std::string getRowsCols(lldb::SBCommandInterpreter &frame, const smatch &holder, std::map<string, string> &prev_decl) {
        auto res = lldb::SBCommandReturnObject();
        frame.HandleCommand(("expr " + prev_decl[holder.str(2)]).c_str(), res);
        string second_str = res.GetOutput();
        smatch n_holder;
        regex_search(second_str,n_holder, regex(" = ([0-9]+)"));
        return n_holder.str(1);
    }

    bool isIpDivergence() const {
        return IPDivergence;
    }

    bool isValueDivergence() const {
        return ValueDivergence;
    }


    std::string file_name;
    std::string java_trace_file;
    ClangCompressedCFG* cfg_cpp;
    RunTimeValue cpp_divergent;
    RunTimeValue java_divergent;
    Node* cfg_java;
    std::map<clang::Stmt *, Node *> cfg_map;
    std::map<std::string, std::pair<int, int>> var_size;
    std::map<std::string, std::string> prev_decl_col;
    std::map<std::string, std::string> prev_decl_row;
    clang::ASTContext& context;
    Stmt *prev = nullptr;
    int count = 0;
    bool IPDivergence = false;
    bool ValueDivergence = false;
    ExecutionStep prev_step;
};




void run_lldb(std::string file_name) {
    std::stringstream command;
    command << "g++ -g -std=c++17 " << file_name << " -o /tmp/a.out";
    auto path = std::__fs::filesystem::current_path(); //getting path
    std::cerr << path.string() << std::endl;
    std::string res_str = command.str();
    popen(res_str.c_str(), "r");

    const int sizebuf = 1234;
    char buff[sizebuf];


    lldb::SBDebugger::Initialize();

    auto debugger = lldb::SBDebugger(lldb::SBDebugger::Create());
    debugger.SetAsync(false);


    auto target = debugger.CreateTarget("/tmp/a.out");


    target.BreakpointCreateByName("f_filled", target.GetExecutable().GetFilename());

    auto launch_info = lldb::SBLaunchInfo(NULL);
    auto errors = lldb::SBError();
    auto proccess = target.Launch(launch_info, errors);


    auto frame = proccess.GetSelectedThread().GetSelectedFrame();
    std::string current_name = frame.GetFunction().GetDisplayName();
    std::string main_name = "main";
    auto thread = proccess.GetSelectedThread();

    while (true) {
        frame = thread.GetSelectedFrame();

        auto vars = frame.GetVariables(true, true, false, true, lldb::DynamicValueType::eDynamicCanRunTarget);
        lldb::SBStream ss;
        //auto symbol = frame.GetSymbol();
        auto line_entry = thread.GetSelectedFrame().GetLineEntry();
        debugger.GetSourceManager().DisplaySourceLinesWithLineNumbersAndColumn(line_entry.GetFileSpec(),
                                                                               line_entry.GetLine(),
                                                                               line_entry.GetColumn(), 0, 0, "", ss);
        std::string readable = ss.GetData();

        std::cerr << readable << std::endl;


        for (int i = 0; i < vars.GetSize(); i++) {
            if (vars.GetValueAtIndex(i).IsValid()) {
                lldb::SBStream ss;
                vars.GetValueAtIndex(i).GetDescription(ss);
                std::string data = ss.GetData();
                std::cerr << data;
            }
        }

        thread.StepOver();

    }
}
