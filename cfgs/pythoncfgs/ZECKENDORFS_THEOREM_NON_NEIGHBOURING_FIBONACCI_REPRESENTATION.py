Nodes
1;conditional;foo_1 == 0 or foo_2 == 1;8;
2;statement;(foo_1, foo_2, foo_3) = (0, 1, 1);10;
3;conditional;foo_1 <= foo_2;11;
4;statement;return foo_1;15;
5;statement;foo_1 = foo_2;12;
6;statement;foo_1 = foo_2;13;
7;statement;foo_1 = foo_2 + foo_3;14;
8;statement;return foo_1;9;
9;exit;;
Edges
0;2;8;
1;3;
2;4;5;
3;9;
4;6;
5;7;
6;3;
7;9;
8;