Nodes
1;conditional;foo_1 < 2;8;
2;statement;foo_1 = 0;10;
3;statement;foo_1 = 2;11;
4;statement;foo_1 = foo_2 + foo_3;12;
5;conditional;foo_1 <= foo_2;13;
6;statement;return foo_1;20;
7;statement;foo_1 = 4 * foo_2 + foo_3;14;
8;conditional;foo_1 > foo_2;15;
9;statement;foo_1 = foo_2;17;
10;statement;foo_1 = foo_2;18;
11;statement;foo_1 = foo_2 + foo_3;19;
12;statement;return 0;9;
13;exit;;
Edges
0;2;12;
1;3;
2;4;
3;5;
4;6;7;
5;13;
6;8;
7;6;9;
8;10;
9;11;
10;5;
11;13;
12;
