Nodes
1;special;;;
2;conditional;(foo_1 == 0) || (foo_2 == 1);14;
3;statement;return foo_1;14;
4;exit;;;
5;statement;int f1 = 0;15;
6;statement;int f2 = 1;15;
7;statement;int f3 = 1;15;
8;conditional;foo_1 <= foo_2;16;
9;statement;f1 = foo_1;17;
10;statement;f2 = foo_1;18;
11;statement;f3 = foo_1 + foo_2;19;
12;statement;return foo_1;21;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;7;
6;8;
7;12;9;
8;10;
9;11;
10;8;
11;4;
