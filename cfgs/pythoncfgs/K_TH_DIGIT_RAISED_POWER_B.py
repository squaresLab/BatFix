Nodes
1;statement;foo_1 = foo_2 ** foo_3;8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 > 0 and foo_2 < foo_3;10;
4;statement;foo_1 = foo_2 % 10;11;
5;statement;foo_1 = foo_2 + 1;12;
6;conditional;foo_1 == foo_2;13;
7;statement;foo_1 = foo_2 / 10;15;
8;statement;return foo_1;14;
9;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;8;
6;3;
7;9;
8;
