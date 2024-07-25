Nodes
1;statement;foo_1 = [[0 for foo_2 in fun_1(foo_3 + 1)] for foo_4 in fun_2(foo_5 + 1)];8;
2;statement;foo_1[0][0] = 1;9;
3;conditional;foo < foo;10;
4;statement;return foo_1[foo_2][foo_3];15;
5;conditional;foo < foo;11;
6;statement;foo_1[foo_2][foo_3] = foo_4[foo_5][foo_6 - 1] + foo_7[foo_8 - 1][foo_9 - 1];12;
7;conditional;foo_1 - foo_2 - 1 >= 0;13;
8;statement;foo_1[foo_2][foo_3] -= foo_4[foo_5 - 1][foo_6 - foo_7 - 1];14;
9;exit;;
Edges
0;2;
1;3;
2;4;5;
3;9;
4;3;6;
5;7;
6;5;8;
7;5;
8;