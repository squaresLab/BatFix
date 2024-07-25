Nodes
1;statement;foo_1 = -2147483648;8;
2;conditional;fun_1(foo_1);9;
3;statement;return foo_1;14;
4;statement;foo_1 = 0;10;
5;conditional;foo < foo;11;
6;statement;foo_1 = foo_2 ^ foo_3[foo_4];12;
7;statement;foo_1 = fun_1(foo_2, foo_3);13;
8;exit;;
Edges
0;2;
1;3;4;
2;8;
3;5;
4;2;6;
5;7;
6;5;
7;