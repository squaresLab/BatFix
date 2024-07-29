Nodes
1;statement;foo_1 = [[0] * (foo_2 + 1) for foo_3 in fun_1(2)];8;
2;statement;foo_1[0][1] = 1;9;
3;statement;foo_1[1][1] = 2;10;
4;conditional;foo < foo;11;
5;statement;return foo_1[0][foo_2] + foo_3[1][foo_4];14;
6;statement;foo_1[0][foo_2] = foo_3[0][foo_4 - 1] + foo_5[1][foo_6 - 1];12;
7;statement;foo_1[1][foo_2] = foo_3[0][foo_4 - 1] * 2 + foo_5[1][foo_6 - 1];13;
8;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;8;
5;7;
6;4;
7;
