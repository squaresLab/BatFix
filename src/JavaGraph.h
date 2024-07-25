//
// Created by anon on 7/8/21.
//

#ifndef SIMPLE_JAVAGRAPH_H
#define SIMPLE_JAVAGRAPH_H

#include "clang/Analysis/CFG.h"
#include "clang/AST/AST.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include <iostream>
#include <utility>
#include <sstream>
#include <unordered_map>
#include <fstream>
#include "clang/Lex/Lexer.h"
#include "ClangVisitors.h"
#include "HyperGraph.h"



namespace clang {
    class FindStmtVisitor : public RecursiveASTVisitor<FindStmtVisitor> {
    public :
        Stmt* Statement;
        bool Found;

        FindStmtVisitor(Stmt* s) : Statement(s) , Found(false){}

        bool VisitStmt(Stmt* stmt) {
            if (stmt == Statement) {
                Found = true;
                return false;
            }
            return true;
        }
    };

};

using namespace clang;

class Node {
public:
    enum kind { Special, Statement, Conditional, Exit  };

    static std::vector<Stmt*> visited_stmts;

    Node(int id, kind branch_kind, std::string statement, int line_number) : Id(id), Line(std::move(statement)), BranchKind(branch_kind), visited(false), line_number(line_number) {}

    std::string getStatement() {
        return this->Line;
    }

    HyperGraph<Node>* build_hyper_graph() {
        int i = 0;
        HyperBlock<Node>* entry = build_hyper_node(i);
        HyperBlock<Node>* exit = nullptr;
        std::for_each(this->all_nodes.begin(),
                      this->all_nodes.end(),
                      [&exit] (Node* n) { if (n->BranchKind == Exit) exit = n->hyper_block; });
        HyperGraph<Node>* graph = new HyperGraph<Node>(entry, exit); // FIXME
        return graph;
    }

    HyperBlock<Node>* build_hyper_node(int& i) {
        if (this->Line.find("Map.Entry") != std::string::npos || this->BranchKind == Special) { // hack
            return this->Children[0]->build_hyper_node(i);
        }

        if (visited) return hyper_block;
        hyper_block = new HyperBlock<Node>(i++);
        visited = true;

        if (this->BranchKind == Conditional) {
            hyper_block->add_stmt(this);
            for (int j = 0; j < this->Children.size(); j++) {
                auto nxt = this->Children[j]->build_hyper_node(i);
                hyper_block->add_child(nxt);
            }
        } else if (this->BranchKind == Exit) {
            return hyper_block;
        } else {
            auto child = this;
            do {
                if (child->BranchKind == Statement)
                    hyper_block->add_stmt(child);
                child = child->Children[0];
            } while (child->Children.size() == 1 and child->Parents.size() == 1);

            auto new_nxt = child->build_hyper_node(i);
            hyper_block->add_child(new_nxt);
        }
        return hyper_block;
    }

    static Node* ParseGraph(std::string file_name) {
        std::unordered_map<std::string, kind> KindMap = { {"conditional",Conditional}, {"special", Special},
                                                                {"statement", Statement}, {"exit", Exit}};

        std::ifstream ifs(file_name);
        assert(ifs);
        std::vector<std::string> lines;
        bool parse_nodes = true;
        std::vector<Node*> nodes;
        for (std::string line; std::getline( ifs, line ); /**/ ) {
            auto idx = line.find("Edges");
            if (idx != std::string::npos) {
                parse_nodes = false;
                continue;
            }
            idx = line.find("Nodes");
            if (idx != std::string::npos) {
                parse_nodes = true;
                continue;
            }

            std::stringstream ss(line);
            std::vector<std::string> parts;
            std::string tmp;

            while(getline(ss, tmp, ';'))
                parts.push_back(tmp);

            std::stringstream stream;
            int id;
            stream << parts[0];
            stream >> id;

            if (parse_nodes) {
                kind branch_kind = KindMap[parts[1]];
                int line_n = 0;
                if (!parts[3].empty()) {
                    line_n = std::stoi(parts[3]);
                }
                Node* n = new Node(id, branch_kind, parts[2], line_n);
                nodes.push_back(n);
            } else {


                for (int i = 1; i < parts.size(); i++) {
                    int child_id;
                    std::stringstream new_stream;
                    new_stream << parts[i];
                    new_stream >> child_id;
                    nodes[id]->Children.push_back(nodes[child_id-1]);
                    nodes[child_id-1]->Parents.push_back(nodes[id]);
                }

            }

        }

        assert(nodes.size() > 0);
        nodes[0]->all_nodes = nodes;
        return nodes[0];
    }

    int get_line_number() {
        return this->line_number;
    }

    std::vector<Node*> get_children() {
        return this->Children;
    }

    kind get_kind() {
      return BranchKind;
    }



private:
    int line_number;
    std::vector<Node*> all_nodes;
    int Id;
    std::string Line;
    kind BranchKind;
    std::vector<Node*> Children;
    std::vector<Node*> Parents;
    bool visited;
    HyperBlock<Node>* hyper_block;

};

class NodePrinter : public GenericStmtPrinter<NodePrinter> {
public:
    std::string print(Node* stmt) {
        return stmt->getStatement();
    }
};




#endif //SIMPLE_JAVAGRAPH_H
