//
// Created by anon on 1/17/22.
//

#ifndef SIMPLE_CFGMATCHINGUTILS_H
#define SIMPLE_CFGMATCHINGUTILS_H
#include <algorithm>
#include <iostream>
#include <string_view>

int longest_common_substring(std::string s1, std::string s2) {
    int n = s1.length();
    int m = s2.length();
    int max = 0;
    int dp[n+1][m+1];

    // dp[i][j] -> longest common substring of s1[0..i-1] and s2[0..j-1]] that ends in i and j

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if (i > 0 && j > 0 && (s1[i] == ' ' || s2[j] == ' ')) {
                dp[i][j] = dp[i - 1][j - 1]; // ignore spaces
            }

            if (i == 0 || j == 0) {
                if (s1[i] == s2[j]) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = 0; // base case
                }
            } else {
                if (s1[i] == s2[j]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = 0;
                }
            }
            max = std::max(max, dp[i][j]);
        }
    }

    return std::min(n,m) - max + std::abs(n-m);

}

int compare(Node* java, clang::Stmt* cpp, clang::StmtPrinter printer_cpp, NodePrinter printer_java) {
    std::string cpp_string = printer_cpp.print(cpp);
    std::string java_string = printer_java.print(java);

    return longest_common_substring(cpp_string, java_string);
}

int compare_hyper(HyperBlock<Node>* java, HyperBlock<Stmt>* cpp, clang::StmtPrinter printer_cpp, NodePrinter printer_java) {
    std::vector<Node*> java_vec = java->get_stmts();
    std::vector<Stmt*> cpp_vec = cpp->get_stmts();

    if (java_vec.size() == 0 || cpp_vec.size() == 0) {
        if (cpp_vec.size() == java_vec.size()) {
            return 0;
        }

        if (cpp_vec.size() > 0) {
            RecursiveAdd implicit_checker;
            implicit_checker.TraverseStmt((Stmt *) cpp_vec[0]);
            for (auto decl: implicit_checker.Decls) {
                decl->dump();
                if (decl->isImplicit()) {
                    return 0;
                }
            }
        }
        return 50 * cpp_vec.size() + 50 * java_vec.size();
    }

    int total_1 = 0;
    for (auto node : java_vec) {
        int minimum = INT_MAX;
        for (auto stmt : cpp_vec) {
            if (compare(node, stmt, printer_cpp, printer_java) < minimum)
                minimum = compare(node, stmt, printer_cpp, printer_java);
        }
        total_1 += minimum;
    }
    total_1 /= java_vec.size();

    int total_2 = 0;
    for (auto stmt : cpp_vec) {
        int minimum = INT_MAX;
        for (auto node : java_vec) {
            if (compare(node, stmt, printer_cpp, printer_java) < minimum)
                minimum = compare(node, stmt, printer_cpp, printer_java);
        }
        total_2 += minimum;
    }
    total_2 /= cpp_vec.size();

    return total_1 + total_2;
}

int compare_hyper_hyper(HyperBlock<HyperBlock<Node>>* java, HyperBlock<HyperBlock<Stmt>>* cpp, clang::StmtPrinter printer_cpp, NodePrinter printer_java) {
    std::vector<HyperBlock<Node>*> java_vec = java->get_stmts();
    std::vector<HyperBlock<Stmt>*> cpp_vec = cpp->get_stmts();



    if (java_vec.size() == 0 || cpp_vec.size() == 0) {
        if (cpp_vec.size() == java_vec.size())
            return 0;
        return 100;
    }

    int total_1 = 0;
    for (auto node : java_vec) {
        int minimum = INT_MAX;
        for (auto stmt : cpp_vec) {
            if (compare_hyper(node, stmt, printer_cpp, printer_java) < minimum)
                minimum = compare_hyper(node, stmt, printer_cpp, printer_java);
        }
        total_1 += minimum;
    }
    total_1 /= java_vec.size();

    int total_2 = 0;
    for (auto stmt : cpp_vec) {
        int minimum = INT_MAX;
        for (auto node : java_vec) {
            if (compare_hyper(node, stmt, printer_cpp, printer_java) < minimum)
                minimum = compare_hyper(node, stmt, printer_cpp, printer_java);
        }
        total_2 += minimum;
    }
    total_2 /= cpp_vec.size();
    return (total_1 + total_2);
}

void match_basic_blocks(map<clang::Stmt *, Node *> &final_mapping, const vector<clang::Stmt *> &clang_stmts,
                        const vector<Node *> &node_stmts) {
    if (clang_stmts.size() == node_stmts.size()) {
        for (int k = 0; k < clang_stmts.size(); k++) {
            final_mapping[clang_stmts[k]] = node_stmts[k];
        }
    } else {
        for (int k = 0; k < min(clang_stmts.size(), node_stmts.size()); k++) {
            final_mapping[clang_stmts[k]] = node_stmts[k];
        }

    }
}

void match_basic_blocks_smart(map<clang::Stmt *, Node *> &final_mapping, const vector<clang::Stmt *> &clang_stmts,
                        const vector<Node *> &node_stmts, clang::StmtPrinter& printer) {

    NodePrinter nodePrinter;

    if (clang_stmts.size() == node_stmts.size()) {
        for (int k = 0; k < clang_stmts.size(); k++) {
            final_mapping[clang_stmts[k]] = node_stmts[k];
        }
    } else if (clang_stmts.size() > node_stmts.size()) {

        for (int k = 0, i = -1;
            k < clang_stmts.size();
            k++) {
            if (printer.print(clang_stmts[k]).find("memset") != std::string::npos) {
                final_mapping[clang_stmts[k]] = node_stmts[i];
            } else {
                i++;
                if (i < (int) node_stmts.size())
                    final_mapping[clang_stmts[k]] = node_stmts[i];
                else
                    break;
            }
        }
    } else {
        for (int k = 0; k < min(clang_stmts.size(), node_stmts.size()); k++) {
            final_mapping[clang_stmts[k]] = node_stmts[k];
        }
    }
}



std::map<HyperBlock<Stmt>*, HyperBlock<Node>*> find_mapping_hyper(HyperGraph<Stmt> *hyper_graph, StmtPrinter &printer,
                                           HyperBlockPrinter<StmtPrinter> &hyper_node_printer_stmt, HyperGraph<Node> *hyper_java,
                                           NodePrinter &printer_node, HyperBlockPrinter<NodePrinter> &hyper_node_printer) {
    map<HyperBlock<HyperBlock<Stmt>>*, map<HyperBlock<HyperBlock<Node>>*, int>> distance_map;

    auto clang_hyper_scc = hyper_graph->scc_graph();
    auto java_hyper_scc = hyper_java->scc_graph();
    cerr << java_hyper_scc->to_dot(hyper_node_printer) << endl;
    cerr << clang_hyper_scc->to_dot(hyper_node_printer_stmt) << endl;


    int i = 0;
    for (auto u : clang_hyper_scc->get_vertices()) {
        int j = 0;
        std::cerr << i << " ----> " << u->print_stmts(hyper_node_printer_stmt) << std::endl;
        for (auto v: java_hyper_scc->get_vertices()) {
            distance_map[u][v] = compare_hyper_hyper(v, u, printer, printer_node);
            if (i == 0)
                std::cerr << j++ << " ----> " << v->print_stmts(hyper_node_printer) << std::endl;
        }
        i ++;
    }



    MaxSATWrapper<HyperBlock<Stmt>, HyperBlock<Node>> wrapper(clang_hyper_scc, java_hyper_scc, distance_map);
    map<HyperBlock<HyperBlock<Stmt>>*, HyperBlock< HyperBlock<Node>>*> mapping = wrapper.find_matching();
    std::map<HyperBlock<Stmt>*, HyperBlock<Node>*> final_mapping;

    clang_hyper_scc->to_dot(hyper_node_printer_stmt);
    java_hyper_scc->to_dot(hyper_node_printer);

    for (auto item : mapping) {
        vector<HyperBlock<Stmt>*> scc1 = item.first->get_stmts();
        vector<HyperBlock<Node>*> scc2 = item.second->get_stmts();

        if (scc1.size() > 1 && scc2.size() > 1) {
            auto new_graph1 = HyperGraph<Stmt>::generate_new_graph(scc1);
            std::cerr << new_graph1->to_dot(printer) << std::endl;
            auto new_graph2 = HyperGraph<Node>::generate_new_graph(scc2);
            std::cerr << new_graph2->to_dot(printer_node) << std::endl;
            auto rec_map = find_mapping_hyper(new_graph1, printer, hyper_node_printer_stmt, new_graph2, printer_node, hyper_node_printer);
            final_mapping.insert(rec_map.begin(), rec_map.end());
        } else {

            if (scc1.size() < scc2.size()) {
                for (int i = 0; i < scc2.size(); i++) {
                    final_mapping[scc1[i < scc1.size() ? i : scc1.size() - 1]] = scc2[i];
                }
            } else {
                for (int i = 0; i < scc1.size(); i++) {
                    final_mapping[scc1[i]] = scc2[i < scc2.size() ? i : scc2.size() - 1];
                }
            }
        }
    }
    return final_mapping;
}


std::map<clang::Stmt*, Node*> find_mapping(HyperGraph<Stmt> *hyper_graph, StmtPrinter &printer,
                                           HyperBlockPrinter<StmtPrinter> &hyper_node_printer_stmt, HyperGraph<Node> *hyper_java,
                                           NodePrinter &printer_node, HyperBlockPrinter<NodePrinter> &hyper_node_printer) {
    map<HyperBlock<HyperBlock<Stmt>>*, map<HyperBlock<HyperBlock<Node>>*, int>> distance_map;

    auto clang_hyper_scc = hyper_graph->scc_graph();
    auto java_hyper_scc = hyper_java->scc_graph();
    cerr << java_hyper_scc->to_dot(hyper_node_printer) << endl;
    cerr << clang_hyper_scc->to_dot(hyper_node_printer_stmt) << endl;

    int i = 0;
    for (auto u : clang_hyper_scc->get_vertices()) {
        int j = 0;
        std::cerr << i << " ----> " << u->print_stmts(hyper_node_printer_stmt) << std::endl;
        for (auto v: java_hyper_scc->get_vertices()) {
            distance_map[u][v] = compare_hyper_hyper(v, u, printer, printer_node);
            if (i == 0)
                std::cerr << j++ << " ----> " << v->print_stmts(hyper_node_printer) << std::endl;
        }
        i ++;
    }


    MaxSATWrapper<HyperBlock<Stmt>, HyperBlock<Node>> wrapper(clang_hyper_scc, java_hyper_scc, distance_map);
    map<HyperBlock<HyperBlock<Stmt>>*, HyperBlock< HyperBlock<Node>>*> mapping = wrapper.find_matching();
    std::map<clang::Stmt*, Node*> final_mapping;

    clang_hyper_scc->to_dot(hyper_node_printer_stmt);
    java_hyper_scc->to_dot(hyper_node_printer);

    for (auto item : mapping) {
        vector<HyperBlock<Stmt>*> scc1 = item.first->get_stmts();
        vector<HyperBlock<Node>*> scc2 = item.second->get_stmts();

        if (scc1.size() > 1 && scc2.size() > 1) {
            auto new_graph1 = HyperGraph<Stmt>::generate_new_graph(scc1);
            std::cerr << new_graph1->to_dot(printer) << std::endl;
            auto new_graph2 = HyperGraph<Node>::generate_new_graph(scc2);
            std::cerr << new_graph2->to_dot(printer_node) << std::endl;
            auto rec_map = find_mapping(new_graph1, printer, hyper_node_printer_stmt, new_graph2, printer_node, hyper_node_printer);
            final_mapping.insert(rec_map.begin(), rec_map.end());
        } else {
            std::vector<clang::Stmt*> clang_stmts;
            std::vector<Node*> node_stmts;

            for (auto block : scc1)
                for (auto stmt : block->get_stmts())
                    clang_stmts.push_back(stmt);

            for (auto block : scc2)
                for (auto stmt : block->get_stmts())
                    node_stmts.push_back(stmt);


            match_basic_blocks_smart(final_mapping, clang_stmts, node_stmts, printer);
        }
    }
    return final_mapping;
}

std::map<clang::Stmt*, Node*> match_cfgs(unique_ptr<clang::ASTUnit> &ast, FunctionCallBack &callback, string &graph_file) {// Build CFGs
    CFG::BuildOptions options;
    auto opt = LangOptions();
    auto cfg = CFG::buildCFG(callback.getNode(), callback.getNode()->getBody(), &ast->getASTContext(), options);
    // cfg->dump(opt, true);

    ClangCompressedCFG new_cfg(move(cfg), ast->getASTContext());


    new_cfg.build_compressed_cfg();
    auto hyper_graph = new_cfg.build_hyper_graph();
    StmtPrinter printer(ast->getASTContext());
    HyperBlockPrinter<StmtPrinter> hyper_node_printer_stmt(printer);

    auto node = Node::ParseGraph(graph_file);
    HyperGraph<Node>* hyper_java = node->build_hyper_graph();
    NodePrinter printer_node;
    HyperBlockPrinter<NodePrinter> hyper_node_printer(printer_node);

    std::cerr << hyper_java->to_dot(printer_node) << std::endl;;
    std::cerr << hyper_graph->to_dot(printer) << std::endl;;

    // this should be a function
    auto mapping = find_mapping(hyper_graph, printer, hyper_node_printer_stmt, hyper_java, printer_node, hyper_node_printer);

    for (auto kv : mapping) {
        if (kv.first && kv.second)
            std::cerr << printer.print(kv.first) << " matches " << printer_node.print(kv.second) << std::endl;
    }

    return mapping;
}

std::map<HyperBlock<Stmt>*, HyperBlock<Node>*> match_cfgs_hyper(unique_ptr<clang::ASTUnit> &ast, FunctionCallBack &callback, string &graph_file) {// Build CFGs
    CFG::BuildOptions options;
    auto opt = LangOptions();
    auto cfg = CFG::buildCFG(callback.getNode(), callback.getNode()->getBody(), &ast->getASTContext(), options);
    // cfg->dump(opt, true);

    ClangCompressedCFG new_cfg(move(cfg), ast->getASTContext());


    new_cfg.build_compressed_cfg();
    auto hyper_graph = new_cfg.build_hyper_graph();
    StmtPrinter printer(ast->getASTContext());
    HyperBlockPrinter<StmtPrinter> hyper_node_printer_stmt(printer);

    auto node = Node::ParseGraph(graph_file);
    HyperGraph<Node>* hyper_java = node->build_hyper_graph();
    NodePrinter printer_node;
    HyperBlockPrinter<NodePrinter> hyper_node_printer(printer_node);

    std::cerr << hyper_java->to_dot(printer_node) << std::endl;;
    std::cerr << hyper_graph->to_dot(printer) << std::endl;;

    // this should be a function
    auto mapping = find_mapping_hyper(hyper_graph, printer, hyper_node_printer_stmt, hyper_java, printer_node, hyper_node_printer);

    return mapping;
}


#endif //SIMPLE_CFGMATCHINGUTILS_H
