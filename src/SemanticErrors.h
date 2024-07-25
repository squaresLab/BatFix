//
// Created by anon on 1/17/22.
//

#ifndef SIMPLE_SEMANTICERRORS_H
#define SIMPLE_SEMANTICERRORS_H


#include "string"
#include "clang/AST/DeclarationName.h"
#include "clang/Tooling/Core/Replacement.h"
#include "clang/Tooling/Tooling.h"
#include "clang/ASTMatchers/ASTMatchFinder.h"
#include "../CLI11.hpp"
#include "CodePreprocessing.h"
#include "llvm/ADT/StringRef.h"
#include "clang/Basic/Diagnostic.h"
#include "clang/Basic/SourceLocation.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/AST/AST.h"
#include "clang/AST/ASTConsumer.h"
#include "clang/Frontend/TextDiagnosticPrinter.h"
#include "clang/Basic/DiagnosticOptions.h"
#include "clang/AST/Type.h"
#include "clang/AST/Stmt.h"
#include <clang/Sema/Lookup.h>
#include <clang/Sema/ExternalSemaSource.h>
#include <clang/Sema/Sema.h>
#include "ClangUtils.h"
#include <cstdlib>


#include "clang/AST/PrettyPrinter.h"
#include "clang/Basic/LangOptions.h"
#include "JavaGraph.h"

#include "clang/Rewrite/Frontend/FixItRewriter.h"
#include <regex>
#include "clang/Analysis/CFG.h"
#include "clang/Lex/Lexer.h"
#include <stdlib.h>
#include "CFGMatchingUtils.h"
#include "ClangUtils.h"
#include "CFGMatchingUtils.h"
#include "Synthesizer.h"
#include "ClangCompressedCFG.h"

class SemanticErrors {

public:

    SemanticErrors(const std::string &current_code, const std::string &graph_file, std::string trace = "") {
        this->current_code = current_code;
        this->graph_file = graph_file;
        this->trace_file = trace;
    }


    void find_placeholders(ASTContext& context, std::map<clang::Stmt*, Node*>& cfg_mapping,
                           std::map<clang::Stmt*, std::string> &sketches, std::map<clang::Stmt*, std::vector<VarDecl*>> &context_variables) {


        for (auto & pair : cfg_mapping) {
            auto cpp = pair.first;
            clang::WalkBack g(context, cpp);
            g.CustomVisit(cpp);
            clang::FindVarInExpr ReplaceFoo("foo", context, g.get_declarations());
            ReplaceFoo.TraverseStmt(cpp);
            if (ReplaceFoo.Found) {
                cpp->dump();

                sketches[cpp] = pair.second->getStatement();
                context_variables[cpp] = g.get_declarations();
            }
        }

        assert(sketches.size() >= 1 && "CFG Mapping Failed. Cannot find mapping");
    }


    void replace_placeholders(std::unique_ptr<clang::ASTUnit> &ast, clang::FunctionCallBack &callback, std::string graph_file)  {
        std::cerr << "Replacing placeholders" << std::endl;

        // Find variables and types
        clang::FindVariablesVisitor visitor;
        visitor.TraverseFunctionDecl(callback.getNode());
        std::map<std::string, clang::ValueDecl *> var_names;
        std::map<clang::CXXMethodDecl *, std::string> methods;
        std::map<clang::FunctionDecl *, std::string> c_funcs;

        // Extract all variables and functions available in this context
        extract_variable_methods(visitor.getDeclarations(), var_names, methods);
        extact_context_methods(ast->getASTContext(), c_funcs, "std::max");
        extact_context_methods(ast->getASTContext(), c_funcs, "std::min");
        extact_context_methods(ast->getASTContext(), c_funcs, "std::max_element");
        extact_context_methods(ast->getASTContext(), c_funcs, "std::min_element");
        extact_context_methods(ast->getASTContext(), c_funcs, "std::reverse");
        extact_context_methods(ast->getASTContext(), c_funcs, "std::sort");
        extact_context_methods(ast->getASTContext(), c_funcs, "toupper");
        extact_context_methods(ast->getASTContext(), c_funcs, "isupper");

        std::cerr << "Variables size " << var_names.size() << std::endl;
        std::cerr << "Variables:" << std::endl;
        for (auto var: var_names) {
            std::cerr << var.first << std::endl;
        }
        std::cerr << "Methods size" << methods.size() << std::endl;
        std::cerr << "Methods:" << std::endl;
        for (auto method: methods) {
            std::cerr << method.second << std::endl;
        }

        auto map = match_cfgs(ast, callback, graph_file);


        // Find the placeholders and corresponding sketches
        std::map<clang::Stmt*, std::string> sketches;
        std::map<clang::Stmt*, std::vector<VarDecl*>> context_variables;
        find_placeholders(ast->getASTContext(), map, sketches, context_variables);

        synth = std::make_unique<Synthesizer>(sketches, context_variables, std::move(ast), callback.getNode());
        auto programs = synth->synthesize();


        std::hash<string> hasher;

        writeto_synthesis_tmp(graph_file, programs);

    }

    void writeto_synthesis_tmp(const string &graph_file, std::vector<string> programs) {
        for (int i = 0; i < programs.size(); i++) {
            stringstream stream;

            regex re(".*/(.*).java");
            smatch sm;
            regex_match (graph_file,sm,re);
            vector<string> matches;

            stream << "/Users/anon/Desktop/Dev.nosync/Java2CPP/synthesis_tmp/program_" << sm[1].str() << ".cpp";
            synthesis_file = stream.str();
            ofstream o(stream.str());
            assert(o);
            o << programs[i] << endl;
            o.close();
        }
    }

    bool semantic_analysis() {
        // Do we need to do anything?
        auto ast = compile(current_code);
        rewriter = Rewriter();
        clang::FunctionCallBack callback = getFunction(ast, "f_filled");

        clang::FindVarInExpr ReplaceFoo("foo", ast->getASTContext());
        ReplaceFoo.TraverseStmt(callback.getNode()->getBody());
        write_to_file(current_code);

        if (ReplaceFoo.Found) {
            std::cerr << "Replacing placeholders!" << std::endl;
            replace_placeholders(ast, callback, graph_file);
            // test_python_semantics();
            return true;
        } else {
            std::string new_code = current_code;
            return find_diverging_code(ast, callback, new_code);
        }
    }

    bool find_diverging_code(unique_ptr<ASTUnit> &ast, FunctionCallBack &callback, const string &new_code) {
        ofstream myfile;
        myfile.open("/tmp/tmp.cpp");
        myfile << new_code;
        myfile.close();
        CFG::BuildOptions options;
        auto opt = LangOptions();
        auto cfg = CFG::buildCFG(callback.getNode(), callback.getNode()->getBody(), &ast->getASTContext(), options);
        auto node = Node::ParseGraph(graph_file);

        auto compressed_cfg = clang::ClangCompressedCFG(std::move(cfg), ast->getASTContext());
        compressed_cfg.build_compressed_cfg();


        auto hyper_graph = compressed_cfg.build_hyper_graph();
        StmtPrinter printer(ast->getASTContext());
        HyperBlockPrinter<StmtPrinter> hyper_node_printer_stmt(printer);

        HyperGraph<Node>* hyper_java = node->build_hyper_graph();
        NodePrinter printer_node;
        HyperBlockPrinter<NodePrinter> hyper_node_printer(printer_node);

        auto map = find_mapping(hyper_graph, printer, hyper_node_printer_stmt, hyper_java, printer_node, hyper_node_printer);

        for (auto kv : map) {
            if (kv.first && kv.second)
                std::cerr << printer.print(kv.first) << " matches " << printer_node.print(kv.second) << std::endl;
        }


        ExecutionTraceExec exec("/tmp/tmp.cpp", trace_file, &compressed_cfg, node, map, ast->getASTContext());

        exec.new_compute_execution_traces();
        if (exec.isValueDivergence()) {

            if (exec.cpp_divergent.getType().find("[") != std::string::npos or
                    exec.cpp_divergent.getType().find("vector") != std::string::npos) {
                std::string def_val;
                int start = exec.java_divergent.getValue().find("{");
                int end = exec.java_divergent.getValue().find(",");
                if (start != std::string::npos && end != std::string::npos) {
                    def_val = exec.java_divergent.getValue().substr(start + 1, end - start - 1);
                }
                initialize_vectors(ast, callback, exec.cpp_divergent.getName(), def_val);
                return test_code();

            } else {
                initialize_variables(ast, callback, exec.cpp_divergent.getName(), exec.java_divergent.getValue());
                return test_code();

            }
        } else if (exec.isIpDivergence()) {
            auto div = exec.getPrev();
            instruction_point_divergence(ast, callback, div);
            test_python_semantics();
        }

        return true;

    }

    void instruction_point_divergence(unique_ptr<ASTUnit> &ast, FunctionCallBack &callback, Stmt* div) {
        rewriter.setSourceMgr(ast->getSourceManager(), ast->getLangOpts());
        rewriter.ReplaceText(div->getSourceRange(), "foo");

        auto pres_loc = ast->getSourceManager().getPresumedLoc(div->getBeginLoc());
        write_fault_local(pres_loc.getLine());

        const RewriteBuffer *RewriteBuf = rewriter.getRewriteBufferFor(ast->getSourceManager().getMainFileID());
        if (RewriteBuf) {
            current_code = string(RewriteBuf->begin(), RewriteBuf->end());
            test_cd = current_code;
        } else {
            current_code = ast->getSourceManager().getBufferData(ast->getSourceManager().getMainFileID()).str();
            test_cd = current_code;
        }

        std::cout << current_code << std::endl;
        write_to_file(current_code);


        semantic_analysis();


    }

    void initialize_variables(unique_ptr<ASTUnit> &ast, FunctionCallBack &callback, std::string var_name, std::string default_val) {
        rewriter.setSourceMgr(ast->getSourceManager(), ast->getLangOpts());
        FixAssignments init(rewriter, default_val, var_name);
        init.TraverseStmt(callback.getNode()->getBody());

        auto pres_loc = ast->getSourceManager().getPresumedLoc(init.decl->getBeginLoc());
        write_fault_local(pres_loc.getLine());

        const RewriteBuffer *RewriteBuf = rewriter.getRewriteBufferFor(ast->getSourceManager().getMainFileID());
        if (RewriteBuf) {
            current_code = string(RewriteBuf->begin(), RewriteBuf->end());
        } else {
            current_code = ast->getSourceManager().getBufferData(ast->getSourceManager().getMainFileID()).str();
        }
        write_to_file(current_code);
    }

    void initialize_vectors(unique_ptr<ASTUnit> &ast, FunctionCallBack &callback, std::string var_name, std::string default_val) {
        rewriter.setSourceMgr(ast->getSourceManager(), ast->getLangOpts());
        AutoInit init(rewriter, var_name, default_val);
        init.TraverseStmt(callback.getNode()->getBody());

        auto pres_loc = ast->getSourceManager().getPresumedLoc(init.decl->getBeginLoc());
        init.decl->dump();
        write_fault_local(pres_loc.getLine());

        const RewriteBuffer *RewriteBuf = rewriter.getRewriteBufferFor(ast->getSourceManager().getMainFileID());
        if (RewriteBuf) {
            current_code = string(RewriteBuf->begin(), RewriteBuf->end());
        } else {
            current_code = ast->getSourceManager().getBufferData(ast->getSourceManager().getMainFileID()).str();
        }
        write_to_file(current_code);
    }

    void write_fault_local(int line_n) {
        stringstream stream;

        regex re(".*/(.*).java");
        smatch sm;
        regex_match (graph_file, sm, re);
        vector<string> matches;

        stream << "/Users/anon/Desktop/Dev.nosync/Java2CPP/fault_local_results/" << sm[1].str() << ".cpp";
        output_file_name = stream.str();
        ofstream o(output_file_name, std::ios_base::app);
        assert(o);
        o << line_n << endl;
        o.close();
    }

    void write_to_file(const string &new_code) {

        stringstream stream;

        regex re(".*/(.*).java");
        smatch sm;
        regex_match (graph_file, sm, re);
        vector<string> matches;

        stream << "/Users/anon/Desktop/Dev.nosync/Java2CPP/semantics_tmp/" << sm[1].str() << ".cpp";
        output_file_name = stream.str();
        ofstream o(output_file_name);
        assert(o);
        o << new_code << endl;
        o.close();
    }

    bool test_python_semantics() {
        stringstream command;
        string abs_path = "/Users/anon/Desktop/Dev.nosync/Java2CPP/synthesis_tmp";
        command << "python3 test_programs.py -d " << abs_path << " -b " << synthesis_file;
        string res_str = command.str();
        auto file = popen(res_str.c_str(), "r");
        char buffer[1024];
        while (fgets(buffer, 1024, file));

        regex regx("([A-Z]*) ([0-9]*)\n");
        smatch match;
        string output(buffer);
        if (regex_match(output, match, regx)) {
            if (match.str(1) == "FAIL") {
                return true;
            } else if (match.str(1) == "MAYBE") {
                // Use the replica to choose
                auto tmp = compile(test_cd);
                clang::Rewriter tmp_rewriter;
                tmp_rewriter.setSourceMgr(tmp->getSourceManager(), tmp->getLangOpts());
                clang::FunctionCallBack callback = getFunction(tmp, "f_filled");

                string s = match.str(2);
                int idx = std::atoi(s.c_str());


                // This is legacy code to generate the placeholders


                auto cfg_mapping = match_cfgs(tmp, callback, graph_file);

                for (auto & pair : cfg_mapping) {
                    auto cpp = pair.first;
                    clang::WalkBack g(tmp->getASTContext(), cpp);
                    g.CustomVisit(cpp);
                    clang::FindVarInExpr ReplaceFoo("foo", tmp->getASTContext());
                    ReplaceFoo.TraverseStmt(cpp);
                    if (ReplaceFoo.Found) {
                        //Replace the code with the chosen stmt
                        cpp->dump();
                        tmp_rewriter.ReplaceText(cpp->getSourceRange(), synth->replacements[0][idx]);
                        const RewriteBuffer *RewriteBuf = tmp_rewriter.getRewriteBufferFor(tmp->getSourceManager().getMainFileID());
                        current_code = string(RewriteBuf->begin(), RewriteBuf->end());
                        // Try again
                        return semantic_analysis();
                    }
                }


            } else {
                return true;
            }
        }
        std::cout << buffer << std::endl;
        return true;

    }

    bool test_code() {
        // copy and compile
        stringstream command;
        command << "g++ -g -std=c++17 " << output_file_name << " -o /tmp/a.out";
        auto path = __fs::filesystem::current_path(); //getting path
        cerr << path.string() << endl;
        string res_str = command.str();
        auto file = popen(res_str.c_str(), "r");
        char buffer[1024];
        while (fgets(buffer, 1024, file));

        // run the program
        res_str = "/tmp/a.out";
        file = popen(res_str.c_str(), "r");
        while (fgets(buffer, 1024, file));
        std::cout << buffer << std::endl;

        regex regx("#Results: ([0-9]*), ([0-9]*)");
        smatch match;
        string output(buffer);
        if (regex_match(output, match, regx)) {
            if (match.str(1) == match.str(2)) {
                return true;
            }
        }

        return false;
    }

    std::unique_ptr<ASTUnit> compile(std::string code) {

        vector<string> args = {"-std=c++14",
                               "-isysroot/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk",
                               "-resource-dir=/Users/anon/Documents/Dev.nosync/llvm-project/build/lib/clang/14.0.0",
                               "-I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk/usr/include/c++/v1"};

        const char *testCode = code.c_str();
        std::cerr << code << std::endl;
        llvm::StringRef testCodeData(testCode);
        std::stringstream ss;
        ss << "input" << num++ <<".cpp";

        return tooling::buildASTFromCodeWithArgs(testCodeData, args, ss.str(), "clang-tool",
                                                 make_shared<PCHContainerOperations>(),
                                                 tooling::getClangStripDependencyFileAdjuster(),
                                                 tooling::FileContentMappings(),
                                                 nullptr);

    }

    std::string current_code;
    std::string test_cd;
    std::string graph_file;
    std::string trace_file;
    std::string output_file_name;
    std::string synthesis_file;

    clang::Rewriter rewriter;
    int num = 0;
    std::unique_ptr<Synthesizer> synth;
};



#endif //SIMPLE_SEMANTICERRORS_H
