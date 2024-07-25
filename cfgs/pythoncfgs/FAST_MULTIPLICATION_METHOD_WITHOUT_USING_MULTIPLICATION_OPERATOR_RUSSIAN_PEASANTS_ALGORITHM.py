Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo_1 > 0;9;
3;statement;return foo_1;14;
4;conditional;foo_1 & 1;10;
5;statement;foo_1 = foo_2 << 1;12;
6;statement;foo_1 = foo_2 >> 1;13;
7;statement;foo_1 = foo_2 + foo_3;11;
8;exit;;
Edges
0;2;
1;3;4;
2;8;
3;5;7;
4;6;
5;2;
6;5;
7;