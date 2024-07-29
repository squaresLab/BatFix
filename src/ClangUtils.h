//
// Created by anon on 1/17/22.
//


#ifndef SIMPLE_CLANGUTILS_H
#define SIMPLE_CLANGUTILS_H

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



class ExtractMethods : public DeclVisitor<ExtractMethods> {

public:

    void VisitFieldDecl(FieldDecl *field) {
        if (field->getAccess() == clang::AS_public) {
            std::stringstream stream;
            stream << field->getName().str();
            std::string prefix = context_prefix.back();
            variables[field] = prefix + stream.str(); //->getType().getAsString();
        }
    }

    void VisitCXXMethodDecl(CXXMethodDecl *method) {

        if (llvm::dyn_cast<clang::CXXConstructorDecl>(method)) {
            return;
        } else if (llvm::dyn_cast<clang::CXXDestructorDecl>(method)) {
            return;
        } else if (method->getAccess() == clang::AS_public) {
            if (method->getDeclName().getNameKind() == clang::DeclarationName::NameKind::CXXOperatorName) {
                auto type_op = method->getReturnType()->getUnqualifiedDesugaredType();
                if (type_op->isLValueReferenceType()) {
                    return;
                } else if (type_op->isPointerType()) {
                    auto type = type_op->getAs<clang::PointerType>()->getPointeeType().getTypePtr();
                    type->dump();
                    if (type->isRecordType()) {
                        context_prefix.push_back(context_prefix.back() + method->getDeclName().getAsString() + "()->");
                        auto t = type->getAs<clang::RecordType>();
                        auto cxx_decl = llvm::dyn_cast<clang::CXXRecordDecl>(t->getDecl());
                        Visit(cxx_decl);
                        context_prefix.pop_back();
                    }
                }
            }

            if (method->getDeclName().isIdentifier()) {
                std::stringstream stream;
                stream << method->getName().str();
                methods[method] = context_prefix.back() + method->getName().str();

                if (method->param_empty() and (method->getName().str() == "begin" or method->getName().str() == "end"))
                    variables[method] = context_prefix.back() + method->getName().str() + "()";
            }
            // cur_vars[stream.str()] = method; //->getType().getAsString();
        }
    }

    void VisitCXXRecordDecl(CXXRecordDecl* cxx_decl) {
        for (auto field: cxx_decl->fields())
            Visit(field);
        for (auto method: cxx_decl->methods()) //method->getReturnType()->getUnqualifiedDesugaredType()->dump()
            Visit(method);
    }

    void VisitVarDecl(VarDecl* decl) {
        auto type = decl->getType();
        if (type->isRecordType()) {
            context_prefix.push_back(decl->getName().str() + '.');
            auto record = llvm::dyn_cast<clang::RecordDecl>(type->getAs<clang::RecordType>()->getDecl());
            this->Visit(record);
            context_prefix.pop_back();
        } else if (type->isPointerType()) {
            context_prefix.push_back(decl->getName().str() + "->");
            type->getAs<clang::PointerType>()->getPointeeType().getTypePtr();
        }
    }

public:
    std::map<clang::ValueDecl*, std::string> variables;
    std::map<clang::CXXMethodDecl*, std::string> methods;
    std::vector<std::string> context_prefix;
};



clang::FunctionCallBack getFunction(std::unique_ptr<clang::ASTUnit> &ast, const std::string &name) {
    clang::ast_matchers::MatchFinder matchFinder;
    clang::FunctionCallBack callback;
    matchFinder.addMatcher(clang::ast_matchers::functionDecl(clang::ast_matchers::hasName(name)).bind("func"),
                           &callback);
    matchFinder.matchAST(ast->getASTContext());
    // callback.getNode()->dump();
    return callback;
}

std::string getCode(std::unique_ptr<clang::ASTUnit> &ast, const clang::FunctionDecl *f_node, bool only_body) {
    clang::SourceRange range(f_node->getBeginLoc(), f_node->getEndLoc());
    if (only_body)
        range = clang::SourceRange(f_node->getBody()->getBeginLoc(), f_node->getBody()->getEndLoc());
    auto f_gold = clang::Lexer::getSourceText(clang::CharSourceRange::getTokenRange(range),
                                              ast->getASTContext().getSourceManager(),
                                              clang::LangOptions(), 0);
    return f_gold.str();
}


void extract_special_variables(clang::ASTContext& ctx, std::vector<clang::VarDecl *> declarations,
                                std::map<std::string, clang::ValueDecl *> &var_names) {


    std::vector<ValueDecl*> ints;
    std::vector<std::string> int_names;

    for (auto it: var_names) {
        auto var_decl = it.second;
        // FIXME hack
        auto var_decl_type = var_decl->getType();

        if (var_decl_type.getAsString() == "int") {
            ints.push_back(it.second);
            int_names.push_back(it.first);
        }
    }

    std::vector<ValueDecl*> strings;
    std::vector<ValueDecl*> arrays;


    for (auto it: var_names) {
        auto var_decl = it.second;
        // FIXME hack
        auto var_decl_type = var_decl->getType();
        std::cerr << var_decl_type.getAsString() << std::endl;

        if (var_decl_type.getAsString() == "std::string") {
            strings.push_back(it.second);
        }
        if (var_decl_type->isPointerType() || var_decl_type->isArrayType()) {
            arrays.push_back(it.second);
        }
    }

    for (auto s : strings) {
        int j = 0;
        for (auto i : ints) {
            auto new_var_name = s->getName().str() + "[" + int_names[j++] + "]";
                var_names[new_var_name] = i; // Gigantic hack
        }
    }

    for (auto s : arrays) {
        int j = 0;
        for (auto i : ints) {
            // Arrays idxs
            auto new_var_name = s->getName().str() + "[" + int_names[j] + "]";
            // FIXME -- Creating a type from the existing pointer is a bad idea.
            if (s->getType()->isPointerType()) {
                auto exp = VarDecl::Create(ctx, i->getDeclContext(), i->getLocation(), i->getLocation(),
                                           i->getIdentifier(), s->getType()->getPointeeType(), nullptr, SC_None);
                var_names[new_var_name] = exp;
                // Array sum
                auto other_new_name = s->getName().str() + "+" + int_names[j++];
                var_names[other_new_name] = s; // Gigantic hack
            }
            if (s->getType()->isArrayType()) {
                auto array_type = s->getType()->getAsArrayTypeUnsafe();
                auto exp = VarDecl::Create(ctx, i->getDeclContext(), i->getLocation(), i->getLocation(), i->getIdentifier(), array_type->getElementType() , nullptr, SC_None);
                var_names[new_var_name] = exp;

            }
        }
    }

    return;

}

void extract_variable_methods(std::vector<clang::VarDecl *> declarations,
                              std::map<std::string, clang::ValueDecl *> &var_names,
                              std::map<clang::CXXMethodDecl *, std::string> &methods) {

    for (auto decl: declarations) {
        decl->dump();
        var_names[decl->getName().str()] = llvm::dyn_cast<clang::ValueDecl>(decl); //->getType().getAsString();

        ExtractMethods extract;
        extract.Visit(decl);
        for (auto method: extract.methods)
            methods[method.first] = method.second;

        for (auto variable: extract.variables)
            var_names[variable.second] = variable.first;
    }
}


void extact_context_methods(clang::ASTContext& ctx, std::map<clang::FunctionDecl *, std::string>& methods, std::string name ) {

    using namespace clang;
    using namespace clang::ast_matchers;

    auto func_matcher = functionDecl(clang::ast_matchers::hasName(name)).bind("func");

    class AnonCallback : public MatchFinder::MatchCallback {
    public :
        virtual void run(const MatchFinder::MatchResult &Result) {
            if (const FunctionDecl *FS = Result.Nodes.getNodeAs<clang::FunctionDecl>("func"))
                cur_methods.push_back((FunctionDecl *) FS);
        }
        std::vector<clang::FunctionDecl*> cur_methods;
    };

    MatchFinder Finder;
    AnonCallback Callback;
    Finder.addMatcher(func_matcher, &Callback);
    Finder.matchAST(ctx);
    for (auto method : Callback.cur_methods)
        methods[method] = name;
}





#endif
