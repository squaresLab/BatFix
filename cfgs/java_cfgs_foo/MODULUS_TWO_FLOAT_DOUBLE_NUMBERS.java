Nodes
1;special;;;
2;conditional;foo_1 < 0;14;
3;statement;a = -foo_1;14;
4;conditional;foo_1 < 0;15;
5;statement;b = -foo_1;15;
6;statement;double mod = foo_1;16;
7;conditional;foo_1 >= foo_2;17;
8;statement;mod = foo_1 - foo_2;17;
9;conditional;foo_1 < 0;18;
10;statement;return -foo_1;18;
11;exit;;;
12;statement;return foo_1;19;
Edges
0;2;
1;3;4;
2;4;
3;5;6;
4;6;
5;7;
6;9;8;
7;7;
8;10;12;
9;11;
10;
11;11;
