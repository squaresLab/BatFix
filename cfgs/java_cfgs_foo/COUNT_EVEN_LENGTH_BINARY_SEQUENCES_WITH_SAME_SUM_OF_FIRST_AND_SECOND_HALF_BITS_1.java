Nodes
1;special;;;
2;statement;int nCr = 1;14;
3;statement;int res = 1;14;
4;statement;int r = 1;15;
5;conditional;foo_1 <= foo_2;16;
6;statement;nCr = (foo_1 * ((foo_2 + 1) - foo_3)) / foo_4;18;
7;statement;res += foo_1 * foo_2;19;
8;statement;r++;17;
9;statement;return foo_1;21;
10;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;9;
5;7;
6;8;
7;5;
8;10;
9;
