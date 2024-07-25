Nodes
1;special;;;
2;statement;int res = 0;14;
3;statement;int x = 0;15;
4;conditional;(foo_1 * foo_2) < foo_3;16;
5;statement;int y = 0;17;
6;conditional;((foo_1 * foo_2) + (foo_3 * foo_4)) < foo_5;18;
7;statement;res++;19;
8;statement;y++;19;
9;statement;x++;17;
10;statement;return foo_1;20;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;10;
4;6;
5;7;9;
6;8;
7;6;
8;4;
9;11;
10;
