Nodes
1;special;;;
2;statement;int ans = 0;14;
3;statement;int y = foo_1 / foo_2;15;
4;statement;int x = foo_1 % foo_2;16;
5;statement;ans = (((foo_1 * (foo_2 - 1)) / 2) * foo_3) + ((foo_4 * (foo_5 + 1)) / 2);17;
6;statement;return foo_1;18;
7;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;
