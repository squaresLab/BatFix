//
// Created by anon on 11/11/21.
//

#ifndef SIMPLE_CLANGCOMPRESSEDCFG_H
#define SIMPLE_CLANGCOMPRESSEDCFG_H

#include "clang/Analysis/CFG.h"
#include "HyperGraph.h"
#include "ClangVisitors.h"
#include <stack>





namespace clang {


    class CompressedBlock {
    public:
        CompressedBlock(int id) : id(id), visited(false) {}

        void add_stmt(const Stmt *stmt) {
            stmts.push_back(stmt);
        }

        void remove_all_but_first() {
            std::vector<const Stmt*> new_stmts;
            new_stmts.push_back(stmts[0]);
            stmts = new_stmts;
        }


        bool is_empty() {
            return stmts.empty();
        }

        void add_stmt(std::vector<const Stmt*> new_stmts) {
            stmts.insert(stmts.end(), new_stmts.begin(), new_stmts.end());
        }

        void remove_stmt(const Stmt* to_remove) {
            stmts.erase(std::find(stmts.begin(), stmts.end(), to_remove));
        }

        std::vector<const Stmt*> getStmts() {
            return stmts;
        }

        void replace_stmt(int i, const Stmt* stmt) {
            stmts[i] = stmt;
        }

        void add_successor(CompressedBlock* child) {
            children.push_back(child);
        }

        int get_id() {
            return id;
        }

        int set_id(int _id) {
            return id = _id;
        }

        void set_visited(bool visited) {
            this->visited = visited;
        }

        bool is_visited() {
            return visited;
        }

        void replace_child(CompressedBlock* child, CompressedBlock* new_child) {
            for (int i = 0; i < children.size(); i++) {
                if (children[i] == child) {
                    children[i] = new_child;
                    break;
                }
            }
        }

        std::vector<CompressedBlock*> get_children() {
            return children;
        }

        HyperBlock<Stmt>* build_block(int& i, std::map<CompressedBlock*, int> n_parents) {
            if (this->visited) return corresponding_block;
            this->visited = true;
            corresponding_block = new HyperBlock<Stmt>(i++);
            for (auto stmt : this->getStmts()) {
                stmt->dump();
                corresponding_block->add_stmt_front((Stmt *) stmt);
            }

            // we want to merge/compress all blocks that only have 1 child
            // because they are essentially just statements


            if (this->get_children().size() == 1 && id != 0 && n_parents[this] == 1) {   // dont compress exit blocks ...
                auto child = this->get_children()[0];
                while (child->get_children().size() == 1 && n_parents[child] == 1) {
                    auto cur_stmts = child->getStmts();
                    for (std::vector<const Stmt*>::reverse_iterator it = cur_stmts.rbegin(); it != cur_stmts.rend(); it++) {
                        corresponding_block->add_stmt((Stmt *) *it);
                    }
                    child = child->get_children()[0];
                }
                corresponding_block->add_child(child->build_block(i, n_parents));
            }
            else {
                for (auto child : this->get_children()) {
                    corresponding_block->add_child(child->build_block(i, n_parents));
                }
            }

            return corresponding_block;
        }

        const Stmt* walk() {
            if (pos < stmts.size()) {
                return stmts[stmts.size() - 1 - pos++];
            }
            else {
                return nullptr;
            }
        }

        void walk_back() {
            pos--;
        }

        void reset() {
            pos = 0;
        }

    private:
        bool visited;
        int id;
        int pos = 0;
        std::vector<const Stmt*> stmts;
        std::vector<CompressedBlock*> children;
        HyperBlock<Stmt>* corresponding_block;
    };

    class ClangCompressedCFG {
    public:
        ClangCompressedCFG(std::unique_ptr<CFG> cfg, clang::ASTContext & context) : cfg(std::move(cfg)), context(context) {}


        void build_compressed_cfg() {
            for (auto I = cfg->begin(), E = cfg->end() ; I != E ; ++I) {
                (**I).dump();
                CompressedBlock* block = new CompressedBlock((**I).getBlockID());
                std::cerr << "block id: " << (**I).getBlockID() << std::endl;
                blocks.push_back(block);
                if ((**I).getTerminator().isValid()) {
                    auto stmt = (**I).getTerminator().getStmt();
                    add_stmt(block, stmt);
                }

                for (auto E = (**I).rbegin(); E != (**I).rend(); E++) {
                    if (auto SE = E->getAs<clang::CFGStmt>()) {
                        auto stmt = SE->getStmt();
                        add_stmt(block, stmt);
                    }
                }
            }
            add_children();
            entry_block = blocks[blocks.size() - 1]->get_children()[0];
            separate_conditionals();
            while (delete_implicits());
            delete_terminators();
        }

        HyperGraph<Stmt>* build_hyper_graph() {
            int i = 0;
            HyperBlock<Stmt> *entry;

            std::vector<CompressedBlock*> visited;
            std::vector<CompressedBlock*> stack;
            std::map<CompressedBlock*, int> n_parents;
            stack.push_back(entry_block);
            while (!stack.empty()) {
                CompressedBlock* cur = stack.back();
                stack.pop_back();
                visited.push_back(cur);
                for (auto child : cur->get_children()) {
                    if (std::find(visited.begin(), visited.end(), child) == visited.end()) {
                        stack.push_back(child);
                    }
                    n_parents[child]++; // NEW CODE

                    if (n_parents[child] == 2) {
                        for (auto stmt : child->getStmts())
                            stmt->dump();
                        std::cerr << "ERROR: block has more than one parent" << std::endl;
                    }
                }
            }

            entry = entry_block->build_block(i, n_parents);


            return new HyperGraph<Stmt>(entry, blocks[0]->build_block(i, n_parents));
        }

    public:

        bool add_stmt(CompressedBlock *block, const Stmt *stmt) {
            // stmt->dump();
            // Careful with implicit casts
            if (auto impicit_cast = llvm::dyn_cast<ImplicitCastExpr>(stmt)) {
                stmt = impicit_cast->getSubExpr();
            } else if (auto for_range = llvm::dyn_cast<CXXForRangeStmt>(stmt)) {
                stmt->dump();
                stmt = for_range->getCond();
            } else if (auto while_stmt = llvm::dyn_cast<WhileStmt>(stmt)) {
                stmt->dump();
                stmt = while_stmt->getCond();
            }

            auto loc = clang::FullSourceLoc(stmt->getBeginLoc(), context.getSourceManager());
            if (!loc.isValid() || loc.isInSystemHeader()) return false;
            //std::cout << "Line number " << loc.getLineNumber() << ". Column number" << loc.getColumnNumber() << std::endl;


            bool seen = false;
            for (auto pair : seen_stmts) {
                if (std::find(pair.second.begin(), pair.second.end(), stmt) != pair.second.end()) {
                    seen = true;

                    // more glue
                    auto parents_lst = context.getParents(*stmt);
                    if (auto for_loop = parents_lst[0].get<ForStmt>()) {
                        if (stmt == for_loop->getInit()) {
                            seen = false;
                            break;
                        }
                    }

                    if (forwarding.find(block) == forwarding.end() || forwarding[block]->get_id() > pair.first->get_id())
                        // we do not forward to the same block
                        if (block != pair.first)
                            forwarding[block] = pair.first; // FIXME: we assume that statements are only reused once
                }
            }

            RecursiveAdd r;
            r.TraverseStmt((Stmt *) stmt);
            seen_stmts[block].insert(seen_stmts[block].end(), r.Visited.begin(), r.Visited.end());

            // if the statement has not been seen before
            if (!seen)
                block->add_stmt(stmt);

            return seen;

        }

        void add_children() {
            for (auto I = cfg->begin(), E = cfg->end() ; I != E ; ++I) {
                for (auto s = (*I)->succ_begin(); s != (*I)->succ_end(); s++) {
                    // if the successor is empty
                    if (blocks[(*s)->getBlockID()]->is_empty() &&  (*s)->getBlockID() != 0 && !(*s)->empty()) {
                        blocks[(*I)->getBlockID()]->add_successor(forwarding[blocks[(*s)->getBlockID()]]);
                        parents[forwarding[blocks[(*s)->getBlockID()]]] = blocks[(*I)->getBlockID()];  // FIXME what happens if a node has multiple parents?

                    } else {
                        blocks[(*I)->getBlockID()]->add_successor( blocks[(*s)->getBlockID()]);
                        parents[blocks[(*s)->getBlockID()]] = blocks[(*I)->getBlockID()]; // FIXME what happens if a node has multiple parents?
                    }

                }
            }
        }

        bool delete_implicits() {
            bool seen = false;
            for (auto comp_block : blocks) {
                std::cerr << "block id " << comp_block->get_id() << std::endl;

                for (auto stmt : comp_block->getStmts()) {
                    stmt->dump();
                }
                if (comp_block->is_empty() && comp_block->get_id() != 0) {
                    auto parent = parents[comp_block];
                    if (parent == nullptr) continue;
                    assert(comp_block->get_children().size() == 1);
                    parent->replace_child(comp_block, comp_block->get_children()[0]);


                    comp_block->set_id(0); // FIXME: prevent us from fixing this thing again
                    seen = true;
                } else if (comp_block->is_empty() && comp_block->get_id() == 0) {
                    // entry node is empty
                } else if (comp_block->get_children().size() == 1) {

                    // FIXME: This code is used to remove implicit code generated by clang
                    // It doesnt work that well ...
                    for (auto stmt : comp_block->getStmts()) {

                        RecursiveAdd implicit_checker;
                        implicit_checker.TraverseStmt((Stmt *) stmt);
                        for (auto decl : implicit_checker.Decls) {
                            decl->dump();
                            if (decl->isImplicit()) {
                                comp_block->remove_stmt(stmt); // TODO: Not doing anything with this statement
                                break;
                            }

                        }
                    }
                    if (comp_block->is_empty()) {
                        delete_implicits();
                    }
                }
            }
            return seen;
        }

        void separate_conditionals() {
            for (auto comp_block : blocks) {
                if (comp_block->get_children().size() == 2) {
                    if (comp_block->getStmts().size() > 1) {
                        std::vector<const Stmt*> stmts = comp_block->getStmts();
                        comp_block->remove_all_but_first();
                        CompressedBlock* cblock = new CompressedBlock(blocks.size());
                        blocks.push_back(cblock);
                        stmts.erase(stmts.begin());
                        cblock->add_stmt(stmts);
                        cblock->add_successor(comp_block);

                        auto grandparent = parents[comp_block];
                        parents[cblock] = grandparent;
                        grandparent->replace_child(comp_block, cblock);
                        parents[comp_block] = cblock;

                        if (comp_block == entry_block)
                            entry_block = cblock;

                    }
                }
            }
        }

        void delete_terminators() {
            for (auto comp_block : blocks) {

                if (comp_block->getStmts().size() == 1) {
                    auto stmt = comp_block->getStmts()[0];
                    if (auto for_stmt = llvm::dyn_cast<ForStmt>(stmt)) {
                        auto actual_stmt = for_stmt->getCond();
                        comp_block->replace_stmt(0, actual_stmt);
                    }
                    if (auto if_stmt = llvm::dyn_cast<IfStmt>(stmt)) {
                        auto actual_stmt = if_stmt->getCond();
                        comp_block->replace_stmt(0, actual_stmt);
                    }
                }
            }
        }


        std::unique_ptr<CFG> cfg;
        std::map<CompressedBlock*, std::vector<const Stmt*>> seen_stmts;
        std::vector<CompressedBlock*> blocks;
        CompressedBlock* entry_block;
        std::map<CompressedBlock*, CompressedBlock*> forwarding;
        std::map<CompressedBlock*, CompressedBlock*> parents;
        clang::ASTContext & context;


    };

    class StmtPrinter : public GenericStmtPrinter<StmtPrinter> {
    public:
        StmtPrinter(clang::ASTContext& context) : context(context) {}

        std::string print(clang::Stmt* block_stmt) {
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
            std::string res = "";

            if (auto for_stmt = llvm::dyn_cast<clang::ForStmt>(block_stmt)) {
                for_stmt->getCond()->printPretty(os, &x, policy);
                res = "for(...; " + os.str() + " ;...)";
            } else if (auto if_stmt = llvm::dyn_cast<clang::IfStmt>(block_stmt)){
                if_stmt->getCond()->printPretty(os, &x, policy);
                res = "if(" + os.str() + ")";
            } else if (auto while_stmt = llvm::dyn_cast<clang::IfStmt>(block_stmt)){
                while_stmt->getCond()->printPretty(os, &x, policy);
                res = "while(" + os.str() + ")";
            } else {
                block_stmt->printPretty(os, &x, policy);
                res = os.str();
            }




            return res;
        }
    private:
        clang::ASTContext& context;
    };
}


#endif //SIMPLE_CLANGCOMPRESSEDCFG_H
