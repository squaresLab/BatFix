Nodes
1;special;;;
2;statement;int[] mpis = new int[foo_1];14;
3;statement;int max = Integer.MIN_VALUE;15;
4;statement;int i = 0;16;
5;conditional;foo_1 < foo_2;17;
6;statement;foo_1[foo_2] = foo_3[foo_4];18;
7;statement;i++;18;
8;statement;int i = 1;19;
9;conditional;foo_1 < foo_2;20;
10;statement;int j = 0;21;
11;conditional;foo_1 < foo_2;22;
12;conditional;(foo_1[foo_2] > foo_3[foo_4]) && (foo_5[foo_6] < (foo_7[foo_8] * foo_9[foo_10]));23;
13;statement;foo_1[foo_2] = foo_3[foo_4] * foo_5[foo_6];23;
14;statement;j++;23;
15;statement;i++;21;
16;statement;int k = 0;24;
17;conditional;foo_1 < foo_2.length;25;
18;conditional;foo_1[foo_2] > foo_3;27;
19;statement;max = foo_1[foo_2];28;
20;statement;k++;26;
21;statement;return foo_1;31;
22;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;8;
5;7;
6;5;
7;9;
8;10;16;
9;11;
10;12;15;
11;13;14;
12;14;
13;11;
14;9;
15;17;
16;18;21;
17;19;20;
18;20;
19;17;
20;22;
21;