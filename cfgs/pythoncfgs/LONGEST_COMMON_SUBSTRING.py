Nodes
1;statement;foo_1 = [[0 for foo_2 in fun_1(foo_3 + 1)] for foo_4 in fun_2(foo_5 + 1)];8;
2;statement;foo_1 = 0;9;
3;conditional;fun_1(foo_1 + 1);10;
4;statement;return foo_1;19;
5;conditional;fun_1(foo_1 + 1);11;
6;conditional;foo_1 == 0 or foo_2 == 0;12;
7;conditional;foo_1[foo_2 - 1] == foo_3[foo_4 - 1];14;
8;statement;foo_1[foo_2][foo_3] = 0;18;
9;statement;foo_1[foo_2][foo_3] = foo_4[foo_5 - 1][foo_6 - 1] + 1;15;
10;statement;foo_1 = fun_1(foo_2, foo_3[foo_4][foo_5]);16;
11;statement;foo_1[foo_2][foo_3] = 0;13;
12;exit;;
Edges
0;2;
1;3;
2;4;5;
3;12;
4;3;6;
5;7;11;
6;8;9;
7;5;
8;10;
9;5;
10;5;
11;