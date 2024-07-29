Nodes
1;statement;fun_1();8;
2;statement;foo_1 = 2147483647;9;
3;conditional;fun_1(foo_1 - foo_2 + 1);10;
4;statement;return foo_1;13;
5;statement;foo_1 = foo_2[foo_3 + foo_4 - 1] - foo_5[foo_6];11;
6;statement;foo_1 = fun_1(foo_2, foo_3);12;
7;exit;;
Edges
0;2;
1;3;
2;4;5;
3;7;
4;6;
5;3;
6;
