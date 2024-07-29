Nodes
1;statement;foo_1 = foo_2 % 10;10;
2;conditional;foo_1 != 0;11;
3;statement;return fun_2(fun_2(foo_1, foo_2)) % 10;13;
4;statement;foo_1 = foo_2 % 4 + 4;12;
5;exit;;
Edges
0;2;
1;3;4;
2;5;
3;3;
4;
