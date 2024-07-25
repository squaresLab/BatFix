Nodes
1;special;;;
2;statement;int count = 0;14;
3;statement;int i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;statement;int j = foo_1 + 1;18;
6;conditional;foo_1 < foo_2;19;
7;conditional;(foo_1[foo_2] & foo_3[foo_4]) == 0;20;
8;statement;count += 2;20;
9;statement;j++;20;
10;statement;i++;17;
11;statement;return foo_1;22;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;11;
4;6;
5;7;10;
6;8;9;
7;9;
8;6;
9;4;
10;12;
11;
