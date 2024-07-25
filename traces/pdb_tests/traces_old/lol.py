from z3 import *
from itertools import *

# IO Pairs:
#   IN: (11, 6, 9, 4)    OUT:  35840
#   IN: (9, 12, 10, 1)   OUT:  46080
#   IN: (2, 4, 0, 4)     OUT:     12
#   IN: (14, 8, 10, 3)   OUT:  52224
#   IN: (1, 13, 9, 4)    OUT:   6656
#   IN: (4, 2, 8, 0)     OUT:   2048
#   IN: (15, 6, 12, 4)   OUT:  57344
#   IN: (7, 12, 6, 0)    OUT:   5376
#   IN: (2, 0, 6, 0)     OUT:      0
#   IN: (16, 4, 3, 1)    OUT:    520

io_pairs = [
    ((4, 2, 8, 0), 2048),
    ((11, 6, 9, 4), 35840),

]

# Convenience functions for creating a constraint using a flag with identifier
# 'i' that toggles whether the operator is used for operands x1 and x2.
# Use is OPTIONAL.
def mul(i, x1, x2):
    return If(Bool(f'B{i}'), x1 * x2, BitVecVal(0,16))

def lor(i, x1, x2):
    return If(Bool(f'B{i}'), x1 | x2, BitVecVal(0,16))

def shl(i, x1, x2):
    return If(Bool(f'B{i}'), x1 << x2, BitVecVal(0,16))

def add(i, x1, x2):
    return If(Bool(f'B{i}'), x1 + x2, BitVecVal(0,16))

# Your Synthesizer: construct a Z3 formula using input/output pairs.
def formula(pairs):

    s = Solver()
    count = 0
    p = -1
    for pair in pairs:
        p += 1
        count = 0

        x = [BitVec(f"x{i}_{p}", 16) for i in range(4)]
        x_used = [[Bool(f"x{i}_used{j}") for j in range(4)] for i in range(4)]

        for i in range(4):
            s.append(sum([If(x_used[i][j], 1, 0) for j in range(4)]) == 1)
            # print(sum([If(x_used[i][j], 1, 0) for j in range(4)]) == 1)

        line_vars = [BitVec(f"line{i}_{p}", 16) for i in range(4)]
        ops = [mul, lor, shl, add]
        res = {}
        lines = [BitVecVal(0,16), BitVecVal(0,16), BitVecVal(0,16)]

        for k in range(3):
            start = count
            for op in ops:
                for i in range(len(x)):
                    start_j = 0 if op == shl else i
                    for j in range(start_j, len(x)):
                        if i != j:
                            lines[k] += op(count, x[i], x[j])
                            s.append(Implies(Bool(f"B{count}"), x_used[i][k]))
                            s.append(Implies(Bool(f"B{count}"), x_used[j][k]))
                            res[Bool(f"B{count}")] = op(count, x[i], x[j])
                            # print(op(count, x[i], x[j]))
                            # print(Implies(Bool(f"B{count}"), x_used[i][k]))
                            # print(Implies(Bool(f"B{count}"), x_used[j][k]))
                            count += 1
                # print(lines[k])
            s.append(sum([If(Bool(f'B{i}'), 1, 0) for i in range(start, count)]) == 1)
            s.append(line_vars[k] == lines[k])
            x += [line_vars[k]]

            if k != 3:
                line_used = [Bool(f"line{k}_used{j}") for j in range(4)]
                x_used += [line_used]
                s.append(sum([If(line_used[j], 1, 0) for j in range(4)]) == 1)
                # print(sum([If(line_used[j], 1, 0) for j in range(4)]) == 1)

        s.append(x[-1] == pair[1])
        for i in range(4):
            s.append(x[i] == pair[0][i])

    print(s.check())
    for i in range(count):
        x = Bool(f"B{i}")
        m = s.model()
        if m[x]:
            print(res[x])






if __name__ == '__main__':
    formula(io_pairs)
