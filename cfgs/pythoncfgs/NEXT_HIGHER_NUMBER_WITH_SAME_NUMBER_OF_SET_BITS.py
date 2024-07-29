Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo_1;9;
3;statement;return foo_1;16;
4;statement;foo_1 = foo_2 & -foo_3;10;
5;statement;foo_1 = foo_2 + fun_1(foo_3);11;
6;statement;foo_1 = foo_2 ^ fun_1(foo_3);12;
7;statement;foo_1 = fun_1(foo_2) / fun_2(foo_3);13;
8;statement;foo_1 = fun_1(foo_2) >> 2;14;
9;statement;foo_1 = foo_2 | foo_3;15;
10;exit;;
Edges
0;2;
1;3;4;
2;10;
3;5;
4;6;
5;7;
6;8;
7;9;
8;3;
9;
