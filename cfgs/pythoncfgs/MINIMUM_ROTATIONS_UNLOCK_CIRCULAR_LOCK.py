Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo_1 > 0 or foo_2 > 0;9;
3;statement;return foo_1;15;
4;statement;foo_1 = foo_2 % 10;10;
5;statement;foo_1 = foo_2 % 10;11;
6;statement;foo_1 += fun_3(fun_2(foo_2 - foo_3), 10 - fun_3(foo_4 - foo_5));12;
7;statement;foo_1 = fun_1(foo_2 / 10);13;
8;statement;foo_1 = fun_1(foo_2 / 10);14;
9;exit;;
Edges
0;2;
1;3;4;
2;9;
3;5;
4;6;
5;7;
6;8;
7;2;
8;
