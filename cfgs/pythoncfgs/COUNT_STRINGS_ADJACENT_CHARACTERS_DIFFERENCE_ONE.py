Nodes
1;statement;foo_1 = [[0 for foo_2 in fun_1(27)] for foo_3 in fun_2(foo_4 + 1)];8;
2;conditional;foo < foo;9;
3;conditional;foo < foo;11;
4;statement;foo_1 = 0;17;
5;conditional;foo < foo;18;
6;statement;return foo_1;20;
7;statement;foo_1 = foo_2 + foo_3[foo_4][foo_5];19;
8;conditional;foo < foo;12;
9;conditional;foo_1 == 0;13;
10;statement;foo_1[foo_2][foo_3] = foo_4[foo_5 - 1][foo_6 - 1] + foo_7[foo_8 - 1][foo_9 + 1];16;
11;statement;foo_1[foo_2][foo_3] = foo_4[foo_5 - 1][foo_6 + 1];14;
12;statement;foo_1[1][foo_2] = 1;10;
13;exit;;
Edges
0;2;
1;3;12;
2;4;8;
3;5;
4;6;7;
5;13;
6;5;
7;3;9;
8;10;11;
9;8;
10;8;
11;2;
12;