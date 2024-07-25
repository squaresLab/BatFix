Nodes
1;conditional;foo_1 >= foo_2;8;
2;conditional;foo_1[foo_2] > foo_3[foo_4];10;
3;statement;foo_1 - foo_2 + 1 > 2;14;
4;statement;foo_1 = fun_1((foo_2 - foo_3 + 1) / 3);15;
5;statement;fun_1(foo_1, foo_2, foo_3 - foo_4);16;
6;statement;fun_1(foo_1, foo_2 + foo_3, foo_4);17;
7;statement;fun_1(foo_1, foo_2, foo_3 - foo_4);18;
8;statement;foo_1 = foo_2[foo_3];11;
9;statement;foo_1[foo_2] = foo_3[foo_4];12;
10;statement;foo_1[foo_2] = foo_3;13;
11;statement;return;9;
12;exit;;
Edges
0;2;11;
1;3;8;
2;4;
3;5;
4;6;
5;7;
6;12;
7;9;
8;10;
9;3;
10;12;
11;