Nodes
1;statement;foo_1 = 0;8;
2;conditional;fun_1(foo_1);9;
3;statement;return foo_1;17;
4;statement;foo_1 = 0;10;
5;statement;foo_1 = 0;11;
6;conditional;fun_1(foo_1);12;
7;conditional;foo_1 < fun_1(foo_2, foo_3);15;
8;statement;foo_1 = fun_1(foo_2, foo_3);16;
9;statement;foo_1 = foo_2 ^ foo_3[foo_4][foo_5];13;
10;statement;foo_1 = foo_2 ^ foo_3[foo_4][foo_5];14;
11;exit;;
Edges
0;2;
1;3;4;
2;11;
3;5;
4;6;
5;7;9;
6;2;8;
7;2;
8;10;
9;6;
10;