Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = fun_1(foo_2 * foo_3);9;
3;conditional;foo_1 == 0;10;
4;conditional;foo_1 > 0;12;
5;statement;return foo_1;15;
6;statement;foo_1 = foo_2 + 1;13;
7;statement;foo_1 = foo_2 // 10;14;
8;statement;return 1;11;
9;exit;;
Edges
0;2;
1;3;
2;4;8;
3;5;6;
4;9;
5;7;
6;4;
7;9;
8;