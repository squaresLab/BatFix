Nodes
1;special;;;
2;statement;int res = 0;14;
3;conditional;foo_1 > 0;15;
4;conditional;(foo_1 & 1) != 0;16;
5;statement;res = foo_1 + foo_2;16;
6;statement;a = foo_1 << 1;17;
7;statement;b = foo_1 >> 1;18;
8;statement;return foo_1;20;
9;exit;;;
Edges
0;2;
1;3;
2;8;4;
3;5;6;
4;6;
5;7;
6;3;
7;9;
8;
