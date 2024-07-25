Nodes
1;statement;foo_1 = fun_1();8;
2;statement;fun_1(0);9;
3;statement;fun_1(1);10;
4;statement;foo_1 = 2;11;
5;conditional;foo_1 < foo_2;12;
6;statement;return (foo_2 - 1) * foo_3[foo_4 - 2] if foo_1 == 1 else foo_5[foo_6 - 1];15;
7;statement;fun_1((foo_1 - 2) * foo_2[foo_3 - 1] + (foo_4 - 1) * foo_5[foo_6 - 2]);13;
8;statement;foo_1 = foo_2 + 1;14;
9;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;7;
5;9;
6;8;
7;5;
8;