//
// Created by anon on 9/3/21.
//

#ifndef SIMPLE_CLANGVISITORS_H
#define SIMPLE_CLANGVISITORS_H

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

#include "clang/Rewrite/Frontend/FixItRewriter.h"
#include <regex>
#include "clang/Analysis/CFG.h"
#include "clang/Lex/Lexer.h"


using namespace std;

namespace clang {

    class MyDiagnostics : public DiagnosticConsumer {
    public:

        MyDiagnostics() : FoundHints(false), AcceptOnlyNotes(false), IgnoreAll(false), FoundErrors(false) {}

        bool foundFixHint() { return FoundHints; }

        std::vector<FixItHint> &getHints() { return Hints; }

        std::vector<std::string> &getUndeclaredIds() { return UndeclaredIdentifiers; }

        std::vector<std::string> &getUndeclaredTypes() { return UndeclaredTypes; }

        bool foundErrors() { return FoundErrors; }

        FullSourceLoc getLastLocation() { return LastLoc; }

        std::vector<CharSourceRange> getRanges() { return CharRange; }

        void HandleDiagnostic(DiagnosticsEngine::Level DiagLevel,
                              const Diagnostic &Info) {

            // Decide whether we wish to continue parsing diagnostics
            if (IgnoreAll) {
                return;
            } else if (AcceptOnlyNotes && DiagLevel != DiagnosticsEngine::Level::Note) { // Only accept notes after
                IgnoreAll = true;                                                        // finding an error.
                return;
            } else if (DiagLevel == DiagnosticsEngine::Level::Error) {
                AcceptOnlyNotes = true;
                FoundErrors = true;
                for (auto range: Info.getRanges()) {
                    CharRange.push_back(range);
                }
            }

            // Get the source location
            auto loc = FullSourceLoc(Info.getLocation(), Info.getSourceManager());
            SmallString<100> OutStr;

            Info.FormatDiagnostic(OutStr);
            std::cerr << "Test " << Info.getID() << " ---> " << OutStr.c_str() << " " << Info.getRanges().size() << std::endl;

            // Errors we can handle
            // Info.getID() == 3435 || Info.getID() == 4385 || Info.getID() == 4392, Info.getID()
            if (Info.getID() == 3435 || Info.getID() == 4385 || Info.getID() == 4392 || Info.getID() == 3440 || Info.getID() == 3432) { // no template named, did you mean
                Id = Info.getID();
                for (auto i = 0; i < Info.getNumFixItHints(); i++)
                    Hints.push_back(Info.getFixItHint(i));
                FoundHints = IgnoreAll = true;
            } else if (Info.getID() == 4384 || Info.getID() == 4391) { // undeclared id
                auto decl = DeclarationName::getFromOpaqueInteger(Info.getRawArg(0));
                UndeclaredIdentifiers.push_back(decl.getAsString());
            } else if (Info.getID() == 4265) { // is not a function or function pointer
                auto kind = Info.getArgKind(0);
            } else if (Info.getID() == 4409 || Info.getID() == 4416) { // unknown type name
                auto decl = DeclarationName::getFromOpaqueInteger(Info.getRawArg(0));
                UndeclaredTypes.push_back(decl.getAsString());
            } else if (Info.getID() == 4143) { // identifier must be type
                // loc.dump();
            }

            if (!loc.isInSystemHeader()) {
                LastLoc = loc;
            }

        }


    private:
        unsigned int Id;
        bool FoundHints;
        std::vector<FixItHint> Hints;
        std::vector<std::string> UndeclaredIdentifiers;
        std::vector<std::string> UndeclaredTypes;
        bool AcceptOnlyNotes, IgnoreAll, FoundErrors;
        FullSourceLoc LastLoc;
        std::vector<CharSourceRange> CharRange;
    };

    class UndeclaredVisitor : public RecursiveASTVisitor<UndeclaredVisitor> {
    public:
        UndeclaredVisitor(Rewriter &R, ASTContext &C, MyDiagnostics &D) : TheRewriter(R), Context(C),
                                                                          Diagnostics(D), Type("int"),
                                                                          IsFunction(false) {

        }

        void setFunctionNode(FunctionDecl *fn) { FuncNode = fn; }

        bool shouldTraversePostOrder() { return true; }

        void Visit(FunctionDecl* decl) {
            this->setFunctionNode(decl);
            this->TraverseFunctionDecl(decl);
        }

        void DefineVariable() {
            assert (!IsFunction);
            auto s = dyn_cast<CompoundStmt>(FuncNode->getBody());
            assert (!Diagnostics.getUndeclaredIds().empty());
            declaredIds.emplace_back(Diagnostics.getUndeclaredIds().back());
            std::string decl = Type + " " + Diagnostics.getUndeclaredIds().back() + ";\n";
            Diagnostics.getUndeclaredIds().pop_back();
            // s->body_front()->getBeginLoc()
            TheRewriter.InsertText(FuncNode->getBeginLoc(), decl, true, true);
        }

        void DefineFunction() {
            assert(IsFunction);
            std::stringstream stream;
            stream << "extern int " << Diagnostics.getUndeclaredIds().back() << "(";
            for (int i = 0; i < ArgTypes.size(); i++) {
                stream << ArgTypes[i] << " args" << i << ", ";
            }
            stream.seekp(-2, std::ios_base::end);
            stream << ");";
            stream << std::endl;
            TheRewriter.InsertText(FuncNode->getBeginLoc(), stream.str(), false, true);
        }

        bool VisitFunctionDecl(FunctionDecl* decl) {
            assert(decl == FuncNode);
            if (!Diagnostics.getUndeclaredIds().empty()) {
                DefineVariable();
            }
            return true;
        }

        bool VisitRecoveryExpr(RecoveryExpr *expr) {

            if (expr->subExpressions().empty()) { // undefined variable
                const auto &parents = Context.getParents(*expr);
                assert(!parents.empty() && parents.size() == 1);
                auto parent_expr = parents[0].get<CallExpr>();
                assert(parent_expr != NULL);
                for (int i = 0; i < parent_expr->getNumArgs(); i++)
                    if (!parent_expr->getArg(i)->containsErrors())
                        setType(parent_expr->getArg(i)->getType());
                DefineVariable();
                return false;
            } else if (dyn_cast<UnresolvedLookupExpr>(expr->subExpressions()[0])) {
                // this is an undefined function
                IsFunction = true;
                auto args = expr->subExpressions();
                for (int i = 1; i < args.size(); i++)
                    addFunctionArg(args[i]->getType());
                DefineFunction();
                return false;
            }
            return true;
        }

        bool VisitOpaqueValueExpr(OpaqueValueExpr *expr) {
            setType(expr->getType());
            DefineVariable();
            return false;
        }

        void setType(const QualType type) {
            auto opt = LangOptions();
            auto policy = PrintingPolicy(opt);
            opt.CPlusPlus = true;
            policy.Bool = true;
            Type = type.getAsString(policy);
        }

        void addFunctionArg(const QualType type) {
            auto opt = LangOptions();
            auto policy = PrintingPolicy(opt);
            opt.CPlusPlus = true;
            policy.Bool = true;
            ArgTypes.push_back(type.getAsString(policy));
        }

    private:
        Rewriter &TheRewriter;
        ASTContext &Context;
        MyDiagnostics &Diagnostics;
        std::string Type;
        std::vector<std::string> ArgTypes;
        FunctionDecl *FuncNode;
        bool IsFunction;
    public:
        static std::vector<std::string> declaredIds;

    };


    class FindFirstDecl : public RecursiveASTVisitor<FindFirstDecl> {
    public :
        VarDecl* Found;
        std::string Name;

        FindFirstDecl(std::string var_name) : Found(nullptr) , Name(var_name){}

        bool VisitVarDecl(VarDecl* decl) {

            std::string name = decl->getNameAsString();

            if (name == Name) {
                Found = decl;
                return false;
            }
            return true;

        }
    };

    class FindVarInExpr : public RecursiveASTVisitor<FindVarInExpr> {
    public :
        bool Found;
        VarDecl* ActualDecl;
        ASTContext& Context;
        std::string Name;
        std::vector<VarDecl*> Decls;

        FindVarInExpr(std::string var_name, ASTContext & ctx, std::vector<VarDecl*> decls = std::vector<VarDecl*>()) : Found(false) , Name(var_name), Context(ctx), Decls(decls){}

        bool VisitDeclRefExpr(DeclRefExpr* decl) {

            VarDecl *vdecl = dyn_cast<VarDecl>(decl->getDecl());

            if (vdecl) {
                auto name_found = vdecl->getName().str();
                if (name_found == Name)
                    Found = true;
                for (auto declared_name : UndeclaredVisitor::declaredIds) {
                    if (name_found == declared_name ) {
                        bool is_declared = false;
                        for (auto decl: Decls) {
                            if (decl->getNameAsString() == name_found) {
                                is_declared = true;
                            }
                        }
                        if (!is_declared) {
                            Found = true;
                        }
                    }

                }
            }

            return true;

        }

        std::vector<VarDecl*> get_declarations() {
            return Decls;
        }
    };

    class FunctionCallBack : public ast_matchers::MatchFinder::MatchCallback {
    public:
        void run(const ast_matchers::MatchFinder::MatchResult &Result) override {
            node = (FunctionDecl *) Result.Nodes.getNodeAs<FunctionDecl>("func"); // LANDMINE
        }

        FunctionDecl *getNode() { return node; }

    private:
        FunctionDecl *node;
    };

    class FindVarDefinition : public RecursiveASTVisitor<FindVarDefinition> {
    public:
        bool VisitVarDecl(VarDecl *decl) {
          if (decl->hasInit() && !llvm::dyn_cast<CXXConstructExpr>(decl->getInit())) {
              init = decl->getInit();
          }
          return true;
        }

        bool exists() { return init != nullptr; }

        Stmt* init = nullptr;
    };

    class FixItVisitor : public RecursiveASTVisitor<FixItVisitor> {
    public:
        FixItVisitor(Rewriter &R, ASTContext &C, MyDiagnostics &D) : TheRewriter(R), Context(C), Diagnostics(D),
                                                                     InVarContext(false), FoundErrors(false),
                                                                     ReWriteExpr(false), InCallExpr(false),
                                                                     ChangedDecl(nullptr), ChangedStmt(nullptr){}

        std::pair<Stmt*, Decl*> getChanged() {
            return std::pair<Stmt*, Decl*>(ChangedStmt, ChangedDecl);
        }

        void setFunctionNode(FunctionDecl *fn) { FuncNode = fn; }

        bool shouldTraversePostOrder() { return true; }

        void Visit(FunctionDecl* decl) {
            this->setFunctionNode(decl);
            this->TraverseFunctionDecl(decl);
        }

        bool TraverseDecl(Decl *d) {
            if (VarDecl *dc = dyn_cast<VarDecl>(d)) {
                if (dc->hasInit()) {
                    SourceRange range(dc->getBeginLoc(), dc->getLocation());
                    auto text = Lexer::getSourceText(CharSourceRange::getTokenRange(range),
                                                     Context.getSourceManager(),
                                                     LangOptions(), 0);
                    if (text.find("auto") == std::string::npos)
                        InVarContext = true;
                }
            }
            bool traverse = RecursiveASTVisitor<FixItVisitor>::TraverseDecl(d);
            InVarContext = false;
            return traverse;
        }

        bool VisitVarDecl(VarDecl *d) {
            if (FoundErrors) {
                if (llvm::dyn_cast<TemplateSpecializationType>(d->getType())) {
                    TheRewriter.RemoveText(d->getInit()->getSourceRange());
                } else {
                    set_auto = true;
                    std::string new_decl = "auto ";
                    new_decl += d->getNameAsString();

                    SourceLocation start = d->getBeginLoc();
                    SourceLocation end = d->getLocation();
                    SourceRange range(start, end);

                    TheRewriter.ReplaceText(range, new_decl);
                    ChangedDecl = d;
                }
                FoundErrors = false;
                return false;
            }
            return true;
        }

        bool VisitCXXForRangeStmt(CXXForRangeStmt* stmt) {
            stmt->dump();
            if (stmt->getInit() == NULL) {
                // TheRewriter.InsertText(stmt->(), "where?", false, true);
            }
            //int i = 0;
            return true;
        }

        bool VisitForStmt(ForStmt* stmt) {
            stmt->dump();
            if (auto compound_stmt = llvm::dyn_cast<CompoundStmt>(stmt->getBody())) {
                if (compound_stmt->body_empty()) {
                    TheRewriter.RemoveText(compound_stmt->getSourceRange());
                    TheRewriter.InsertText(compound_stmt->getBeginLoc(), "{\nfoo;\n}", true, true);
                }
            }
            return true;
        }

        bool VisitCallExpr(CallExpr *expr) {

            auto loc = FullSourceLoc(expr->getExprLoc(), Context.getSourceManager());

            if (loc == Diagnostics.getLastLocation()) { // this expression contains errors


                if (true) {
                    TheRewriter.ReplaceText(expr->getSourceRange(), "foo");
                } else {
                    set_fun_extern = true;
                    std::stringstream stream;
                    stream << "extern ";
                    stream << expr->getDirectCallee()->getReturnType().getAsString() << " ";
                    stream << expr->getDirectCallee()->getNameAsString() << "(";

                    for (int i = 0; i < expr->getNumArgs(); i++) {
                        if (auto new_expr = dyn_cast<CXXConstructExpr>(expr->getArg(i))) {
                            stream << new_expr->getArg(0)->IgnoreImplicit()->getType().getAsString() << " ";
                            stream << expr->getDirectCallee()->getParamDecl(i)->getNameAsString() << ", ";
                        } else {
                            if (expr->getArg(i)->IgnoreImplicit()->getType()->isFunctionType()) {
                                std::string s = expr->getArg(i)->IgnoreImplicit()->getType().getAsString();
                                std::string delimiter = " ";
                                std::string token = s.substr(0, s.find(delimiter));
                                stream << token << " " << expr->getDirectCallee()->getParamDecl(i)->getNameAsString();

                                std::smatch match;
                                std::regex parenthesis("\\([^\\)]*\\)");
                                std::regex_search(s, match, parenthesis);
                                for (auto res: match)
                                    stream << res;
                                stream << ");";
                            } else {
                                stream << expr->getArg(i)->IgnoreImplicit()->getType().getAsString() << " ";
                                stream << expr->getDirectCallee()->getParamDecl(i)->getNameAsString() << ", ";
                            }
                        }
                    }
                    stream.seekp(-2, std::ios_base::end);
                    stream << ");";
                    stream << std::endl;
                    TheRewriter.InsertText(FuncNode->getBeginLoc(), stream.str(), false, true);
                }
                FoundErrors = false;
                ChangedStmt = expr;
                return false;
            }

            return true;
        }

        bool VisitExpr(Expr *exp) {
            if (exp->containsErrors()) {
                FoundErrors = true;
                if (!InVarContext) {
                    TheRewriter.ReplaceText(exp->getSourceRange(), "foo");
                    FoundErrors = false;
                    ChangedStmt = exp;
                    return false;
                }
            }
            return true;
        }

        bool VisitIfStmt(IfStmt* stmt) {
            if (auto opaque = dyn_cast<OpaqueValueExpr>(stmt->getCond())) {
                auto begin_then = stmt->getThen()->getBeginLoc();
                SourceRange range(stmt->getBeginLoc(), begin_then);
                if (auto then_stmt = dyn_cast<CompoundStmt>(stmt->getThen())) {
                    TheRewriter.ReplaceText(range, "if (foo) {" );
                } else {
                    TheRewriter.ReplaceText(range, "if (foo)" );
                }
                return false;
            }
            return true;
        }

        bool VisitOpaqueValueExpr(OpaqueValueExpr* expr) {
            auto arr = Diagnostics.getRanges();
            assert(arr.size() >= 1);
            auto begin = arr[0].getBegin();
            auto end = arr[0].getEnd();

            if (expr->getSourceRange().isValid()) {
                TheRewriter.ReplaceText(expr->getSourceRange(), "foo");
                return true;
            }

            /*for (auto el : arr) {
                auto contestant_b = clang::FullSourceLoc(el.getBegin(), Context.getSourceManager());
                auto contestant_e = clang::FullSourceLoc(el.getBegin(), Context.getSourceManager());

                if (contestant_b.isBeforeInTranslationUnitThan(begin))
                    begin = el.getBegin();
                if (!contestant_e.isBeforeInTranslationUnitThan(end))
                    end = el.getEnd();

            }*/

            SourceRange range(begin, end);
            TheRewriter.ReplaceText(range, "foo");
            return true;
        }

    public:
        bool set_auto = false, set_fun_extern = false;


    private:
        Rewriter &TheRewriter;
        bool InVarContext;
        bool FoundErrors;
        bool ReWriteExpr;
        bool InCallExpr;
        ASTContext &Context;
        MyDiagnostics &Diagnostics;
        FunctionDecl *FuncNode;
        Stmt* ChangedStmt;
        Decl* ChangedDecl;
    };

    class FindVariablesVisitor : public RecursiveASTVisitor<FindVariablesVisitor> {
    public:
        std::vector<VarDecl*> getDeclarations() { return Declarations; }

        bool shouldVisitTemplateInstantiations() { return true; }

        bool shouldTraversePostOrder() { return true; }

        bool VisitDeclRefExpr(DeclRefExpr *expr) {
            if (expr->getDecl()->getNameAsString() == "foo")
                std::cerr << "Found " << expr->getDecl()->getNameAsString() << std::endl;
            return true;
        }

        bool VisitVarDecl(VarDecl *decl) {
            if (!decl->isImplicit())
                Declarations.push_back(decl);
            return true;
        }

        bool VisitFieldDecl(FieldDecl* decl) {
            return true;
        }

    private:
        std::vector<VarDecl*> Declarations;
    };

    class WalkBack : public RecursiveASTVisitor<WalkBack>{
        // this class finds the variables declared in a node's scope.
    public:
        WalkBack(ASTContext &C, Stmt* N) : Context(C), NodeInContext(N) {
            Location = FullSourceLoc(N->getEndLoc(), Context.getSourceManager());
        }

        bool CustomVisit(Stmt* n) {
            auto parents = Context.getParents(*n); // we need the parents of node n
            for (auto parent : parents) {
                if (auto stmt = parent.get<Stmt>()) { // now we have the parents of n
                    this->CustomVisit((Stmt*) stmt);

                    Depth = 0;
                    for (auto sibling : stmt->children()){
                        this->TraverseStmt((Stmt*) sibling);
                    }

                } else if (auto decl = parent.get<FunctionDecl>()) { // now we have the parents of n
                    //this->CustomVisit((Stmt*) stmt);

                    Depth = 0;
                    for (auto parm : decl->parameters())
                        this->VisitVarDecl(parm);
                    // we can just ask who are the siblings of n
                }
            }
            return true;
        }

        bool VisitVarDecl(VarDecl* d){
            auto d_loc = FullSourceLoc(d->getEndLoc(), Context.getSourceManager());

            if (Depth <= 1 && d_loc.isBeforeInTranslationUnitThan(Location)) {
                Decls.push_back(d);
            }
            return true;
        }

        bool TraverseStmt(Stmt* s){
            Depth++;
            bool traverse = RecursiveASTVisitor<WalkBack>::TraverseStmt(s);
            Depth--;
            return traverse;
        }

        std::vector<VarDecl*> get_declarations() {
            return Decls;
        }




        Stmt* NodeInContext;
        ASTContext &Context;
        int Depth;
        FullSourceLoc Location;
        std::vector<VarDecl*> Decls;
    };

    class RecursiveAdd : public RecursiveASTVisitor<RecursiveAdd> {
    public:
        RecursiveAdd() : Visited(*new std::vector<Stmt*>()) , Decls(*new std::vector<Decl*>()) {
        }

        RecursiveAdd(std::vector<Stmt*> &visited) : Visited(visited), Decls(*new std::vector<Decl*>()) {
        }

        bool VisitDeclRefExpr(DeclRefExpr *expr) {
            Decls.push_back(expr->getDecl());
            return true;
        }

        bool VisitDecl(Decl *expr) {
            Decls.push_back(expr);
            return true;
        }

        bool VisitVarDecl(VarDecl *decl) {
            if (decl->hasInit()) {
                if (auto init = decl->getInit()) {
                    TraverseStmt(init);
                }
            }
            return true;
        }

        bool VisitStmt(Stmt* stmt) {

            if (auto s = dyn_cast<DeclStmt>(stmt)) {
                Decls.push_back(s->getSingleDecl());
                return true;
            }

            Visited.push_back(stmt);
            return true;
        }

        std::vector<Stmt*> &Visited;
        std::vector<Decl*> &Decls;

    };

    class RecursiveCheck : public RecursiveASTVisitor<RecursiveCheck> {
    public:
        RecursiveCheck(std::vector<Stmt*> &visited) : Visited(visited){
        }

        bool VisitStmt(Stmt* stmt) {
            return std::find(Visited.begin(), Visited.end(), stmt) == Visited.end();
        }

        std::vector<Stmt*> &Visited;
    };

    class AutoInit : public RecursiveASTVisitor<AutoInit> {
    public:
        AutoInit(Rewriter& r, std::string var_name, std::string default_val) : r(r), var_name(var_name), default_val(default_val) {
        }


        bool VisitVarDecl(VarDecl* decl) {

            if (!decl->hasInit() && decl->getType()->isArrayType()) {



                auto arr_type = (VariableArrayType*) decl->getType()->getAsArrayTypeUnsafe();
                auto expr = arr_type->getSizeExpr();
                auto type = arr_type->getElementType().getAsString();



                std::stringstream stream;
                if (decl->getNameAsString() == var_name) {
                    this->decl = decl;
                    stream << "\nmemset( " << decl->getNameAsString() << ", " << default_val << ", sizeof( "
                           << decl->getNameAsString() << " ));";
                    auto nxt = Lexer::findNextToken(decl->getEndLoc(), r.getSourceMgr(), r.getLangOpts());
                    r.InsertText(nxt->getEndLoc(), stream.str(),
                                 true, true);
                }
            }

            return true;
        }

        VarDecl *decl;

    private:
        Rewriter& r;
        std::string var_name, default_val;

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
    };

    class FixAssignments : public RecursiveASTVisitor<FixAssignments> {
    public:
        FixAssignments(Rewriter& r, std::string java_val, std::string cpp_name) : r(r), java_val(java_val), cpp_name(cpp_name) {}

        FixAssignments(Rewriter& _r) : r(_r) {}

        bool VisitVarDecl(VarDecl *decl) {


            std::cerr << decl->getNameAsString() << std::endl;
            if (decl->hasInit() && decl->getNameAsString() == cpp_name) {
                this->decl = decl;
                decl->dump();
                auto init_expr = decl->getInit();
                SourceLocation start = init_expr->getBeginLoc();
                SourceLocation end = init_expr->getEndLoc();

                if (start.isMacroID()) {
                    auto n_start = r.getSourceMgr().getImmediateMacroCallerLoc(start);
                    auto n_end = r.getSourceMgr().getImmediateMacroCallerLoc(end);
                    SourceRange range(n_start, n_end);
                    r.ReplaceText(range, java_val);
                } else {
                    SourceRange range(start, end);
                    r.ReplaceText(range, java_val);
                }


            } else if (decl->getNameAsString() == cpp_name)  {
                SourceLocation end = decl->getEndLoc().getLocWithOffset(1);
                r.InsertTextAfter(end, " = " + java_val);
            }

            return true;
        }

        VarDecl *decl;

    private:
        Rewriter& r;
        std::string java_val;
        std::string cpp_name;
    };

}



#endif //SIMPLE_CLANGVISITORS_H
