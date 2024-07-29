Nodes
1;statement;foo_1 = fun_1(2, foo_2 - 1);10;
2;statement;foo_1 = 0;11;
3;statement;foo_1 = foo_2 * (foo_3 + 1) / 2;12;
4;statement;foo_1 = foo_2 * foo_3;13;
5;statement;return fun_1(foo_1);14;
6;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;
