Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = [[0 for foo_2 in fun_1(foo_3 + 1)] for foo_4 in fun_2(foo_5 + 1)];9;
3;conditional;foo < foo;10;
4;statement;return foo_1[0][foo_2 - 1];25;
5;statement;foo_1 = 0;11;
6;statement;foo_1 = foo_2 - 1;12;
7;conditional;foo_1 < foo_2;13;
8;conditional;foo_1 == 1;14;
9;statement;foo_1[foo_2][foo_3] = 1 + foo_4[foo_5 + 1][foo_6];17;
10;conditional;foo_1[foo_2] == foo_3[foo_4 + 1];18;
11;conditional;foo < foo;20;
12;statement;foo_1 += 1;23;
13;statement;foo_1 += 1;24;
14;conditional;foo_1[foo_2] == foo_3[foo_4];21;
15;statement;foo_1[foo_2][foo_3] = fun_1(foo_4[foo_5 + 1][foo_6 - 1] + foo_7[foo_8 + 1][foo_9], foo_10[foo_11][foo_12]);22;
16;statement;foo_1[foo_2][foo_3] = fun_1(1 + foo_4[foo_5 + 2][foo_6], foo_7[foo_8][foo_9]);19;
17;statement;foo_1[foo_2][foo_3] = 1;15;
18;exit;;
Edges
0;2;
1;3;
2;4;5;
3;18;
4;6;
5;7;
6;3;8;
7;9;17;
8;10;
9;11;16;
10;12;14;
11;13;
12;7;
13;11;15;
14;11;
15;11;
16;12;
17;
