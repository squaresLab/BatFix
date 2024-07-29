Nodes
1;statement;fun_1(foo_1 - 1);8;
2;statement;foo_1 = foo_2;9;
3;conditional;foo < foo;10;
4;conditional;fun_1(foo_1, foo_2, -1);15;
5;statement;foo_1 -= foo_2 - foo_3;17;
6;statement;(foo_1[foo_2], foo_3[foo_4 - 1]) = (foo_5[foo_6 - 1], foo_7[foo_8]);16;
7;conditional;foo_1 - foo_2 > foo_3;11;
8;conditional;foo_1[foo_2] < foo_3[foo_4];13;
9;statement;foo_1 = foo_2;14;
10;exit;;
Edges
0;2;
1;3;
2;4;7;
3;5;6;
4;1;
5;4;
6;4;8;
7;3;9;
8;3;
9;
