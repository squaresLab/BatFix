Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = fun_1(foo_2);9;
3;statement;foo_1 = [[0] * (foo_2 + 1) for foo_3 in fun_1(foo_4 + 1)];10;
4;conditional;fun_1(foo_1 + 1);11;
5;conditional;fun_1(foo_1 + 1);13;
6;conditional;foo < foo;15;
7;statement;return foo_1[foo_2][foo_3];21;
8;conditional;foo < foo;16;
9;conditional;foo_1[foo_2 - 1] == foo_3[foo_4 - 1];17;
10;statement;foo_1[foo_2][foo_3] = foo_4[foo_5 - 1][foo_6];20;
11;statement;foo_1[foo_2][foo_3] = foo_4[foo_5 - 1][foo_6 - 1] + foo_7[foo_8 - 1][foo_9];18;
12;statement;foo_1[foo_2][0] = 1;14;
13;statement;foo_1[0][foo_2] = 0;12;
14;exit;;
Edges
0;2;
1;3;
2;4;
3;5;13;
4;6;12;
5;7;8;
6;14;
7;6;9;
8;10;11;
9;8;
10;8;
11;5;
12;4;
13;
