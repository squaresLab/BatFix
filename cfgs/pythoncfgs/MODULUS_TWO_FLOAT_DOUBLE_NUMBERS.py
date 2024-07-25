Nodes
1;conditional;foo_1 < 0;8;
2;conditional;foo_1 < 0;10;
3;statement;foo_1 = foo_2;12;
4;conditional;foo_1 >= foo_2;13;
5;conditional;foo_1 < 0;15;
6;statement;return foo_1;17;
7;statement;return -foo_1;16;
8;statement;foo_1 = foo_2 - foo_3;14;
9;statement;foo_1 = -foo_2;11;
10;statement;foo_1 = -foo_2;9;
11;exit;;
Edges
0;2;10;
1;3;9;
2;4;
3;5;8;
4;6;7;
5;11;
6;11;
7;4;
8;3;
9;2;
10;