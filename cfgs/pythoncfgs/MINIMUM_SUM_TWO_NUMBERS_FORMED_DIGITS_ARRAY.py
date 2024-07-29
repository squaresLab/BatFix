Nodes
1;statement;fun_1();8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = 0;9;
4;conditional;fun_1(foo_1);10;
5;statement;return foo_1 + foo_2;15;
6;conditional;foo_1 % 2 != 0;11;
7;statement;foo_1 = foo_2 * 10 + foo_3[foo_4];14;
8;statement;foo_1 = foo_2 * 10 + foo_3[foo_4];12;
9;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;9;
5;7;8;
6;4;
7;4;
8;
