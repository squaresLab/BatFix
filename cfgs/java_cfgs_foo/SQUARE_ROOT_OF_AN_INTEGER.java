Nodes
1;special;;;
2;conditional;(foo_1 == 0) || (foo_2 == 1);14;
3;statement;return foo_1;14;
4;exit;;;
5;statement;int i = 1;15;
6;statement;int result = 1;15;
7;conditional;foo_1 <= foo_2;16;
8;statement;i++;17;
9;statement;result = foo_1 * foo_2;18;
10;statement;return foo_1 - 1;20;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;7;
6;10;8;
7;9;
8;7;
9;4;
