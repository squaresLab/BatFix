Nodes
1;statement;foo_1 = [0] * (foo_2 + 1);8;
2;statement;foo_1[0] = 0;9;
3;statement;foo_1[1] = 1;10;
4;conditional;foo < foo;11;
5;statement;return foo_1[foo_2];16;
6;conditional;fun_1(foo_1 % 2) == 0;12;
7;statement;foo_1[foo_2] = foo_3[fun_1((foo_4 - 1) / 2)] + foo_5[fun_2((foo_6 + 1) / 2)];15;
8;statement;foo_1[foo_2] = foo_3[fun_1(foo_4 / 2)];13;
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