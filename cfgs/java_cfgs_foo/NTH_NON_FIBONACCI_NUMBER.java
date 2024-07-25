Nodes
1;special;;;
2;statement;int prevPrev = 1;14;
3;statement;int prev = 2;14;
4;statement;int curr = 3;14;
5;conditional;foo_1 > 0;15;
6;statement;prevPrev = foo_1;16;
7;statement;prev = foo_1;17;
8;statement;curr = foo_1 + foo_2;18;
9;statement;n = foo_1 - ((foo_2 - foo_3) - 1);19;
10;statement;n = foo_1 + ((foo_2 - foo_3) - 1);21;
11;statement;return foo_1 + foo_2;22;
12;exit;;;
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
10;12;
11;
