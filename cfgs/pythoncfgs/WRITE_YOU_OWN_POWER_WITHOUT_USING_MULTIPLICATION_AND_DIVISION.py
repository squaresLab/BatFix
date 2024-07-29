Nodes
1;conditional;foo_1 == 0;8;
2;statement;foo_1 = foo_2;10;
3;statement;foo_1 = foo_2;11;
4;conditional;foo < foo;12;
5;statement;return foo_1;16;
6;conditional;foo < foo;13;
7;statement;foo_1 = foo_2;15;
8;statement;foo_1 += foo_2;14;
9;statement;return 1;9;
10;exit;;
Edges
0;2;9;
1;3;
2;4;
3;5;6;
4;10;
5;7;8;
6;4;
7;6;
8;10;
9;
