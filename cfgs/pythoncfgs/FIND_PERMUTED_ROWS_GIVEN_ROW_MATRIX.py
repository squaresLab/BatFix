Nodes
1;statement;foo_1 = fun_1();8;
2;conditional;fun_1(foo_1);9;
3;statement;fun_1(foo_1);11;
4;conditional;foo_1 == foo_2;12;
5;conditional;fun_1(foo_1);14;
6;conditional;foo_1 + 1 != foo_2;18;
7;statement;fun_1(foo_1);20;
8;conditional;foo_1[foo_2][foo_3] not in foo_4;15;
9;statement;foo_1 = foo_2 - 2;16;
10;statement;fun_1(foo_1[foo_2][foo_3]);10;
11;exit;;
Edges
0;2;
1;3;10;
2;4;
3;3;5;
4;6;8;
5;3;7;
6;3;
7;5;9;
8;6;
9;2;
10;