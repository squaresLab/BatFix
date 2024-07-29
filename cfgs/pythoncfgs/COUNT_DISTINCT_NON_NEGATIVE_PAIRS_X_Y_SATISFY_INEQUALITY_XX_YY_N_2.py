Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;conditional;foo_1 * foo_2 < foo_3;10;
4;statement;return foo_1;16;
5;statement;foo_1 = 0;11;
6;conditional;foo_1 * foo_2 + foo_3 * foo_4 < foo_5;12;
7;statement;foo_1 = foo_2 + 1;15;
8;statement;foo_1 = foo_2 + 1;13;
9;statement;foo_1 = foo_2 + 1;14;
10;exit;;
Edges
0;2;
1;3;
2;4;5;
3;10;
4;6;
5;7;8;
6;3;
7;9;
8;6;
9;
