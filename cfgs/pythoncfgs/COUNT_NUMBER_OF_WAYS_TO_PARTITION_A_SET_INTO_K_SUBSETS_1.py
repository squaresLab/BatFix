Nodes
1;statement;foo_1 = [[0 for foo_2 in fun_1(foo_3 + 1)] for foo_4 in fun_2(foo_5 + 1)];8;
2;conditional;fun_1(foo_1 + 1);9;
3;conditional;fun_1(foo_1 + 1);11;
4;conditional;foo < foo;13;
5;statement;return foo_1[foo_2][foo_3];19;
6;conditional;foo < foo;14;
7;conditional;foo_1 == 1 or foo_2 == foo_3;15;
8;statement;foo_1[foo_2][foo_3] = foo_4 * foo_5[foo_6 - 1][foo_7] + foo_8[foo_9 - 1][foo_10 - 1];18;
9;statement;foo_1[foo_2][foo_3] = 1;16;
10;statement;foo_1[0][foo_2] = 0;12;
11;statement;foo_1[foo_2][0] = 0;10;
12;exit;;
Edges
0;2;
1;3;11;
2;4;10;
3;5;6;
4;12;
5;4;7;
6;8;9;
7;6;
8;6;
9;3;
10;2;
11;
