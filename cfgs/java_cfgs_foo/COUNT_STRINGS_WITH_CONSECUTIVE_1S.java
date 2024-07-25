Nodes
1;special;;;
2;statement;int[] a = new int[foo_1];12;
3;statement;int[] b = new int[foo_1];12;
4;statement;foo_1[0] = foo_2[0] = 1;13;
5;statement;int i = 1;14;
6;conditional;foo_1 < foo_2;15;
7;statement;foo_1[foo_2] = foo_3[foo_4 - 1] + foo_5[foo_6 - 1];17;
8;statement;foo_1[foo_2] = foo_3[foo_4 - 1];18;
9;statement;i++;16;
10;statement;from = 2 ^ foo_1;20;
11;statement;return ((1 << foo_1) - foo_2[foo_3 - 1]) - foo_4[foo_5 - 1];20;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;10;
6;8;
7;9;
8;6;
9;11;
10;12;
11;
