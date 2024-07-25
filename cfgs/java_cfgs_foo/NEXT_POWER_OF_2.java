Nodes
1;special;;;
2;statement;int count = 0;14;
3;conditional;(foo_1 > 0) && ((foo_2 & (foo_3 - 1)) == 0);15;
4;statement;return foo_1;15;
5;exit;;;
6;conditional;foo_1 != 0;16;
7;statement;n >>= 1;17;
8;statement;count += 1;18;
9;statement;return 1 << foo_1;20;
Edges
0;2;
1;3;
2;4;6;
3;5;
4;
5;9;7;
6;8;
7;6;
8;5;
