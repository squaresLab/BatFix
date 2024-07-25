Nodes
1;special;;;
2;conditional;foo_1 >= foo_2;14;
3;statement;return 0;14;
4;exit;;;
5;statement;int result = 1;15;
6;statement;int i = 1;16;
7;conditional;foo_1 <= foo_2;17;
8;statement;result = (foo_1 * foo_2) % foo_3;18;
9;statement;i++;18;
10;statement;return foo_1;19;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;7;
6;8;10;
7;9;
8;7;
9;4;
