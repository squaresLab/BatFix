Nodes
1;special;;;
2;conditional;foo_1 == 1;14;
3;statement;return foo_1 == 1;14;
4;exit;;;
5;statement;int pow = 1;15;
6;conditional;foo_1 < foo_2;16;
7;statement;pow = foo_1 * foo_2;16;
8;statement;return foo_1 == foo_2;17;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;8;7;
6;6;
7;4;
