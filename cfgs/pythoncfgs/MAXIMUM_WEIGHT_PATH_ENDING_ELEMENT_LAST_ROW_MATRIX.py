Nodes
1;statement;foo_1 = [[0 for foo_2 in fun_1(foo_3)] for foo_4 in fun_2(foo_5)];8;
2;statement;foo_1[0][0] = foo_2[0][0];9;
3;conditional;foo < foo;10;
4;conditional;foo < foo;12;
5;statement;foo_1 = 0;16;
6;conditional;fun_1(foo_1);17;
7;statement;return foo_1;20;
8;conditional;foo_1 < foo_2[foo_3 - 1][foo_4];18;
9;statement;foo_1 = foo_2[foo_3 - 1][foo_4];19;
10;conditional;foo < foo;13;
11;statement;foo_1[foo_2][foo_3] = foo_4[foo_5][foo_6] + fun_1(foo_7[foo_8 - 1][foo_9 - 1], foo_10[foo_11 - 1][foo_12]);14;
12;statement;foo_1[foo_2][0] = foo_3[foo_4][0] + foo_5[foo_6 - 1][0];11;
13;exit;;
Edges
0;2;
1;3;
2;4;12;
3;5;10;
4;6;
5;7;8;
6;13;
7;6;9;
8;6;
9;4;11;
10;10;
11;3;
12;
