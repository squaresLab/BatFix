Nodes
1;statement;foo_1 = fun_1();8;
2;statement;foo_1 = fun_1();9;
3;conditional;fun_1(foo_1);10;
4;conditional;fun_1(foo_1);12;
5;statement;foo_1 = 0;14;
6;conditional;foo_1;15;
7;statement;return foo_1;18;
8;conditional;foo_1 in fun_1();16;
9;statement;foo_1 += fun_1(foo_2[foo_3], foo_4[foo_5]);17;
10;statement;foo_1[foo_2[foo_3]] = fun_1(foo_4[foo_5], 0) + 1;13;
11;statement;foo_1[foo_2[foo_3]] = fun_1(foo_4[foo_5], 0) + 1;11;
12;exit;;
Edges
0;2;
1;3;
2;4;11;
3;5;10;
4;6;
5;7;8;
6;12;
7;6;9;
8;6;
9;4;
10;3;
11;
