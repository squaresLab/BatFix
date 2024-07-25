Nodes
1;special;;;
2;statement;int index = foo_1;14;
3;statement;int left = 0;15;
4;statement;int right = foo_1 - 1;15;
5;conditional;foo_1 <= foo_2;16;
6;statement;int mid = (foo_1 + foo_2) / 2;17;
7;conditional;foo_1[foo_2] == foo_3[foo_4];18;
8;statement;left = foo_1 + 1;18;
9;statement;index = foo_1;20;
10;statement;right = foo_1 - 1;21;
11;statement;return foo_1;24;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;11;6;
5;7;
6;8;9;
7;5;
8;10;
9;5;
10;12;
11;
