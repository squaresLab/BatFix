Nodes
1;special;;;
2;statement;int N = fun_1();14;
3;statement;int[][] dp = new int[foo_1 + 1][foo_2 + 1];15;
4;statement;int i = 0;16;
5;conditional;foo_1 <= foo_2;17;
6;statement;int j = 0;18;
7;conditional;foo_1 <= foo_2;19;
8;statement;foo_1[foo_2][foo_3] = 0;20;
9;statement;j++;20;
10;statement;i++;18;
11;statement;int len = 1;21;
12;conditional;foo_1 <= foo_2;22;
13;statement;int i = 0;24;
14;statement;int j = foo_1 - 1;24;
15;conditional;foo_1 < foo_2;25;
16;conditional;foo_1 == 1;27;
17;statement;foo_1[foo_2][foo_3] = 1;27;
18;statement;foo_1[foo_2][foo_3] = 1 + foo_4[foo_5 + 1][foo_6];29;
19;conditional;fun_1(foo_2) == fun_2(foo_4 + 1);30;
20;statement;foo_1[foo_2][foo_3] = fun_1(1 + foo_4[foo_5 + 2][foo_6], foo_7[foo_8][foo_9]);30;
21;statement;int K = foo_1 + 2;31;
22;conditional;foo_1 <= foo_2;32;
23;conditional;fun_1(foo_2) == fun_2(foo_4);33;
24;statement;foo_1[foo_2][foo_3] = fun_1(foo_4[foo_5 + 1][foo_6 - 1] + foo_7[foo_8 + 1][foo_9], foo_10[foo_11][foo_12]);33;
25;statement;K++;33;
26;statement;i++;26;
27;statement;j++;26;
28;statement;len++;23;
29;statement;return foo_1[0][foo_2 - 1];37;
30;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;11;
5;7;
6;8;10;
7;9;
8;7;
9;5;
10;12;
11;13;29;
12;14;
13;15;
14;16;28;
15;17;18;
16;26;
17;19;
18;20;21;
19;21;
20;22;
21;23;26;
22;24;25;
23;25;
24;22;
25;27;
26;15;
27;12;
28;30;
29;