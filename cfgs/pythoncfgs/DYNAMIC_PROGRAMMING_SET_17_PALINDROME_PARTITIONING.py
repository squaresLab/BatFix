Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = [[0 for foo_2 in fun_1(foo_3)] for foo_4 in fun_2(foo_5)];9;
3;statement;foo_1 = [[false for foo_2 in fun_1(foo_3)] for foo_4 in fun_2(foo_5)];10;
4;statement;foo_1 = 0;11;
5;statement;foo_1 = 0;12;
6;statement;foo_1 = 0;13;
7;conditional;fun_1(foo_1);14;
8;conditional;foo < foo;17;
9;statement;return foo_1[0][foo_2 - 1];30;
10;conditional;fun_1(foo_1 - foo_2 + 1);18;
11;statement;foo_1 = foo_2 + foo_3 - 1;19;
12;conditional;foo_1 == 2;20;
13;statement;foo_1[foo_2][foo_3] = foo_4[foo_5] == foo_6[foo_7] and foo_8[foo_9 + 1][foo_10 - 1];23;
14;conditional;foo_1[foo_2][foo_3] == true;24;
15;statement;foo_1[foo_2][foo_3] = 100000000;27;
16;conditional;foo < foo;28;
17;statement;foo_1[foo_2][foo_3] = fun_1(foo_4[foo_5][foo_6], foo_7[foo_8][foo_9] + foo_10[foo_11 + 1][foo_12] + 1);29;
18;statement;foo_1[foo_2][foo_3] = 0;25;
19;statement;foo_1[foo_2][foo_3] = foo_4[foo_5] == foo_6[foo_7];21;
20;statement;foo_1[foo_2][foo_3] = true;15;
21;statement;foo_1[foo_2][foo_3] = 0;16;
22;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;20;
7;9;10;
8;22;
9;8;11;
10;12;
11;13;19;
12;14;
13;15;18;
14;16;
15;10;17;
16;16;
17;10;
18;14;
19;21;
20;7;
21;