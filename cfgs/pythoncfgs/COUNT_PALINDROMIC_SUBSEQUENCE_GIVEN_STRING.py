Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = [[0 for foo_2 in fun_1(foo_3 + 2)] for foo_4 in fun_2(foo_5 + 2)];9;
3;conditional;fun_1(foo_1);10;
4;conditional;foo < foo;12;
5;statement;return foo_1[0][foo_2 - 1];20;
6;conditional;fun_1(foo_1);13;
7;statement;foo_1 = foo_2 + foo_3 - 1;14;
8;conditional;foo_1 < foo_2;15;
9;conditional;foo_1[foo_2] == foo_3[foo_4];16;
10;statement;foo_1[foo_2][foo_3] = foo_4[foo_5][foo_6 - 1] + foo_7[foo_8 + 1][foo_9] - foo_10[foo_11 + 1][foo_12 - 1];19;
11;statement;foo_1[foo_2][foo_3] = foo_4[foo_5][foo_6 - 1] + foo_7[foo_8 + 1][foo_9] + 1;17;
12;statement;foo_1[foo_2][foo_3] = 1;11;
13;exit;;
Edges
0;2;
1;3;
2;4;12;
3;5;6;
4;13;
5;4;7;
6;8;
7;6;9;
8;10;11;
9;6;
10;6;
11;3;
12;