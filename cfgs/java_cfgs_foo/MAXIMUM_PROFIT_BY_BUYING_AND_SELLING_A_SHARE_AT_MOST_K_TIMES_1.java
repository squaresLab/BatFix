Nodes
1;special;;;
2;statement;int[][] profit = new int[foo_1 + 1][foo_2 + 1];14;
3;statement;int i = 0;15;
4;conditional;foo_1 <= foo_2;16;
5;statement;foo_1[foo_2][0] = 0;18;
6;statement;i++;17;
7;statement;int j = 0;19;
8;conditional;foo_1 <= foo_2;20;
9;statement;foo_1[0][foo_2] = 0;22;
10;statement;j++;21;
11;statement;int i = 1;23;
12;conditional;foo_1 <= foo_2;24;
13;statement;int prevDiff = Integer.MIN_VALUE;26;
14;statement;int j = 1;27;
15;conditional;foo_1 < foo_2;28;
16;statement;prevDiff = fun_1(foo_1, foo_2[foo_3 - 1][foo_4 - 1] - foo_5[foo_6 - 1]);30;
17;statement;foo_1[foo_2][foo_3] = fun_1(foo_4[foo_5][foo_6 - 1], foo_7[foo_8] + foo_9);31;
18;statement;j++;29;
19;statement;i++;25;
20;statement;return foo_1[foo_2][foo_3 - 1];34;
21;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;4;
6;8;
7;9;11;
8;10;
9;8;
10;12;
11;13;20;
12;14;
13;15;
14;16;19;
15;17;
16;18;
17;15;
18;12;
19;21;
20;
