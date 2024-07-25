Nodes
1;conditional;foo_1 <= 0;8;
2;statement;foo_1 = foo_2[0];9;
3;statement;foo_1 = 0;10;
4;conditional;foo < foo;11;
5;statement;return fun_1(foo_1, foo_2);16;
6;statement;foo_1 = foo_2[foo_3] + fun_1(foo_4, foo_5);12;
7;statement;foo_1 = foo_2;13;
8;statement;foo_1 = foo_2;14;
9;statement;foo_1 = foo_2;15;
10;statement;return 0;8;
11;exit;;
Edges
0;2;10;
1;3;
2;4;
3;5;6;
4;11;
5;7;
6;8;
7;9;
8;4;
9;11;
10;