Nodes
1;statement;foo_1 = [[0 for foo_2 in fun_1(foo_3 + 1)] for foo_4 in fun_2(foo_5 + 1)];8;
2;conditional;foo < foo;9;
3;statement;return foo_1[foo_2][foo_3 - 1];14;
4;statement;foo_1 = fun_1('-inf');10;
5;conditional;foo < foo;11;
6;statement;foo_1 = fun_1(foo_2, foo_3[foo_4 - 1][foo_5 - 1] - foo_6[foo_7 - 1]);12;
7;statement;foo_1[foo_2][foo_3] = fun_1(foo_4[foo_5][foo_6 - 1], foo_7[foo_8] + foo_9);13;
8;exit;;
Edges
0;2;
1;3;4;
2;8;
3;5;
4;2;6;
5;7;
6;5;
7;