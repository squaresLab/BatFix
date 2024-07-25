Nodes
1;statement;foo_1 = [[0 for foo_2 in fun_1(foo_3 + 1)] for foo_4 in fun_2(foo_5 + 1)];8;
2;statement;foo_1[0][0] = 1;9;
3;conditional;foo < foo;10;
4;statement;return foo_1[foo_2][0];14;
5;statement;foo_1[foo_2][0] = foo_3[foo_4 - 1][foo_5 - 1];11;
6;conditional;foo < foo;12;
7;statement;foo_1[foo_2][foo_3] = foo_4[foo_5 - 1][foo_6 - 1] + foo_7[foo_8][foo_9 - 1];13;
8;exit;;
Edges
0;2;
1;3;
2;4;5;
3;8;
4;6;
5;3;7;
6;6;
7;