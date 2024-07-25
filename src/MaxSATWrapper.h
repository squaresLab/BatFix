//
// Created by anon on 12/1/21.
//

#ifndef SIMPLE_MAXSATWRAPPER_H
#define SIMPLE_MAXSATWRAPPER_H

#include "HyperGraph.h"
#include <sstream>
#include <fstream>


template<typename T1, typename T2>
class MaxSATWrapper {
public:
    MaxSATWrapper(HyperGraph<T1> *graph1, HyperGraph<T2> *graph2,
                  std::map<HyperBlock<T1> *, std::map<HyperBlock<T2> *, int>> cost) :
            graph1(graph1), graph2(graph2), cost(cost) {
        vertices1 = graph1->get_vertices();
        vertices2 = graph2->get_vertices();
    }


    void encode() {
        int n_clauses = 0;
        int n_variables = vertices1.size() * vertices2.size();
        std::stringstream dimacs;

        // forall u, sum(uv), v > 0
        for (int u = 0; u < vertices1.size(); u++) {
            dimacs << "100000 "; // hard clause
            for (int v = 0; v < vertices2.size(); v++) {
                dimacs << x(u, v) << " ";
            }
            dimacs << 0 << std::endl;
            n_clauses++;
        }

        // std::cout << dimacs.str() << std::endl;

        // forall v, sum(uv), u > 0
        for (int v = 0; v < vertices2.size(); v++) {
            dimacs << "100000 "; // hard clause
            for (int u = 0; u < vertices1.size(); u++) {
                dimacs << x(u, v) << " ";
            }
            dimacs << 0 << std::endl;
            n_clauses++;
        }

        // std::cout << dimacs.str() << std::endl;


        // if we match uv, then no node after u can match any node before v
        for (int u = 0; u < vertices1.size(); u++) {
            for (int v = 0; v < vertices2.size(); v++) {
                std::set<HyperBlock<T1> *> p_u_set = p(vertices1[u], graph1);
                std::set<HyperBlock<T2> *> s_v_set = s(vertices2[v], graph2);

                for (auto p_u_vertex: p_u_set) {
                    int u_prime = get_v_id(p_u_vertex, vertices1);
                    for (auto s_v_vertex: s_v_set) {
                        int v_prime = get_v_id(s_v_vertex, vertices2);
                        dimacs << "100000 "; // hard clause
                        dimacs << -x(u, v) << " " << -x(u_prime, v_prime) << " 0" << std::endl;
                        n_clauses++;
                    }
                }
            }
        }

        // std::cout << dimacs.str() << std::endl;


        // if we match uv, then no node before v can match any node after u
        for (int u = 0; u < vertices1.size(); u++) {
            for (int v = 0; v < vertices2.size(); v++) {
                std::set<HyperBlock<T1> *> s_u_set = s(vertices1[u], graph1);
                std::set<HyperBlock<T2> *> p_v_set = p(vertices2[v], graph2);

                for (auto s_u_vertex: s_u_set) {
                    int u_prime = get_v_id(s_u_vertex, vertices1);
                    for (auto p_v_vertex: p_v_set) {
                        int v_prime = get_v_id(p_v_vertex, vertices2);
                        dimacs << "100000 "; // hard clause
                        dimacs << -x(u, v) << " " << -x(u_prime, v_prime) << " 0" << std::endl;
                        n_clauses++;
                    }
                }
            }
        }

        // FIXME: Review encoding
        // constraint 5
        for (int u = 0; u < vertices1.size(); u++) {
            for (int v = 0; v < vertices2.size(); v++) {
                for (HyperBlock<T1> *u_prime_vertex: vertices1[u]->get_children()) {
                    int u_prime = get_v_id(u_prime_vertex, vertices1);
                    dimacs << "100000 " << -x(u, v) << " " << x(u_prime, v) << " ";
                    // std::cerr << "x" << u << "_" << v << " -> ";
                    // std::cerr << "x" << u_prime << "_" << v << " \\/ ";
                    for (HyperBlock<T2> *v_prime_vertex: vertices2[v]->get_children()) {
                        int v_prime = get_v_id(v_prime_vertex, vertices2);
                        dimacs << x(u, v_prime) << " ";
                        dimacs << x(u_prime, v_prime) << " ";
                        // std::cerr << "x" << u << "_" << v_prime << " \\/ ";
                        // std::cerr << "x" << u_prime << "_" << v_prime << " \\/ ";
                    }
                    dimacs << "0" << std::endl;
                    // std::cerr << std::endl;
                    n_clauses++;
                }
            }
        }



        // constraint 6
        for (int v = 0; v < vertices2.size(); v++) {
            for (int u = 0; u < vertices1.size(); u++) {
                for (HyperBlock<T2> *v_prime_vertex: vertices2[v]->get_children()) {
                    int v_prime = get_v_id(v_prime_vertex, vertices2);
                    dimacs << "100000 "; // hard clause
                    dimacs << -x(u, v) << " " << x(u, v_prime) << " ";
                    // std::cerr << "x" << u << "_" << v << " -> ";
                    // std::cerr << "x" << u << "_" << v_prime << " \\/ ";
                    for (HyperBlock<T1> *u_prime_vertex: vertices1[u]->get_children()) {
                        int u_prime = get_v_id(u_prime_vertex, vertices1);
                        // std::cerr << "x" << u_prime << "_" << v << " \\/ ";
                        // std::cerr << "x" << u_prime << "_" << v_prime << " \\/ ";
                        dimacs << x(u_prime, v) << " ";
                        dimacs << x(u_prime, v_prime) << " ";
                    }
                    dimacs << "0" << std::endl;
                    // std::cerr << std::endl;
                    n_clauses++;
                }
            }
        }






        for (int u = 0; u < vertices1.size(); u++) {
            for (int v = 0; v < vertices2.size(); v++) {
                if (cost[vertices1[u]][vertices2[v]] < 10000)
                    dimacs << cost[vertices1[u]][vertices2[v]] + 1 << " " << -x(u, v) << " 0" << std::endl;
                n_clauses++;
            }
        }

        std::ofstream myfile("/tmp/test.wcnf");
        assert(myfile.is_open());

        myfile << "p wcnf " << n_variables << " " << n_clauses << " 100000" << std::endl;
        myfile << dimacs.str();
        myfile.close();
    }

    std::string run() {

        std::stringstream command;
        command << "/Users/anon/Documents/Dev.nosync/Java2CPP/src/open-wbo " << "/tmp/test.wcnf";
        auto path = std::__fs::filesystem::current_path(); //getting path
        std::cerr << path.string() << std::endl;
        std::string res_str = command.str();
        FILE *pipe = popen(res_str.c_str(), "r");
        std::array<char, 128> buffer;
        std::string result;

        if (!pipe) {
            std::cerr << "Couldn't start command." << std::endl;
            return "";
        }


        while (fgets(buffer.data(), 128, pipe) != NULL) {
            result += buffer.data();
        }

        int idx = result.find("\nv ");

        result = result.substr(idx + 3, result.size() - idx - 5);

        auto returnCode = pclose(pipe);

        return result;
    }

    std::map<HyperBlock<T1> *, HyperBlock<T2> *> decode(std::string res) {
        std::map<HyperBlock<T1> *, HyperBlock<T2> *> mapping;

        std::stringstream stream(res);
        int x;

        // std::cerr << res << std::endl;
        while (stream >> x) {
            if (x > 0) {
                int u, v;
                this->inv_x(x, u, v);
                std::cerr << "(" << u << ", " << v << ")" << std::endl;
                mapping[vertices1[u]] = vertices2[v];
            }
        }

        return mapping;
    }

    std::map<HyperBlock<T1> *, HyperBlock<T2> *> find_matching() {
        encode();
        return decode(run());
    }


private:

    HyperGraph<T1> *graph1;
    HyperGraph<T2> *graph2;

    std::vector<HyperBlock<T1> *> vertices1;
    std::vector<HyperBlock<T2> *> vertices2;
    std::map<HyperBlock<T1> *, std::map<HyperBlock<T2> *, int>> cost;

    int x(int idx1, int idx2) {
        if (vertices1.size() > vertices2.size())
            return idx1 * vertices1.size() + idx2 + 1;
        else {
            return idx2 * vertices2.size() + idx1 + 1;
        }
    };

    void inv_x(int x, int &u, int &v) {

        if (vertices1.size() > vertices2.size()) {
            u = (x - 1) / vertices1.size();
            v = x - 1 - u * vertices1.size();
        } else {
            v = (x - 1) / vertices2.size();
            u = x - 1 - v * vertices2.size();
        }

    }

    template<typename T>
    int get_v_id(HyperBlock<T> *u, std::vector<HyperBlock<T> *> vertices) {
        for (int i = 0; i < vertices.size(); i++) {
            if (vertices[i] == u) {
                return i;
            }
        }
        return -1;
    }

    template<typename T>
    // T = HyperBlock<clang::Stmt>
    std::set<HyperBlock<T> *> p(HyperBlock<T> *u, HyperGraph<T> *g) {
        // find nodes that go through a path from root to u
        Path<HyperBlock<T>> path = g->dfs_find(u);
        return path.get_nodes();
    }

    template<typename T>
    std::set<HyperBlock<T> *> s(HyperBlock<T> *u, HyperGraph<T> *g) {
        // find nodes that go through a path from root to u
        std::map<HyperBlock<T> *, HyperBlock<T> *> inv_map;
        std::map<HyperBlock<T> *, HyperBlock<T> *> inv_inv_map;

        HyperGraph<T> *inv_g = g->reverse_graph(inv_map);
        for (auto pair: inv_map)
            inv_inv_map[pair.second] = pair.first;


        auto path = inv_g->dfs_find(inv_map[u]);

        std::set<HyperBlock<T> *> nodes;
        for (auto node: path.get_nodes()) {
            nodes.insert(inv_inv_map[node]);
        }

        return nodes;
    }

};


#endif //SIMPLE_MAXSATWRAPPER_H
