Nodes
1;conditional;foo_1 == 1;8;
2;statement;foo_1 = 1;10;
3;statement;foo_1 = 1;11;
4;conditional;foo < foo;12;
5;statement;foo_1 = foo_2 + foo_3;17;
6;statement;return foo_1 * foo_2;18;
7;statement;foo_1 = foo_2;13;
8;statement;foo_1 = foo_2;14;
9;statement;foo_1 = foo_2 + foo_3;15;
10;statement;foo_1 = foo_2;16;
11;statement;return 4;9;
12;exit;;
Edges
0;2;11;
1;3;
2;4;
3;5;7;
4;6;
5;12;
6;8;
7;9;
8;10;
9;4;
10;12;
11;