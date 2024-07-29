Nodes
1;statement;foo_1 = [[0] * (foo_2 + 1) for foo_3 in fun_1(foo_4 + 1)];8;
2;conditional;foo < foo;9;
3;conditional;foo < foo;11;
4;statement;return foo_1[-1][-1];15;
5;conditional;foo < foo;12;
6;conditional;foo < foo;13;
7;statement;foo_1[foo_2][foo_3] += foo_4[foo_5 - 1][foo_6 - foo_7];14;
8;statement;foo_1[1][foo_2] = 1;10;
9;exit;;
Edges
0;2;
1;3;8;
2;4;5;
3;9;
4;3;6;
5;5;7;
6;6;
7;2;
8;
