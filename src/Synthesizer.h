//
// Created by anon on 1/19/22.
//

#ifndef SIMPLE_SYNTHESIZER_H
#define SIMPLE_SYNTHESIZER_H


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


#include "clang/AST/DeclVisitor.h"
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
#include "Enumerator.h"
#include "ClangUtils.h"


class EnumeratorFactory : public StmtVisitor<EnumeratorFactory> {

public:

    Stmt* spurious;

    EnumeratorFactory(ASTContext &context, Sema &sema) : context(context), sema(sema) {


    }


    std::unique_ptr<MultiLevelGenerator> create(std::string sketch, Stmt* spurious_stmt, std::vector<VarDecl*> &declarations) {

        this->spurious = spurious_stmt;
        // init variables
        this->sketch = sketch;
        clang::SourceLocation start = spurious_stmt->getBeginLoc();
        clang::SourceLocation end = spurious_stmt->getEndLoc();
        this->range = SourceRange(start, end);

        // implementation
        std::regex re("[!=><+-*/\\+]");
        std::sregex_token_iterator first{sketch.begin(), sketch.end(), re, -1}, last;
        vector<std::string> matches;
        matches = std::vector<std::string>{first, last};

        std::map<std::string, clang::ValueDecl *> variable_names;
        std::map<clang::CXXMethodDecl *, std::string> methods;
        std::map<clang::FunctionDecl *, std::string> lib_functions;

        // append special variables;

        extract_variable_methods(declarations, variable_names, methods);
        extact_context_methods(context, lib_functions, "std::max");
        extact_context_methods(context, lib_functions, "std::min");
        extact_context_methods(context, lib_functions, "std::max_element");
        extact_context_methods(context, lib_functions, "std::min_element");
        extact_context_methods(context, lib_functions, "isupper");
        extact_context_methods(context, lib_functions, "toupper");

        //extact_context_methods(context, lib_functions, "isdigit");
        //extact_context_methods(context, lib_functions, "find");
        //extact_context_methods(context, lib_functions, "sqrt");
        //extact_context_methods(context, lib_functions, "pow");
        // extact_context_methods(context, lib_functions, "max_element");
        //extact_context_methods(context, lib_functions, "std::sort");
        //extact_context_methods(context, lib_functions, "std::reverse");



        extract_special_variables(context, declarations, variable_names);

        if (matches.size() > 1) // is arithmetic or assignment
            generator = std::make_unique<ArithmeticGenerator>(methods, variable_names, lib_functions, sema, sketch);
        else if (sketch.find("fun") != string::npos)
            generator = std::make_unique<FunGenerator>(methods, variable_names, lib_functions, sema, sketch);
        else
            generator = std::make_unique<VarGenerator>(variable_names, sketch);


        Visit(spurious_stmt);
        if (multilevel_generator == nullptr) {
            auto parent = context.getParents(*spurious_stmt).begin();
            Visit((Stmt*) parent->get<clang::Stmt>());
        }
        return std::move(multilevel_generator);
    }


    void VisitCompoundStmt(CompoundStmt *S) {
        multilevel_generator = std::make_unique<MultiLevelGenerator>(std::move(generator), range, sketch);
    }

    void VisitIfStmt(IfStmt *S) {

        auto grandparent = context.getParents(*S).begin();
        if (grandparent->get<clang::CompoundStmt>())
            multilevel_generator = std::make_unique<IfExprGenerator>(std::move(generator), S, range, sketch);
        else if (auto typed_grandparent = grandparent->get<clang::Stmt>()) {
            multilevel_generator = std::make_unique<IfExprGenerator>(std::move(generator), S, range, sketch, (clang::Stmt *) typed_grandparent);
        } else {
            assert(0);
        }

    }

    void VisitForStmt(ForStmt *S) {

        if (S->getCond() == llvm::dyn_cast<Expr>(spurious)) {
            auto grandparent = context.getParents(*S).begin();
            multilevel_generator = std::make_unique<ForExprGenerator>(std::move(generator), S, range, sketch);
        } else {
            multilevel_generator = std::make_unique<MultiLevelGenerator>(std::move(generator), range, sketch);

        }
    }

    void VisitDeclStmt(DeclStmt* S) {
      multilevel_generator = std::make_unique<DeclStmtGenerator>(std::move(generator), S, range, sketch);
    }

    void VisitSwitchStmt(SwitchStmt* S) {
        multilevel_generator = std::make_unique<SwitchExprGenerator>(std::move(generator), S, range, sketch);
    }

    void VisitWhileStmt(WhileStmt *S) {

        if (S->getCond() == llvm::dyn_cast<Expr>(spurious)) {
            auto grandparent = context.getParents(*S).begin();
            multilevel_generator = std::make_unique<WhileGenerator>(std::move(generator), S, range, sketch);
        } else {
            multilevel_generator = std::make_unique<MultiLevelGenerator>(std::move(generator), range, sketch);

        }
    }


private:
    std::unique_ptr<MultiLevelGenerator> multilevel_generator;
    std::unique_ptr<Generator> generator;
    std::string sketch;
    SourceRange range;
    ASTContext &context;
    clang::Sema &sema;

};


class Synthesizer {

public:

    Synthesizer(std::map<clang::Stmt*, std::string> sketches, std::map<clang::Stmt*,
                std::vector<VarDecl*>> context_variables, std::unique_ptr<clang::ASTUnit> ast, FunctionDecl* f_filled) :
                sketches(sketches), context_variables(context_variables), ast(std::move(ast)), f_filled(f_filled) {
    }

    void init() {

        EnumeratorFactory factory(ast->getASTContext(), ast->getSema());

        for (auto& pair : sketches) {
            auto& sketch = pair.second;
            auto& spurious_stmt = pair.first;
            auto& declarations = context_variables[spurious_stmt];
            auto generator = factory.create(sketch, spurious_stmt, declarations);

            replacements.emplace_back();
            generator->set_synthesizer(replacements);
            generator->next_depth = std::move(enumerator);
            enumerator = std::move(generator);
        }
    }

    std::vector<std::string> synthesize() {
        std::vector<std::string> programs;
        init();

        while (enumerator->has_next()) {
            clang::Rewriter rewriter;
            rewriter.setSourceMgr(ast->getSourceManager(), ast->getLangOpts());
            enumerator->next(rewriter);

            for (int i = 0; i < sketches.size(); i++) {
                auto start_loc = f_filled->getBeginLoc();
                std::stringstream env_var;
                env_var << "env_var_" << i;
                std::stringstream getenv;
                getenv << "int " << env_var.str() << " = atoi(getenv(\"" << env_var.str() << "\"));" << std::endl;
                std::string landmine = getenv.str();

                llvm::StringRef declaration(landmine);
                rewriter.InsertTextBefore(start_loc, declaration);
            }

            assert(enumerator->rewriter == &rewriter);

            const clang::RewriteBuffer *RewriteBuf = rewriter.getRewriteBufferFor(ast->getSourceManager().getMainFileID());
            assert(RewriteBuf != nullptr);
            std::string new_code = std::string(RewriteBuf->begin(), RewriteBuf->end());
            programs.push_back(new_code);
        }

        std::cerr << "Generated a total of " << programs.size() << " programs." << std::endl;
        return programs;
    }


    std::unique_ptr<clang::ASTUnit> ast;
    std::map<clang::Stmt*, std::string> sketches;
    std::map<clang::Stmt*, std::vector<VarDecl*>> context_variables;
    std::unique_ptr<MultiLevelGenerator> enumerator;
    FunctionDecl* f_filled;
    std::vector<std::vector<std::string>> replacements;

};


#endif //SIMPLE_SYNTHESIZER_H
