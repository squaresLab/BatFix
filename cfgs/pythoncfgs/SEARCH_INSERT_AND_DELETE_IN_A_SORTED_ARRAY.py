Nodes
1;conditional;foo_1 < foo_2;8;
2;statement;foo_1 = (foo_2 + foo_3) / 2;10;
3;conditional;foo_1 == foo_2[fun_1(foo_3)];11;
4;conditional;foo_1 > foo_2[fun_1(foo_3)];13;
5;statement;return fun_1(foo_1, foo_2, foo_3 - 1, foo_4);15;
6;statement;return fun_1(foo_1, foo_2 + 1, foo_3, foo_4);14;
7;statement;return foo_1;12;
8;statement;return -1;9;
9;exit;;
Edges
0;2;8;
1;3;
2;4;7;
3;5;6;
4;9;
5;9;
6;9;
7;9;
8;