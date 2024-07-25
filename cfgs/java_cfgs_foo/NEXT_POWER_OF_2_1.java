Nodes
1;special;;;
2;statement;int p = 1;14;
3;conditional;(foo_1 > 0) && ((foo_2 & (foo_3 - 1)) == 0);15;
4;statement;return foo_1;15;
5;exit;;;
6;conditional;foo_1 < foo_2;16;
7;statement;p <<= 1;16;
8;statement;return foo_1;17;
Edges
0;2;
1;3;
2;4;6;
3;5;
4;
5;8;7;
6;6;
7;5;
