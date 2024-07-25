//
// Created by anon on 11/11/21.
//

#ifndef SIMPLE_HYPERGRAPH_H
#define SIMPLE_HYPERGRAPH_H

#include <vector>
#include "clang/AST/Stmt.h"
#include "clang/Analysis/CFG.h"
#include <stack>
#include <sstream>
#include <clang/AST/PrettyPrinter.h>
#include "clang/Analysis/CFG.h"
#include "clang/Lex/Lexer.h"
#include "clang/AST/AST.h"
#include <regex>
#include <iostream>



template <class T>
class HyperBlock;


template <class ConcretePrinter>
class GenericStmtPrinter {
public:
    template <typename T>
    std::string print(T* stmt) {
        std::string res = static_cast<ConcretePrinter&>(*this).print(stmt);

        // post process
        std::replace(res.begin(), res.end(), '\n', ' ');
        std::replace(res.begin(), res.end(), '{', ' ');
        std::replace(res.begin(), res.end(), '}', ' ');

        res = std::regex_replace(res, std::regex("([^\\\\])<"), "$1\\<");
        res = std::regex_replace(res, std::regex("([^\\\\])>"), "$1\\>");
        std::replace(res.begin(), res.end(), ']', ')');
        std::replace(res.begin(), res.end(), '[', '(');

        return res;
    }
};


template <class StmtPrinter>
class HyperBlockPrinter : public GenericStmtPrinter<HyperBlockPrinter<StmtPrinter>>  {
public:
    HyperBlockPrinter(StmtPrinter& printer) : printer(printer) {}
    template <typename T>
    std::string print(HyperBlock<T>* stmt) {
        return stmt->print_stmts(printer);
    }
private:
    StmtPrinter& printer;
};


template <class T>
class Path {
public:

    Path(T* node) : node(node) {}

    void assign(Path p) {
        map.push_back(p);
    }

    template <typename TPrinter>
    void print(int n_tabs, TPrinter printer) {
        if (node) {
            auto node_str = printer.print(node);
            std::cerr << std::string(n_tabs, ' ') << node_str << std::endl;
        }
        for (auto it = map.begin(); it != map.end(); it++) {
            it->print(n_tabs + 2, printer);
        }
    }

    std::set<T*> get_nodes() {
        std::set<T*> res;
        if (node) {
            res.insert(node);
        }
        for (auto it = map.begin(); it != map.end(); it++) {
            auto nodes = it->get_nodes();
            res.insert(nodes.begin(), nodes.end());
        }
        return res;
    }

private:
    std::vector<Path> map;
    T* node;
};


template <class T>
class HyperBlock {
public:


    HyperBlock(int i) :  visited(false), id(i) {}

    void add_stmt(T* stmt) { stmts.push_back(stmt); }
    void add_stmt_front(T* stmt) { stmts.insert(stmts.begin(), stmt); }

    int get_id() { return id; }
    void set_printer() { }

    void add_child(HyperBlock<T>* child) { children.push_back(child); }
    int get_number_children() { return children.size(); }
    HyperBlock* get_child(int i) { assert(i >= 0 && i < children.size()); return children[i]; }
    void set_child(int i, HyperBlock* child) { children[i] = child; }
    T* get_stmt(int i) { assert(i >= 0 && i < stmts.size()); return stmts[i]; }
    std::vector<T*> get_stmts() { return stmts; }
    std::vector<HyperBlock*>  get_children() { return children; }

    void reset_visited(std::vector<HyperBlock<T>*>& visited_blocks) {
        if (std::find(visited_blocks.begin(), visited_blocks.end(), this) != visited_blocks.end())
            return;
        visited_blocks.push_back(this);
        visited = false;
        for (int i = 0; i < children.size(); i++) {
            children[i]->reset_visited(visited_blocks);
        }
    }

    void dfs(std::vector<HyperBlock*>& blocks) {
        if (visited) return;
        visited = true;
        for (int i = 0; i < children.size(); i++) {
            children[i]->dfs(blocks);
        }
        blocks.push_back(this);
    }

    bool dfs_find(Path<HyperBlock<T>>& blocks, HyperBlock<T>* target) {
        bool found = false;
        if (this == target) {
            // Path<HyperBlock<T>> rec(this);
            // blocks.assign(rec);
            return true;
        }
        for (int i = 0; i < children.size(); i++) {
            Path<HyperBlock<T>> rec(this);
            if (children[i]->dfs_find(rec, target)) {
                blocks.assign(rec);
                found = true;
            }
        }
        return found;
    }

    HyperBlock<T>* reverse_blocks(std::map<HyperBlock<T>*, HyperBlock<T>*>& current_map, int& j) {
        if (visited) return current_map[this];
        visited = true;
        HyperBlock* new_block = new HyperBlock(j++);
        current_map[this] = new_block;
        for (int i = 0; i < stmts.size(); i++) {
            new_block->add_stmt(stmts[i]);
        }
        for (int i = 0; i < children.size(); i++) {
            auto new_children = children[i]->reverse_blocks(current_map, j);
            new_children->add_child(new_block);
        }
        return new_block;
    }

    // refactor this
    template<typename TPrinter>
    void to_dot(std::stringstream& s, HyperBlock<T>* parent, GenericStmtPrinter<TPrinter> printer) {
        if (!visited) {
            visited = true;
            s << "Node" << id <<" [shape=record,label=\"{ [B" << id << "]\\l";
            for (int i = 0 ; i < this->stmts.size(); i++) {
                s << "  " << i << ": " << printer.print(this->stmts[i]) << "\\l";
            }
            s << "}\"];" << std::endl;

            for (HyperBlock<T>* child : children)
                child->to_dot(s, this, printer);
        }
        if (parent != nullptr) {
            s << "Node" << parent->id << " -> " << "Node" << id << ";" << std::endl;
        }
    }

    template<typename Type>
    std::string print_stmts(GenericStmtPrinter<Type> printer) {
        std::stringstream s;
        for (int i = 0 ; i < this->stmts.size(); i++) {
            s << printer.print(this->stmts[i]) << ", ";
        }

        std::string res = s.str();
        if (res.size () > 0) res.resize (res.size () - 2); // remove last comma;
        return res;
    }


private:
    std::vector<T*> stmts;
    std::vector<HyperBlock*> children;
    bool visited;
    int id;
};


template <class T>
class HyperGraph {


    public:
        HyperGraph(HyperBlock<T>* entry, HyperBlock<T>* exit) : entry(entry), exit(exit) {}

        static HyperGraph<T>* generate_new_graph(std::vector<HyperBlock<T> *> &scc1) {

            // We start by finding the exit nodes of the hypergraph
            std::vector<HyperBlock<T>*> exits_scc1;
            for (HyperBlock<T>* block : scc1 ) {
                for (HyperBlock<T>* child : block->get_children()) {
                    if (find(scc1.begin(), scc1.end(), child) == scc1.end()) {
                        exits_scc1.push_back(block);
                    }
                }
            }


            auto new_root = new HyperBlock<T>(INT_MAX-1);

            // FIXME : this is a hack -- We need to find the root node of the graph
            // FIXME : For now we assume it's the first exit... In reality it should be the node with the lowest ID

            assert(exits_scc1.size() >= 1 && "No exit nodes found!");
            HyperBlock<T>* old_root = exits_scc1[0];

            // Lowest ID is the entry
            for (auto block : exits_scc1) {
                if (block->get_id() < old_root->get_id()) {
                    old_root = block;
                }
            }

            for (auto child : old_root->get_children()) {
                if (find(scc1.begin(), scc1.end(), child) != scc1.end()) {
                    new_root->add_child(child);
                }
            }
            for (auto stmt : old_root->get_stmts()) {
                new_root->add_stmt(stmt);
            }


            // Forward to new exit
            auto new_exit = new HyperBlock<T>(INT_MAX);
            for (HyperBlock<T>* block : scc1) {
                auto children = block->get_children();
                for (int i = 0; i < children.size(); i++) {
                    HyperBlock<T>* child = children[i];
                    if (child == old_root)
                        block->set_child(i, new_exit);
                    if (find(scc1.begin(), scc1.end(), child) == scc1.end()) // There can only be one exit.
                        block->set_child(i, new_exit);

                }
            }

            return new HyperGraph<T>(new_root, new_exit);
        }

        HyperGraph<HyperBlock<T>>* scc_graph() {
            auto queue = this->dfs();

            // custom reverse
            int id = 0;
            std::vector<HyperBlock<T>*> tmp; //TODO: refactor reset visited. this interface doesnt make any sense

            // compute reversed graph
            entry->reset_visited(tmp);
            std::map<HyperBlock<T>*, HyperBlock<T>*> current_map;
            entry->reverse_blocks(current_map, id);
            auto new_graph = new HyperGraph<T>(current_map[exit], current_map[entry]);


            // get inv of map
            std::map<HyperBlock<T>*, HyperBlock<T>*> current_map_inv;
            for (auto it = current_map.begin(); it != current_map.end(); ++it)
                current_map_inv[it->second] = it->first;

            // compute scc graph vertexes
            std::map<HyperBlock<T>*, HyperBlock<HyperBlock<T>>*> scc_graph_map;
            id = 0;
            for (auto it = queue.rbegin(); it != queue.rend(); it++) {
                std::vector<HyperBlock<T>*> current_scc;
                HyperBlock<T>* reverse_vertex = current_map[*it];
                reverse_vertex->dfs(current_scc);
                std::cerr << current_scc.size() << std::endl;

                HyperBlock<HyperBlock<T>>* new_node = new HyperBlock<HyperBlock<T>>(id++);
                for (auto block : current_scc) {
                    scc_graph_map[current_map_inv[block]] = new_node;
                    new_node->add_stmt(current_map_inv[block]);
                }
            }

            // compute scc graph edges
            for (int i = 0 ; i < queue.size(); i++) {
                HyperBlock<HyperBlock<T>>* curr_node = scc_graph_map[queue[i]];
                auto blocks = curr_node->get_stmts();
                auto numberChildren = queue[i]->get_number_children();
                for (int j = 0 ; j < numberChildren; j++) {
                    auto child = queue[i]->get_child(j);
                    auto curr_node_children = curr_node->get_children();
                    if (scc_graph_map[child] != curr_node) { // it is indeed a children
                        if (std::find(curr_node_children.begin(), curr_node_children.end(), scc_graph_map[child]) == curr_node_children.end()) // if it has not been added
                            curr_node->add_child(scc_graph_map[child]); // add it
                    }
                }
            }
            return new HyperGraph<HyperBlock<T>>(scc_graph_map[entry], scc_graph_map[exit]);


        }

        HyperGraph* reverse_graph(std::map<HyperBlock<T>*, HyperBlock<T>*>& current_map = std::map<HyperBlock<T>*, HyperBlock<T>*>()) {
            int i = 0;
            std::vector<HyperBlock<T>*> tmp; //TODO: refactor reset visited. this interfaces barely makes sense

            entry->reset_visited(tmp);
            entry->reverse_blocks(current_map, i);
            HyperGraph<T>* new_graph = new HyperGraph<T>(current_map[exit], current_map[entry]);
            return new_graph;
        }

        // WARNING: This method only works for DAGs!!!!!
        HyperGraph* sub_graph(HyperBlock<T>* new_entry) {
            return new HyperGraph<T>(new_entry, exit);
        }

        std::vector<HyperBlock<T>*> dfs() {
            std::vector<HyperBlock<T>*> tmp;

            entry->reset_visited(tmp);
            std::vector<HyperBlock<T>*> result;
            this->entry->dfs(result);
            return result;
        }

        // This method only works for DAGs!
        Path<HyperBlock<T>> dfs_find(HyperBlock<T>* block) {
            std::vector<HyperBlock<T>*> tmp;
            Path<HyperBlock<T>> result(nullptr);
            assert(this->entry != NULL && "Entry is null - probably because there are two exits.");
            this->entry->dfs_find(result, block);
            return result;
        }

        template<class SubTPrinter> // HyperGraph<T>
                                    // this is a printer for T, not for HyperBlock<T>
        std::string to_dot(SubTPrinter printer) {
            std::stringstream s;
            std::vector<HyperBlock<T>*> tmp;

            entry->reset_visited(tmp);
            s << "digraph hypergraph { " << std::endl;
            entry->to_dot(s, nullptr, printer);
            s << "}" << std::endl;
            return s.str();
        }

        int count_nodes() {
            return this->dfs().size();
        }

        std::vector<HyperBlock<T>*> get_vertices() {
            return this->dfs();
        }


    std::map<HyperBlock<T>*, std::vector<HyperBlock<T>*>> get_edges() {
            std::map<HyperBlock<T>*, std::vector<HyperBlock<T>*>> edges;

            auto all_nodes = dfs();
            for (HyperBlock<T>* node : all_nodes) {
                edges[node] = node->get_children();
            }

            return edges;
        }



public:

        HyperBlock<T>* entry = nullptr;
        HyperBlock<T>* exit = nullptr;



};







#endif //SIMPLE_HYPERGRAPH_H
