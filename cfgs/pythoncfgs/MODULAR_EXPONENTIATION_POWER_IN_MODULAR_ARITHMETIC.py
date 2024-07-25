Nodes
1;statement;foo_1 = 1;8;
2;statement;foo_1 = foo_2 % foo_3;9;
3;conditional;foo_1 > 0;10;
4;statement;return foo_1;15;
5;conditional;foo_1 & 1 == 1;11;
6;statement;foo_1 = foo_2 >> 1;13;
7;statement;foo_1 = foo_2 * foo_3 % foo_4;14;
8;statement;foo_1 = foo_2 * foo_3 % foo_4;12;
9;exit;;
Edges
0;2;
1;3;
2;4;5;
3;9;
4;6;8;
5;7;
6;3;
7;6;
8;