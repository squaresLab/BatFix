Nodes
1;statement;foo_1 = fun_1();8;
2;statement;(foo_1, foo_2, foo_3) = (0, -10 ** 9, 10 ** 9);9;
3;conditional;fun_1(foo_1);10;
4;conditional;foo < foo;16;
5;statement;return foo_1;19;
6;conditional;foo_1 not in fun_1();17;
7;statement;foo_1 += 1;18;
8;statement;foo_1[foo_2[foo_3]] = 1;11;
9;conditional;foo_1[foo_2] < foo_3;12;
10;conditional;foo_1[foo_2] > foo_3;14;
11;statement;foo_1 = foo_2[foo_3];15;
12;statement;foo_1 = foo_2[foo_3];13;
13;exit;;
Edges
0;2;
1;3;
2;4;8;
3;5;6;
4;13;
5;4;7;
6;4;
7;9;
8;10;12;
9;3;11;
10;3;
11;10;
12;