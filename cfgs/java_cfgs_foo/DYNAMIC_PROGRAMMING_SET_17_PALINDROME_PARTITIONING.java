Nodes
1;special;;;
2;statement;int n = fun_1();14;
3;statement;int[][] C = new int[foo_1][foo_2];15;
4;statement;boolean[][] P = new boolean[foo_1][foo_2];16;
5;statement;int i;17;
6;statement;int j;17;
7;statement;int k;17;
8;statement;int L;17;
9;statement;i = 0;18;
10;conditional;foo_1 < foo_2;19;
11;statement;foo_1[foo_2][foo_3] = true;21;
12;statement;foo_1[foo_2][foo_3] = 0;22;
13;statement;i++;20;
14;statement;L = 2;24;
15;conditional;foo_1 <= foo_2;25;
16;statement;i = 0;27;
17;conditional;foo_1 < ((foo_2 - foo_3) + 1);28;
18;statement;j = (foo_1 + foo_2) - 1;30;
19;conditional;foo_1 == 2;31;
20;statement;foo_1[foo_2][foo_3] = fun_1(foo_5) == fun_2(foo_7);31;
21;statement;foo_1[foo_2][foo_3] = (fun_1(foo_5) == fun_2(foo_7)) && foo_8[foo_9 + 1][foo_10 - 1];32;
22;conditional;foo_1[foo_2][foo_3] == true;33;
23;statement;foo_1[foo_2][foo_3] = 0;33;
24;statement;foo_1[foo_2][foo_3] = Integer.MAX_VALUE;35;
25;statement;k = foo_1;36;
26;conditional;foo_1 <= (foo_2 - 1);37;
27;statement;foo_1[foo_2][foo_3] = fun_1(foo_4[foo_5][foo_6], (foo_7[foo_8][foo_9] + foo_10[foo_11 + 1][foo_12]) + 1);38;
28;statement;k++;38;
29;statement;i++;29;
30;statement;L++;26;
31;statement;return foo_1[0][foo_2 - 1];42;
32;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;
7;9;
8;10;
9;11;14;
10;12;
11;13;
12;10;
13;15;
14;16;31;
15;17;
16;18;30;
17;19;
18;20;21;
19;22;
20;22;
21;23;24;
22;29;
23;25;
24;26;
25;27;29;
26;28;
27;26;
28;17;
29;15;
30;32;
31;
