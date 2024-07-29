Nodes
1;statement;foo_1 = [[0 for foo_2 in fun_1(foo_3 + 1)] for foo_4 in fun_2(foo_5 + 1)];8;
2;conditional;foo < foo;9;
3;statement;foo_1 = 0;15;
4;conditional;foo < foo;16;
5;statement;return foo_1;19;
6;conditional;foo_1 % 2 == 0;17;
7;statement;foo_1 = foo_2 + foo_3[foo_4][foo_5];18;
8;conditional;foo < foo;10;
9;conditional;foo_1 == 0 or foo_2 == foo_3;11;
10;statement;foo_1[foo_2][foo_3] = foo_4[foo_5 - 1][foo_6 - 1] + foo_7[foo_8 - 1][foo_9];14;
11;statement;foo_1[foo_2][foo_3] = 1;12;
12;exit;;
Edges
0;2;
1;3;8;
2;4;
3;5;6;
4;12;
5;4;7;
6;4;
7;2;9;
8;10;11;
9;8;
10;8;
11;
