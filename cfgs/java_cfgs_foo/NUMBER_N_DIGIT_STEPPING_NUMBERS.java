Nodes
1;special;;;
2;statement;int[][] dp = new int[foo_1 + 1][10];14;
3;conditional;foo_1 == 1;15;
4;statement;return 10;15;
5;exit;;;
6;statement;int j = 0;16;
7;conditional;foo_1 <= 9;17;
8;statement;foo_1[1][foo_2] = 1;18;
9;statement;j++;18;
10;statement;int i = 2;19;
11;conditional;foo_1 <= foo_2;20;
12;statement;int j = 0;22;
13;conditional;foo_1 <= 9;23;
14;conditional;foo_1 == 0;25;
15;statement;foo_1[foo_2][foo_3] = foo_4[foo_5 - 1][foo_6 + 1];25;
16;conditional;foo_1 == 9;26;
17;statement;foo_1[foo_2][foo_3] = foo_4[foo_5 - 1][foo_6 - 1];26;
18;statement;foo_1[foo_2][foo_3] = foo_4[foo_5 - 1][foo_6 - 1] + foo_7[foo_8 - 1][foo_9 + 1];27;
19;statement;j++;24;
20;statement;i++;21;
21;statement;long sum = 0;30;
22;statement;int j = 1;31;
23;conditional;foo_1 <= 9;32;
24;statement;sum += foo_1[foo_2][foo_3];33;
25;statement;j++;33;
26;statement;return foo_1;34;
Edges
0;2;
1;3;
2;4;6;
3;5;
4;
5;7;
6;8;10;
7;9;
8;7;
9;11;
10;12;21;
11;13;
12;14;20;
13;15;16;
14;19;
15;17;18;
16;19;
17;19;
18;13;
19;11;
20;22;
21;23;
22;24;26;
23;25;
24;23;
25;5;
