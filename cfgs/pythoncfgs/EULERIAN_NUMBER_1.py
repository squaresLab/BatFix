Nodes
1;statement;foo_1 = [[0 for foo_2 in fun_1(foo_3 + 1)] for foo_4 in fun_2(foo_5 + 1)];8;
2;conditional;foo < foo;9;
3;statement;return foo_1[foo_2][foo_3];16;
4;conditional;foo < foo;10;
5;conditional;foo_1 > foo_2;11;
6;conditional;foo_1 == 0;12;
7;statement;foo_1[foo_2][foo_3] = (foo_4 - foo_5) * foo_6[foo_7 - 1][foo_8 - 1] + (foo_9 + 1) * foo_10[foo_11 - 1][foo_12];15;
8;statement;foo_1[foo_2][foo_3] = 1;13;
9;exit;;
Edges
0;2;
1;3;4;
2;9;
3;2;5;
4;4;6;
5;7;8;
6;4;
7;4;
8;
