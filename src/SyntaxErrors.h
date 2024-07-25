//
// Created by anon on 1/17/22.
//

#ifndef SIMPLE_SYNTAXERRORS_H
#define SIMPLE_SYNTAXERRORS_H


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

#include "clang/AST/PrettyPrinter.h"
#include "clang/Basic/LangOptions.h"
#include "JavaGraph.h"

#include "clang/Rewrite/Frontend/FixItRewriter.h"
#include <regex>
#include "clang/Analysis/CFG.h"
#include "clang/Lex/Lexer.h"
#include <stdlib.h>
#include <fstream>

class SyntaxErrors {

public:
    SyntaxErrors(const std::string &file_string) {
        this->current_code = file_string;
    }

    std::string get_current_code() {
        return this->current_code;
    }

    bool fix_syntax_errors() {

        auto ast = compile();
        // matching code to find functions
        clang::FunctionCallBack callback = getFunction(ast, "f_filled");


        if (!diag.foundErrors()) {
          return true;
        }

        rewriter = clang::Rewriter();
        rewriter.setSourceMgr(ast->getSourceManager(), ast->getLangOpts());
        if (diag.foundFixHint()) { // if we find fix hints
            auto hints = diag.getHints();
            for (auto hint: hints) {
                llvm::StringRef code(hint.CodeToInsert);
                rewriter.ReplaceText(hint.RemoveRange, code);
            }
          transformations.emplace_back("fix_hint");
        } else if (!diag.getUndeclaredIds().empty()) { // undeclared ids
            clang::UndeclaredVisitor undeclared(rewriter, ast->getASTContext(), diag);
            undeclared.Visit(callback.getNode());
          transformations.emplace_back("undeclared_var");
        } else if (!clang::UndeclaredVisitor::declaredIds.empty()) {

        } else if (!diag.getUndeclaredTypes().empty()) { // undeclared types
            assert(diag.getUndeclaredTypes().size() == 1);
            transformations.emplace_back("undeclared_type");

            std::string type = "int";
            auto FuncNode = callback.getNode();

            std::regex re(".*[Ss]tring.*");
            std::smatch sm;
            std::regex_match (diag.getUndeclaredTypes()[0],sm,re);
            if (sm.size() >= 1)
                type = "string";
            else if (FuncNode->isInvalidDecl()) { // hack
                clang::FunctionCallBack callback = getFunction(ast, "f_gold");
                auto opt = clang::LangOptions();
                auto policy = clang::PrintingPolicy(opt);
                opt.CPlusPlus = true;
                policy.Bool = true;
                type = callback.getNode()->getReturnType().getAsString(policy);
            }

            std::stringstream stream;
            stream << "typedef " << type << " " << diag.getUndeclaredTypes()[0] << ";\n";
            FuncNode = getFunction(ast, "f_gold").getNode();
            rewriter.InsertText(FuncNode->getBeginLoc(), stream.str(), false, true);
        } else { // other stuff

            clang::FixItVisitor new_visitor(rewriter, ast->getASTContext(), diag);
            callback.getNode()->dump();
            new_visitor.Visit(callback.getNode());

            if (new_visitor.set_auto)
              transformations.emplace_back("auto");
            else if (new_visitor.set_fun_extern)
              transformations.emplace_back("undeclared_var");
            else {
              transformations.emplace_back("others");
            }

        }

        current_code = gen_code(ast);
        return false;
    }

    std::string gen_code(std::unique_ptr<ASTUnit>& ast) {

        const clang::RewriteBuffer *RewriteBuf = rewriter.getRewriteBufferFor(ast->getSourceManager().getMainFileID());
        if (RewriteBuf == nullptr && diag.getRanges().size() > 1) {
            auto arr = diag.getRanges();
            auto begin = arr[0].getBegin();
            auto end = arr[0].getEnd();

           for (auto el: arr) {
                auto contestant_b = clang::FullSourceLoc(el.getBegin(), ast->getSourceManager());
                auto contestant_e = clang::FullSourceLoc(el.getBegin(), ast->getSourceManager());

                if (contestant_b.isBeforeInTranslationUnitThan(begin))
                    begin = el.getBegin();
                if (!contestant_e.isBeforeInTranslationUnitThan(end))
                    end = el.getEnd();

            }
            clang::SourceRange range(begin, end.getLocWithOffset(1)); // hack for operator []
            rewriter.ReplaceText(range, "foo");
            RewriteBuf = rewriter.getRewriteBufferFor(ast->getSourceManager().getMainFileID());
        } else if (RewriteBuf == nullptr) {

            std::string stringx;
            llvm::raw_string_ostream os(stringx);
            std::string res = "";
            clang::FunctionCallBack callback = getFunction(ast, "f_filled");
            callback.getNode()->print(os);
            rewriter.ReplaceText(callback.getNode()->getSourceRange(), stringx);
            RewriteBuf = rewriter.getRewriteBufferFor(ast->getSourceManager().getMainFileID());

        }

        assert(RewriteBuf != nullptr);
        std::string new_code = std::string(RewriteBuf->begin(), RewriteBuf->end());
        std::cerr << new_code << std::endl;
        return new_code;
    }

    std::unique_ptr<ASTUnit> compile() {

        vector<string> args = {"-std=c++14",
                               "-isysroot/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk",
                               "-resource-dir=/Users/anon/Documents/Dev.nosync/llvm-project/build/lib/clang/14.0.0",
                               "-I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX12.1.sdk/usr/include/c++/v1"};

        const char *testCode = current_code.c_str();
        llvm::StringRef testCodeData(testCode);
        diag = MyDiagnostics();

        return tooling::buildASTFromCodeWithArgs(testCodeData, args, "input.cpp", "clang-tool",
                                                make_shared<PCHContainerOperations>(),
                                                tooling::getClangStripDependencyFileAdjuster(),
                                                tooling::FileContentMappings(),
                                                &diag);

    }

public:
    std::vector<std::string> transformations;

private:
    std::string current_code;
    clang::Rewriter rewriter;
    clang::MyDiagnostics diag;
};


#endif //SIMPLE_SYNTAXERRORS_H
