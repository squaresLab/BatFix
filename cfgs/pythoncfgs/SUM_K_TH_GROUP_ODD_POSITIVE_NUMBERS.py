Nodes
1;statement;foo_1 = fun_1(foo_2 * (foo_3 - 1) + 1);8;
2;statement;foo_1 = 0;9;
3;conditional;foo_1;10;
4;statement;return foo_1;14;
5;statement;foo_1 += foo_2;11;
6;statement;foo_1 += 2;12;
7;statement;foo_1 = foo_2 - 1;13;
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