Nodes
1;special;;;
2;statement;int i = 0;14;
3;conditional;foo_1 < foo_2;15;
4;conditional;(foo_1[foo_2] & 1) != 0;16;
5;statement;foo_1[foo_2] *= -1;16;
6;statement;i++;16;
7;statement;fun_1(foo_1);17;
8;statement;int i = 0;18;
9;conditional;foo_1 < foo_2;19;
10;conditional;(foo_1[foo_2] & 1) != 0;20;
11;statement;foo_1[foo_2] *= -1;20;
12;statement;i++;20;
13;exit;;;
Edges
0;2;
1;3;
2;4;7;
3;5;6;
4;6;
5;3;
6;8;
7;9;
8;10;13;
9;11;12;
10;12;
11;9;
12;
