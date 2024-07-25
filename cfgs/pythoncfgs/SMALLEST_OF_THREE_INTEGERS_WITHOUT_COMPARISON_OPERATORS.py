Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo_1 and foo_2 and foo_3;9;
3;statement;return foo_1;14;
4;statement;foo_1 = foo_2 - 1;10;
5;statement;foo_1 = foo_2 - 1;11;
6;statement;foo_1 = foo_2 - 1;12;
7;statement;foo_1 = foo_2 + 1;13;
8;exit;;
Edges
0;2;
1;3;4;
2;8;
3;5;
4;6;
5;7;
6;2;
7;