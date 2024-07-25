Nodes
1;statement;(foo_1, foo_2, foo_3) = (0, 1, 1);8;
2;statement;foo_1 = 0;9;
3;conditional;foo_1 <= foo_2;10;
4;statement;return foo_1;16;
5;conditional;foo_1 >= foo_2;11;
6;statement;foo_1 = foo_2;13;
7;statement;foo_1 = foo_2;14;
8;statement;foo_1 = foo_2 + foo_3;15;
9;statement;foo_1 += 1;12;
10;exit;;
Edges
0;2;
1;3;
2;4;5;
3;10;
4;6;9;
5;7;
6;8;
7;3;
8;6;
9;