Nodes
1;statement;foo_1 = fun_1(foo_2 / 3);8;
2;statement;foo_1 -= foo_2;9;
3;statement;foo_1 = foo_2 / 2;10;
4;statement;foo_1 = foo_2 - foo_3;11;
5;statement;return fun_1(foo_1 * foo_2 * foo_3);12;
6;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;