Nodes
1;special;;;
2;statement;int n = fun_1();10;
3;statement;int[][] dp = new int[foo_1 + 1][10];11;
4;statement;int[] arr = new int[foo_1 + 1];12;
5;statement;int i = 1;13;
6;conditional;foo_1 <= foo_2;14;
7;statement;foo_1[foo_2] = ((int) (fun_1(foo_4 - 1) - '0'));16;
8;statement;i++;15;
9;statement;int i = 1;17;
10;conditional;foo_1 <= foo_2;18;
11;statement;foo_1[foo_2][foo_3[foo_4] % 8] = 1;20;
12;statement;int j = 0;21;
13;conditional;foo_1 < 8;22;
14;conditional;foo_1[foo_2 - 1][foo_3] > foo_4[foo_5][((foo_6 * 10) + foo_7[foo_8]) % 8];24;
15;statement;foo_1[foo_2][((foo_3 * 10) + foo_4[foo_5]) % 8] = foo_6[foo_7 - 1][foo_8];25;
16;conditional;foo_1[foo_2 - 1][foo_3] > foo_4[foo_5][foo_6];26;
17;statement;foo_1[foo_2][foo_3] = foo_4[foo_5 - 1][foo_6];27;
18;statement;j++;23;
19;statement;i++;19;
20;statement;int i = 1;30;
21;conditional;foo_1 <= foo_2;31;
22;conditional;foo_1[foo_2][0] == 1;33;
23;statement;return true;34;
24;exit;;;
25;statement;i++;32;
26;statement;return false;36;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;9;
6;8;
7;6;
8;10;
9;11;20;
10;12;
11;13;
12;14;19;
13;15;16;
14;16;
15;17;18;
16;18;
17;13;
18;10;
19;21;
20;22;26;
21;23;25;
22;24;
23;
24;21;
25;24;
