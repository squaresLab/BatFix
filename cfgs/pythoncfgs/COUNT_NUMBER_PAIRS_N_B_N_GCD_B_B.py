Nodes
1;statement;foo_1 = foo_2;8;
2;statement;foo_1 = 1;9;
3;statement;foo_1 = 0;10;
4;conditional;foo_1 <= foo_2;11;
5;statement;return foo_1;16;
6;statement;foo_1 = foo_2 / foo_3;12;
7;statement;foo_1 += foo_2 * (foo_3 - foo_4 + 1);13;
8;statement;foo_1 = foo_2 + 1;14;
9;statement;foo_1 = foo_2 / foo_3;15;
10;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;10;
5;7;
6;8;
7;9;
8;4;
9;