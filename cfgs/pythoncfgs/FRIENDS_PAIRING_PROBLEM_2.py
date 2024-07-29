Nodes
1;statement;(foo_1, foo_2, foo_3) = (1, 2, 0);8;
2;conditional;foo_1 <= 2;9;
3;conditional;foo < foo;11;
4;statement;return foo_1;15;
5;statement;foo_1 = foo_2 + (foo_3 - 1) * foo_4;12;
6;statement;foo_1 = foo_2;13;
7;statement;foo_1 = foo_2;14;
8;statement;return foo_1;10;
9;exit;;
Edges
0;2;
1;3;8;
2;4;5;
3;9;
4;6;
5;7;
6;3;
7;9;
8;
