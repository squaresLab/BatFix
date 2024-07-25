//
// Created by anon on 9/3/21.
//

#ifndef SIMPLE_ENUMERATOR_H
#define SIMPLE_ENUMERATOR_H



#include "clang/Tooling/Tooling.h"
#include "clang/Basic/SourceLocation.h"
#include "clang/Rewrite/Frontend/FixItRewriter.h"
#include "clang/Sema/Sema.h"

#include <string>
#include <iostream>
#include <map>
#include <sstream>
#include <regex>
#include <algorithm>




using namespace std;

class Generator {

public :

    Generator(std::string placeholder) : placeholder(placeholder) {
        ph_copy = placeholder;
    }

    virtual ~Generator() = default;

    virtual std::string init() = 0;

    virtual bool has_next() = 0;

    virtual std::vector<std::string> next() = 0;

    virtual void reset_generator(std::string new_placeholder);

    std::string placeholder;
    std::string ph_copy;
    std::unique_ptr<Generator> next_depth;

};

class MultiLevelGenerator : public Generator{
public :

    MultiLevelGenerator(std::unique_ptr<Generator> gen,
                        clang::SourceRange range, std::string& placeholder);

    virtual std::string init();

    virtual bool has_next();

    virtual void next(clang::Rewriter& rw);

    virtual void reset_generator();

    virtual std::vector<std::string> next();

    void set_synthesizer(std::vector<std::vector<std::string>>& synth);

public:

    std::unique_ptr<Generator> actual_generator;
    clang::Rewriter* rewriter;
    clang::SourceRange range;
    std::vector<std::string> copies;
    int id;
    int size; // number of combinations per binary
    static int objectCount;
    std::vector<std::vector<std::string>>* replacements;

};

class VarGenerator : public Generator {
public :
    VarGenerator(std::map<std::string, clang::ValueDecl*> var_names, std::string placeholder, int s = 1, bool arithmetic_type = false);

    virtual bool has_next();

    std::string init_aux();

    virtual std::string init();

    virtual std::vector<std::string> next();

    int size;
    bool first_time;
    bool arithmetic_type;
    std::map<std::string, clang::ValueDecl*>::const_iterator it;
    std::map<std::string, clang::ValueDecl*> var_names;
};

class FunGenerator : public Generator {
public :
    FunGenerator(const std::map< clang::CXXMethodDecl*, std::string> &method_names,
                 std::map<std::string, clang::ValueDecl*> var_names, std::map<clang::FunctionDecl *, std::string> c_funcs,
    clang::Sema& sema, std::string& placeholder, bool arithmetic_type = false);

    virtual bool has_next();

    virtual std::string init();

    std::string init_aux();

    virtual std::vector<std::string> next();

    std::unique_ptr<Generator> next_aux();


    int size;
    int n_args;
    clang::FunctionDecl* current;
    std::map< clang::FunctionDecl*, std::string>::const_iterator it;
    std::map<std::string, clang::ValueDecl*>::const_iterator var_it;
    const std::map<clang::CXXMethodDecl*, std::string> method_names;
    const std::map<std::string, clang::ValueDecl*> var_names;
    std::map<clang::FunctionDecl *, std::string> c_funcs;
    std::map<clang::FunctionDecl *,std::string> viable_methods;
    clang::Sema& sema;
    std::unique_ptr<Generator> arguments;
    std::vector<std::string> arg_placeholders;
    bool arithmetic_type;
    std::vector<std::string> cur_vec;

};

class ArithmeticGenerator : public Generator {
public :
    ArithmeticGenerator(const std::map< clang::CXXMethodDecl*, std::string> &method_names,
                 std::map<std::string, clang::ValueDecl*> var_names,
                 std::map<clang::FunctionDecl *, std::string> c_funcs,
                 clang::Sema& sema, std::string& placeholder);

    virtual bool has_next();

    virtual std::string init();

    std::string init_aux();

    virtual std::vector<std::string> next();

    std::unique_ptr<Generator> next_aux();


    int size;
    int n_args;
    clang::CXXMethodDecl* current;
    std::map< clang::CXXMethodDecl*, std::string>::const_iterator it;
    std::map<std::string, clang::ValueDecl*>::const_iterator var_it;
    const std::map<clang::CXXMethodDecl*, std::string> method_names;
    const std::map<std::string, clang::ValueDecl*> var_names;
    std::map<clang::FunctionDecl *, std::string> c_funcs;
    std::map<clang::FunctionDecl*,std::string> viable_methods;
    clang::Sema& sema;
    std::unique_ptr<Generator> arguments;
    std::vector<std::string> arg_placeholders;
    std::vector<std::pair<int, int>> variables;
    std::vector<std::pair<int, int>> functions;


};

class IfExprGenerator : public MultiLevelGenerator {
public:
    IfExprGenerator(std::unique_ptr<Generator> gen,
    clang::IfStmt* stmt, clang::SourceRange range, std::string& placeholder, clang::Stmt* grandparent = nullptr);

    virtual std::string init();

    virtual bool has_next();

    virtual std::vector<std::string> next();

private:
    clang::IfStmt* if_stmt;
    static int ifCount;
    int if_id;
    bool brackets;
    clang::Stmt* grandparent;
};


class SwitchExprGenerator : public MultiLevelGenerator {
public:
    SwitchExprGenerator(std::unique_ptr<Generator> gen,
                    clang::SwitchStmt* stmt, clang::SourceRange range, std::string& placeholder);

    virtual std::string init();

    virtual bool has_next();

    virtual std::vector<std::string> next();

private:
    clang::SwitchStmt* switch_stmt;
    static int switchCount;
    int switch_id;
    bool brackets;
};

class DeclStmtGenerator : public MultiLevelGenerator {
public:
    DeclStmtGenerator(std::unique_ptr<Generator> gen,
    clang::DeclStmt* stmt, clang::SourceRange range, std::string& placeholder, clang::Stmt* grandparent = nullptr);

    virtual std::string init();

    virtual bool has_next();

    virtual std::vector<std::string> next();

private:
    clang::DeclStmt* decl_stmt;
    static int ifCount;
    int if_id;
    bool brackets;
    clang::Stmt* grandparent;
};


class ForExprGenerator : public MultiLevelGenerator {
public:
    ForExprGenerator(std::unique_ptr<Generator> gen,
                    clang::ForStmt* stmt, clang::SourceRange range, std::string& placeholder);

    virtual std::string init();

    virtual bool has_next();

    virtual std::vector<std::string> next();

private:
    clang::ForStmt* for_stmt;
    static int forCount;
    int for_id;
    bool brackets;
    clang::Stmt* grandparent;
};

class WhileGenerator : public MultiLevelGenerator {
public:
    WhileGenerator(std::unique_ptr<Generator> gen,
                     clang::WhileStmt* stmt, clang::SourceRange range, std::string& placeholder);

    virtual std::string init();

    virtual bool has_next();

    virtual std::vector<std::string> next();

private:
    clang::WhileStmt* for_stmt;
    static int forCount;
    int for_id;
    bool brackets;
    clang::Stmt* grandparent;
};

class CombinedGenerator : public Generator {
public:
    CombinedGenerator(std::unique_ptr<Generator> gen1, std::unique_ptr<Generator> gen2);

    virtual std::string init();

    virtual void reset_generator(std::string new_placeholder);

    virtual bool has_next();

    virtual std::vector<std::string> next();

private:
    std::unique_ptr<Generator> first;
    std::unique_ptr<Generator> second;
    bool choice;
    std::vector<std::string> prev;
};

#endif //SIMPLE_ENUMERATOR_H
