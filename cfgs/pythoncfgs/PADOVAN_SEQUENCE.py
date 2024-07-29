Nodes
1;statement;(foo_1, foo_2, foo_3, foo_4) = (1, 1, 1, 1);8;
2;conditional;foo < foo;9;
3;statement;return foo_1;14;
4;statement;foo_1 = foo_2 + foo_3;10;
5;statement;foo_1 = foo_2;11;
6;statement;foo_1 = foo_2;12;
7;statement;foo_1 = foo_2;13;
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
