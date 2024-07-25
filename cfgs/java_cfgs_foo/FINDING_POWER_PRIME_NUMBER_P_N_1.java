Nodes
1;special;;;
2;statement;int ans = 0;14;
3;statement;int temp = foo_1;15;
4;conditional;foo_1 <= foo_2;16;
5;statement;ans += foo_1 / foo_2;17;
6;statement;temp = foo_1 * foo_2;18;
7;statement;return foo_1;20;
8;exit;;;
Edges
0;2;
1;3;
2;4;
3;7;5;
4;6;
5;4;
6;8;
7;
