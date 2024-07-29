Nodes
1;statement;foo_1 -= 1;8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 += foo_2 * (foo_3 + 1) / 2;10;
4;statement;foo_1 += foo_2 * (foo_3 + 1) * (2 * foo_4 + 1) / 6;11;
5;statement;return fun_1(foo_1);12;
6;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;
