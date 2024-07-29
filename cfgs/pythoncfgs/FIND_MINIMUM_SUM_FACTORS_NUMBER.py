Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 2;9;
3;conditional;foo_1 * foo_2 <= foo_3;10;
4;statement;foo_1 += foo_2;15;
5;statement;return foo_1;16;
6;conditional;foo_1 % foo_2 == 0;11;
7;statement;foo_1 += 1;14;
8;statement;foo_1 += foo_2;12;
9;statement;foo_1 /= foo_2;13;
10;exit;;
Edges
0;2;
1;3;
2;4;6;
3;5;
4;10;
5;7;8;
6;3;
7;9;
8;6;
9;
