Nodes
1;special;;;
2;statement;int x = foo_1 - foo_2;14;
3;statement;int y = foo_1 - foo_2;15;
4;statement;int z = foo_1 - foo_2;16;
5;conditional;(foo_1 * foo_2) > 0;17;
6;statement;return foo_1;17;
7;exit;;;
8;conditional;(foo_1 * foo_2) > 0;18;
9;statement;return foo_1;18;
10;statement;return foo_1;19;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;8;
5;7;
6;
7;9;10;
8;7;
9;7;
