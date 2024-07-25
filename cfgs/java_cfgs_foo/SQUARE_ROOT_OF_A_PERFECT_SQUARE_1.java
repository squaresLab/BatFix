Nodes
1;special;;;
2;statement;int x = foo_1;14;
3;statement;int y = 1;15;
4;conditional;foo_1 > foo_2;16;
5;statement;x = (foo_1 + foo_2) / 2;17;
6;statement;y = foo_1 / foo_2;18;
7;statement;return ((long) (foo_1));20;
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
