Nodes
1;special;;;
2;statement;int n = fun_1();14;
3;statement;int m = fun_1();14;
4;conditional;foo_1 == 0;15;
5;statement;return 1;16;
6;exit;;;
7;statement;int[][] dp = new int[foo_1 + 1][foo_2 + 1];18;
8;statement;int i = 0;19;
9;conditional;foo_1 < foo_2;20;
10;statement;int j = foo_1;22;
11;conditional;foo_1 < foo_2;23;
12;conditional;foo_1 == 0;25;
13;conditional;foo_1 == 0;26;
14;conditional;foo_1[foo_2][foo_3] = (fun_1(foo_5) == fun_2(foo_7)) ? 1 : 0;27;
15;statement;1;27;
16;statement;0;27;
17;conditional;fun_1(foo_2) == fun_2(foo_4);29;
18;statement;foo_1[foo_2][foo_3] = foo_4[foo_5][foo_6 - 1] + 1;30;
19;statement;foo_1[foo_2][foo_3] = foo_4[foo_5][foo_6 - 1];33;
20;conditional;fun_1(foo_2) == fun_2(foo_4);36;
21;statement;foo_1[foo_2][foo_3] = foo_4[foo_5][foo_6 - 1] + foo_7[foo_8 - 1][foo_9 - 1];37;
22;statement;foo_1[foo_2][foo_3] = foo_4[foo_5][foo_6 - 1];40;
23;statement;j++;24;
24;statement;i++;21;
25;statement;return foo_1[foo_2 - 1][foo_3 - 1];44;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;
6;8;
7;9;
8;10;25;
9;11;
10;12;24;
11;13;20;
12;14;17;
13;15;16;
14;23;
15;23;
16;18;19;
17;23;
18;23;
19;21;22;
20;23;
21;23;
22;11;
23;9;
24;6;