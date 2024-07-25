Nodes
1;conditional;foo_1 == 0 or foo_2 == 1;8;
2;statement;foo_1 = 1;10;
3;statement;foo_1 = 1;10;
4;conditional;foo_1 <= foo_2;11;
5;statement;return foo_1 - 1;14;
6;statement;foo_1 += 1;12;
7;statement;foo_1 = foo_2 * foo_3;13;
8;statement;return foo_1;9;
9;exit;;
Edges
0;2;8;
1;3;
2;4;
3;5;6;
4;9;
5;7;
6;4;
7;9;
8;