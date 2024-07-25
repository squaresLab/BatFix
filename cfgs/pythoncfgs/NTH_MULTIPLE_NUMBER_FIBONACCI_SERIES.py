Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 1;9;
3;statement;foo_1 = 2;10;
4;conditional;foo_1 != 0;11;
5;statement;return;18;
6;statement;foo_1 = foo_2 + foo_3;12;
7;statement;foo_1 = foo_2;13;
8;statement;foo_1 = foo_2;14;
9;conditional;foo_1 % foo_2 == 0;15;
10;statement;foo_1 += 1;17;
11;statement;return foo_1 * foo_2;16;
12;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;12;
5;7;
6;8;
7;9;
8;10;11;
9;4;
10;12;
11;