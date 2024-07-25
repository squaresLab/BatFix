Nodes
1;special;;;
2;statement;int res = 1;14;
3;statement;x = foo_1 % foo_2;15;
4;conditional;foo_1 > 0;16;
5;conditional;(foo_1 & 1) == 1;17;
6;statement;res = (foo_1 * foo_2) % foo_3;17;
7;statement;y = foo_1 >> 1;18;
8;statement;x = (foo_1 * foo_2) % foo_3;19;
9;statement;return foo_1;21;
10;exit;;;
Edges
0;2;
1;3;
2;4;
3;9;5;
4;6;7;
5;7;
6;8;
7;4;
8;10;
9;
