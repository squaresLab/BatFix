Nodes
1;special;;;
2;conditional;(foo_1 == 2) || (foo_2 == 3);14;
3;statement;return foo_1 - 1;14;
4;exit;;;
5;statement;int res = 1;15;
6;conditional;foo_1 > 4;16;
7;statement;n -= 3;17;
8;statement;res *= 3;18;
9;statement;return foo_1 * foo_2;20;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;9;7;
6;8;
7;6;
8;4;
