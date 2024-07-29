Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 1;9;
3;conditional;foo_1 < foo_2;10;
4;statement;foo_1 -= 1;13;
5;conditional;foo_1 == foo_2;14;
6;statement;return -1;16;
7;statement;return foo_1;15;
8;statement;foo_1 += foo_2 * foo_3;11;
9;statement;foo_1 += 1;12;
10;exit;;
Edges
0;2;
1;3;
2;4;8;
3;5;
4;6;7;
5;10;
6;10;
7;9;
8;3;
9;
