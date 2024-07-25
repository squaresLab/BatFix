Nodes
1;special;;;
2;statement;int[] a = new int[foo_1];14;
3;statement;int[] b = new int[foo_1];15;
4;statement;foo_1[0] = foo_2[0] = 1;16;
5;statement;int i = 1;17;
6;conditional;foo_1 < foo_2;18;
7;statement;foo_1[foo_2] = foo_3[foo_4 - 1] + foo_5[foo_6 - 1];20;
8;statement;foo_1[foo_2] = foo_3[foo_4 - 1];21;
9;statement;i++;19;
10;statement;return foo_1[foo_2 - 1] + foo_3[foo_4 - 1];23;
11;exit;;;
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
10;
