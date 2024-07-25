Nodes
1;special;;;
2;statement;int res = 0;14;
3;statement;int bin_rem = foo_1;14;
4;statement;int i = 0;15;
5;conditional;foo_1 < foo_2;16;
6;conditional;foo_1[foo_2] > foo_3;18;
7;statement;res++;19;
8;statement;bin_rem = foo_1 - foo_2[foo_3];20;
9;statement;bin_rem -= foo_1[foo_2];22;
10;statement;i++;17;
11;statement;return foo_1;24;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;11;
5;7;9;
6;8;
7;10;
8;10;
9;5;
10;12;
11;
