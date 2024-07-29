Nodes
1;statement;foo_1 = 1;8;
2;statement;foo_1 = 2;9;
3;statement;foo_1 = 3;10;
4;conditional;foo_1 > 0;11;
5;statement;foo_1 = foo_2 + (foo_3 - foo_4 - 1);16;
6;statement;return foo_1 + foo_2;17;
7;statement;foo_1 = foo_2;12;
8;statement;foo_1 = foo_2;13;
9;statement;foo_1 = foo_2 + foo_3;14;
10;statement;foo_1 = foo_2 - (foo_3 - foo_4 - 1);15;
11;exit;;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;11;
6;8;
7;9;
8;10;
9;4;
10;
