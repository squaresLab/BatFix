Nodes
1;statement;foo_1 = fun_1(foo_2[0][0], foo_3[1][0]);8;
2;statement;foo_1 = 0;9;
3;conditional;foo < foo;10;
4;statement;return fun_1(foo_1, foo_2);14;
5;statement;foo_1 = fun_1(foo_2, foo_3);11;
6;statement;foo_1 = foo_2 + fun_1(foo_3[0][foo_4], foo_5[1][foo_6]);12;
7;statement;foo_1 = foo_2;13;
8;exit;;
Edges
0;2;
1;3;
2;4;5;
3;8;
4;6;
5;7;
6;3;
7;