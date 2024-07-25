Nodes
1;statement;foo_1 = 1;8;
2;statement;foo_1 = 1;9;
3;conditional;foo_1 < foo_2;10;
4;statement;foo_1 = 0;13;
5;conditional;foo_1 <= foo_2;14;
6;statement;return foo_1;18;
7;statement;foo_1 += 1;15;
8;statement;foo_1 = foo_2 * foo_3;16;
9;statement;foo_1 += 1;17;
10;statement;foo_1 = foo_2 * foo_3;11;
11;statement;foo_1 += 1;12;
12;exit;;
Edges
0;2;
1;3;
2;4;10;
3;5;
4;6;7;
5;12;
6;8;
7;9;
8;5;
9;11;
10;3;
11;