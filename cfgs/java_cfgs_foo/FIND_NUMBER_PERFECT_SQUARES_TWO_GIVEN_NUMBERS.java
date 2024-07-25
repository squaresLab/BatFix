Nodes
1;special;;;
2;statement;int cnt = 0;14;
3;statement;int i = foo_1;15;
4;conditional;foo_1 <= foo_2;16;
5;statement;int j = 1;17;
6;conditional;(foo_1 * foo_2) <= foo_3;18;
7;conditional;(foo_1 * foo_2) == foo_3;19;
8;statement;cnt++;19;
9;statement;j++;19;
10;statement;i++;17;
11;statement;return foo_1;20;
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
