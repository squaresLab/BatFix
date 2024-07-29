Nodes
1;statement;foo_1 = [[0 for foo_2 in fun_1(foo_3 + 1)] for foo_4 in fun_2(foo_5 + 1)];8;
2;conditional;fun_1(foo_1 + 1);9;
3;statement;return foo_1[foo_2][foo_3];19;
4;conditional;fun_1(foo_1 + 1);10;
5;conditional;foo_1 == 0 or foo_2 == 0;11;
6;conditional;foo_1 < foo_2;13;
7;conditional;foo_1 == 1;15;
8;statement;foo_1[foo_2][foo_3] = foo_4[foo_5 - 1][foo_6] + foo_7[foo_8 // 2][foo_9 - 1];18;
9;statement;foo_1[foo_2][foo_3] = foo_4;16;
10;statement;foo_1[foo_2][foo_3] = 0;14;
11;statement;foo_1[foo_2][foo_3] = 0;12;
12;exit;;
Edges
0;2;
1;3;4;
2;12;
3;2;5;
4;6;11;
5;7;10;
6;8;9;
7;4;
8;4;
9;4;
10;4;
11;
