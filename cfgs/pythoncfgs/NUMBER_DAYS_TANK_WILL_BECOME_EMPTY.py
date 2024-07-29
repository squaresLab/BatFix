Nodes
1;conditional;foo_1 >= foo_2;10;
2;statement;foo_1 = (fun_1(1 + 8 * (foo_2 - foo_3)) - 1) / 2;11;
3;statement;return fun_1(foo_1) + foo_2;12;
4;statement;return foo_1;10;
5;exit;;
Edges
0;2;4;
1;3;
2;5;
3;5;
4;
