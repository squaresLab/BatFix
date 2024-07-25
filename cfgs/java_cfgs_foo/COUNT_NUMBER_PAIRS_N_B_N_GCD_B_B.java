Nodes
1;special;;;
2;statement;int k = foo_1;14;
3;statement;int imin = 1;15;
4;statement;int ans = 0;16;
5;conditional;foo_1 <= foo_2;17;
6;statement;int imax = foo_1 / foo_2;18;
7;statement;ans += foo_1 * ((foo_2 - foo_3) + 1);19;
8;statement;imin = foo_1 + 1;20;
9;statement;k = foo_1 / foo_2;21;
10;statement;return foo_1;23;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;10;6;
5;7;
6;8;
7;9;
8;5;
9;11;
10;
