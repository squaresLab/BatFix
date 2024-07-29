Nodes
1;conditional;foo_1 > foo_2;8;
2;conditional;foo_1 != foo_2[foo_3];10;
3;statement;foo_1 = fun_1((foo_2 + foo_3) / 2);12;
4;conditional;foo_1[foo_2] == foo_3;13;
5;statement;return fun_1(foo_1, foo_2, foo_3);15;
6;statement;return fun_1(foo_1, foo_2 + 1, foo_3);14;
7;statement;return foo_1;11;
8;statement;return foo_1 + 1;9;
9;exit;;
Edges
0;2;8;
1;3;7;
2;4;
3;5;6;
4;9;
5;9;
6;9;
7;9;
8;
