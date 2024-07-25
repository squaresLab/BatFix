from staticfg import CFGBuilder
import ast
from os import listdir
from queue import Queue
import _ast
from typing import Any, List, Tuple

def extract_cfg(filename) -> Any:
    """
    Extracts the CFG from the given file.

    :param filename: The filename to extract the CFG from.
    :return: The CFG.
    """

    cfg = CFGBuilder().build_from_file("test", filename)

    f_gold = cfg.functioncfgs["f_gold"]
    return f_gold



# not sure about this
class RewriteFor(ast.NodeTransformer):

    def __init__(self) -> None:
        self.found_range = False
        self.init = None
        self.cond = None

    def visit_For(self, node: ast.For):
        self.generic_visit(node.iter)
        if self.found_range:
            pass


    def visit_Call(self, node: ast.Call):
        if isinstance(node.func, ast.Name) and node.func.id == "range" and len(node.args) == 2:
            # Currently only only forward ranges with 2 arguments
            self.init = node.args[0]
            self.cond = node.args[1]
            self.found_range = True


class RewriteName(ast.NodeTransformer):

    def __init__(self) -> None:
        self.i = 0
        self.f_id = 0

    def visit_Constant(self, node: ast.Constant):

        if isinstance(node.value, bool):
            if node.value:
                return ast.Name(id=f'true')
            else:
                return ast.Name(id=f'false')

        return node

    def visit_Call(self, node: ast.Call):
        self.f_id += 1
        self.i -= 1

        # If the iteration is through a range, we replace the range call with a C++
        # equivalent integer comparison with two placeholders

        if isinstance(node.func, ast.Name) and node.func.id == "range" and len(node.args) <= 3:
            # Currently only only forward ranges with 2 arguments
            call = node
            self.generic_visit(node)
            arg = ast.Name(id=f'foo', ctx=node.func.ctx)
            node = ast.Compare(left=arg, ops=[ast.Lt()], comparators=[arg])

            # Create assign node
            node = [ast.Assign(targets=[arg], value=call.args[0], lineno=0, col_offset=0), node]
        else:
            self.generic_visit(node)
            node.func = ast.Name(id=f'fun_{self.f_id}', ctx=None)#node.func.ctx)

        return node

    def visit_Name(self, node) -> _ast.Name:
        self.i += 1
        return ast.Name(id=f'foo_{self.i}', ctx=node.ctx)


class Node:

    def __init__(self, data, outid, lineno=0) -> None:
        self.data = data
        self.id = outid
        self.next = []
        self.lineno = lineno


def extract_nodes(cfg) -> Tuple[List[str], dict]:
    found = []
    stack = [cfg.entryblock]

    count = 2
    lst_node = []
    nodes_to_cur_first = {}
    nodes_to_cur_last = {}
    succs = {}
    found.append(cfg.entryblock)

    while len(stack) > 0:
        cur = stack.pop()
        first_node = Node("", 0)
        last_node = first_node
        for stmt in cur.statements:

            for link in cur.exits:
                succ = link.target
                if succ not in found:
                    stack.append(succ)
                    found.append(succ)

            data = None
            rw = RewriteName()
            if isinstance(stmt, ast.While):
                data = (ast.unparse(rw.visit(stmt.test)))
            if isinstance(stmt, ast.For):
                assgn, iter = rw.visit(stmt.iter)

                node = Node(ast.unparse(assgn), count, stmt.lineno)
                lst_node.append(node)
                last_node.next = [node]
                last_node = node
                count += 1

                data = ast.unparse(iter)
            elif isinstance(stmt, ast.If):
                data = (ast.unparse(rw.visit(stmt.test)))
            else:
                data = (ast.unparse(rw.visit(stmt)))
            node = Node(data, count, stmt.lineno)
            lst_node.append(node)
            last_node.next = [node]
            last_node = node
            count += 1

        nodes_to_cur_last[cur] = last_node
        nodes_to_cur_first[cur] = first_node.next[0]

    stack = [cfg.entryblock]
    found = []
    while len(stack) > 0:
        cur = stack.pop()
        found.append(cur)

        for link in cur.exits:
            succ = link.target
            # print(nodes_to_cur_last[cur].next, nodes_to_cur_first[succ])
            nodes_to_cur_last[cur].next += [nodes_to_cur_first[succ]]
            if succ not in found:
                stack.append(succ)

    special = Node("", 1)
    special.next = [lst_node[0]]
    lst_node = [special] + lst_node
    edges = {node.id: [e.id for e in node.next] for node in lst_node}
    nodes = [f"{node.data};{node.lineno}" for node in lst_node]
    return nodes, edges



def generate_cfg(filename) -> str:
    """
    Generates the CFG for the given file.

    :param filename: The filename to generate the CFG for.
    :return: The CFG.
    """

    output = ''
    nodes, edges = extract_nodes(extract_cfg(filename))

    output += "Nodes\n"
    output += "1;special;;;\n"
    for i in range(1, len(nodes)):
        if edges[i+1] == []:
            output += f"{i+1};statement;{nodes[i]};\n"
        elif len(edges[i+1]) > 1:
            output += f"{i+1};conditional;{nodes[i]};\n"
        else:
            output += f"{i+1};statement;{nodes[i]};\n"

    output += f"{len(nodes)+1};exit;;\n"

    output += "Edges\n"
    for i in range(len(nodes)):
        edges_str = ''
        for j in edges[i+1]:
            edges_str = f"{j};" + edges_str
        if edges[i+1] == []:
            edges_str = f"{len(nodes)+1};" + edges_str
        output += f"{i};" + edges_str + "\n"
    output += f"{len(nodes)};"

    return output


def test() -> float:
    x : int = 0
    y = 0.2

    return x + y


if __name__ == "__main__":
    abs_path = '/Users/anon/Documents/Dev.nosync/Java2CPP/ground_truths/geeks_for_geeks_successful_test_scripts/python/'
    python_progs = [abs_path + f for f in listdir(abs_path)]

    for prog in python_progs:
        f_name = prog[len(abs_path):]
        if f_name != 'CHECK_ARRAY_REPRESENTS_INORDER_BINARY_SEARCH_TREE_NOT.py':
            continue
        output = generate_cfg(prog)
        print(output)
        #with open("/Users/anon/Documents/Dev.nosync/Java2CPP/pythoncfgs/" + f_name, "a+") as f:
        #    f.write(output)
        #    print(output)
        #print()

