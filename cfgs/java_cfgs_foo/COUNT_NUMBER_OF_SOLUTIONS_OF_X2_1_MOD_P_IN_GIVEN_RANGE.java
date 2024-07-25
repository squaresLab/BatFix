Nodes
1;special;;;
2;statement;int ans = 0;14;
3;statement;int x = 1;15;
4;conditional;foo_1 < foo_2;16;
5;conditional;((foo_1 * foo_2) % foo_3) == 1;18;
6;statement;int last = foo_1 + (foo_2 * (foo_3 / foo_4));19;
7;conditional;foo_1 > foo_2;20;
8;statement;last -= foo_1;20;
9;statement;ans += ((foo_1 - foo_2) / foo_3) + 1;21;
10;statement;x++;17;
11;statement;return foo_1;24;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;11;
4;6;10;
5;7;
6;8;9;
7;9;
8;10;
9;4;
10;12;
11;
