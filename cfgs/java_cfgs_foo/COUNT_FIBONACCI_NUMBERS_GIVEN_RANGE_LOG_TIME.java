Nodes
1;special;;;
2;statement;int f1 = 0;14;
3;statement;int f2 = 1;14;
4;statement;int f3 = 1;14;
5;statement;int result = 0;15;
6;conditional;foo_1 <= foo_2;16;
7;conditional;foo_1 >= foo_2;17;
8;statement;result++;17;
9;statement;f1 = foo_1;18;
10;statement;f2 = foo_1;19;
11;statement;f3 = foo_1 + foo_2;20;
12;statement;return foo_1;22;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;12;7;
6;8;9;
7;9;
8;10;
9;11;
10;6;
11;13;
12;
