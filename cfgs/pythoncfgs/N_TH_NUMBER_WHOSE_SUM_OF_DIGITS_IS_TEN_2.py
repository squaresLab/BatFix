Nodes
1;statement;foo_1 = 19 + (foo_2 - 1) * 9;10;
2;statement;foo_1 = fun_2(fun_2(foo_2)) - 1;11;
3;statement;foo_1 += 9 * foo_2;12;
4;statement;return foo_1;13;
5;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;
