Nodes
1;statement;foo_1 = 0;10;
2;conditional;foo < foo;11;
3;statement;return foo_1;16;
4;statement;foo_1 = foo_2;12;
5;conditional;foo_1 * foo_2 <= foo_3;13;
6;statement;foo_1 += 1;14;
7;statement;foo_1 += 1;15;
8;exit;;
Edges
0;2;
1;3;4;
2;8;
3;5;
4;2;6;
5;7;
6;5;
7;
