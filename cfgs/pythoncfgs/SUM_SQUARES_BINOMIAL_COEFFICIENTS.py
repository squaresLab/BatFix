Nodes
1;statement;foo_1 = [[0 for foo_2 in fun_1(foo_3 + 1)] for foo_4 in fun_2(foo_5 + 1)];8;
2;conditional;foo < foo;9;
3;statement;foo_1 = 0;15;
4;conditional;foo < foo;16;
5;statement;return foo_1;18;
6;statement;foo_1 = foo_2 + foo_3[foo_4][foo_5] * foo_6[foo_7][foo_8];17;
7;conditional;foo < foo;10;
8;conditional;foo_1 == 0 or foo_2 == foo_3;11;
9;statement;foo_1[foo_2][foo_3] = foo_4[foo_5 - 1][foo_6 - 1] + foo_7[foo_8 - 1][foo_9];14;
10;statement;foo_1[foo_2][foo_3] = 1;12;
11;exit;;
Edges
0;2;
1;3;7;
2;4;
3;5;6;
4;11;
5;4;
6;2;8;
7;9;10;
8;7;
9;7;
10;
