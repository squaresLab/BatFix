Nodes
1;conditional;foo_1 == 2 or foo_2 == 3;8;
2;statement;foo_1 = 1;10;
3;conditional;foo_1 > 4;11;
4;statement;return foo_1 * foo_2;14;
5;statement;foo_1 -= 3;12;
6;statement;foo_1 *= 3;13;
7;statement;return foo_1 - 1;9;
8;exit;;
Edges
0;2;7;
1;3;
2;4;5;
3;8;
4;6;
5;3;
6;8;
7;
