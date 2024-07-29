Nodes
1;statement;foo_1 = foo_2 - foo_3;8;
2;statement;foo_1 = foo_2 - foo_3;9;
3;statement;foo_1 = foo_2 - foo_3;10;
4;conditional;foo_1 * foo_2 > 0;11;
5;conditional;foo_1 * foo_2 > 0;13;
6;statement;return foo_1;16;
7;statement;return;14;
8;statement;return foo_1;12;
9;exit;;
Edges
0;2;
1;3;
2;4;
3;5;8;
4;6;7;
5;9;
6;9;
7;9;
8;
