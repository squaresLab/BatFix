Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = 0;10;
4;conditional;foo_1 * foo_2 < foo_3;11;
5;conditional;foo_1 != 0;13;
6;statement;return foo_1;18;
7;statement;foo_1 = foo_2 + foo_3;14;
8;statement;foo_1 = foo_2 + 1;15;
9;conditional;foo_1 != 0 and foo_2 * foo_3 + (foo_4 - 1) * (foo_5 - 1) >= foo_6;16;
10;statement;foo_1 = foo_2 - 1;17;
11;statement;foo_1 = foo_2 + 1;12;
12;exit;;
Edges
0;2;
1;3;
2;4;
3;5;11;
4;6;7;
5;12;
6;8;
7;9;
8;5;10;
9;9;
10;4;
11;