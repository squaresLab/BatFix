Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 1;9;
3;conditional;fun_1(foo_1 - 1);10;
4;statement;return foo_1;15;
5;statement;foo_1 = 1;11;
6;conditional;fun_1(foo_1);12;
7;statement;foo_1 = foo_2 - foo_3 - foo_4;13;
8;statement;foo_1 = fun_1(foo_2, foo_3 * foo_4 * foo_5);14;
9;exit;;
Edges
0;2;
1;3;
2;4;5;
3;9;
4;6;
5;3;7;
6;8;
7;6;
8;