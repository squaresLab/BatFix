Nodes
1;statement;foo_1 = fun_1();8;
2;conditional;fun_1(foo_1);9;
3;statement;foo_1 = 0;11;
4;conditional;fun_1(foo_1);12;
5;statement;return foo_1;18;
6;conditional;fun_1(foo_1[foo_2]);13;
7;statement;foo_1 = foo_2[foo_3];14;
8;conditional;fun_1(foo_1);15;
9;statement;foo_1 = fun_1(foo_2, foo_3 - foo_4[foo_5]);17;
10;statement;foo_1 += 1;16;
11;statement;fun_1(foo_1[foo_2]);10;
12;exit;;
Edges
0;2;
1;3;11;
2;4;
3;5;6;
4;12;
5;4;7;
6;8;
7;9;10;
8;4;
9;8;
10;2;
11;
