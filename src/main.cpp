#include <iostream>
#include <memory>
#include <algorithm>
#include <vector>
#include <sstream>
#include <map>
#include <chrono>
#include <fstream>
#include <unistd.h>
#include <sys/wait.h>
#include <filesystem>
#include <poll.h>


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

#include "clang/AST/PrettyPrinter.h"
#include "clang/Basic/LangOptions.h"
#include "JavaGraph.h"

#include "clang/Rewrite/Frontend/FixItRewriter.h"
#include <regex>
#include "clang/Analysis/CFG.h"
#include "clang/Lex/Lexer.h"
#include <stdlib.h>

#include "Enumerator.h"
#include "ClangVisitors.h"
#include "ExecutionTraces.cpp"
#include "ClangCompressedCFG.h"
#include "HyperGraph.h"
#include "MaxSATWrapper.h"
#include "SyntaxErrors.h"
#include "SemanticErrors.h"



int main(int argc, const char **argv) {

    CLI::App app{"Synthesizer"};

    std::string code_file, graph_file, resource_dir, trace;
    app.add_option("-f,--file", code_file, "Source code");
    app.add_option("-g,--graph", graph_file, "Graph code");
    app.add_option("-t,--trace", trace, "Trace code");

    app.add_option("-c, --clang-resource", resource_dir, "Clang resource dirs");

    CLI11_PARSE(app, argc, argv);
    std::cerr << "Input files: " << code_file << ", " << graph_file << std::endl;


    int i = 0;
    std::string code = file_to_string(code_file);
    assert(!code.empty());


    code = preprocess(code);

    SyntaxErrors syntax(code);
    while (!syntax.fix_syntax_errors() && i++ < 5);
    //std::cout << code << std::endl;
    //std::vector<string> programs;//programs.push_back(syntax.get_current_code());
    SemanticErrors semantics(syntax.get_current_code(), graph_file, trace);
    while(!semantics.semantic_analysis() && i++ < 5);

    return 0;
}