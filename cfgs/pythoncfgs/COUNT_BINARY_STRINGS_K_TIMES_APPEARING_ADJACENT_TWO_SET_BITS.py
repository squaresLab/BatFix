Nodes
1;statement;foo_1 = [[[0, 0] for foo_2 in fun_1(foo_3 + 1)] for foo_4 in fun_2(foo_5 + 1)];8;
2;statement;foo_1[1][0][0] = 1;9;
3;statement;foo_1[1][0][1] = 1;10;
4;conditional;foo < foo;11;
5;statement;return foo_1[foo_2][foo_3][0] + foo_4[foo_5][foo_6][1];17;
6;conditional;fun_1(foo_1 + 1);12;
7;statement;foo_1[foo_2][foo_3][0] = foo_4[foo_5 - 1][foo_6][0] + foo_7[foo_8 - 1][foo_9][1];13;
8;statement;foo_1[foo_2][foo_3][1] = foo_4[foo_5 - 1][foo_6][0];14;
9;conditional;foo_1 >= 1;15;
10;statement;foo_1[foo_2][foo_3][1] += foo_4[foo_5 - 1][foo_6 - 1][1];16;
11;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;11;
5;4;7;
6;8;
7;9;
8;6;10;
9;6;
10;
