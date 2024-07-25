Nodes
1;conditional;foo_1 == 0;8;
2;conditional;foo_1 < 0;10;
3;conditional;foo_1 < 0;12;
4;statement;foo_1 = 1;14;
5;statement;foo_1 = 0;15;
6;conditional;foo_1 <= foo_2;16;
7;statement;return foo_1 - (foo_2 - foo_3);19;
8;statement;foo_1 = foo_2 * foo_3;17;
9;statement;foo_1 += 1;18;
10;statement;foo_1 = -foo_2;13;
11;statement;foo_1 = -foo_2;11;
12;statement;return false;9;
13;exit;;
Edges
0;2;12;
1;3;11;
2;4;10;
3;5;
4;6;
5;7;8;
6;13;
7;9;
8;6;
9;4;
10;3;
11;13;
12;