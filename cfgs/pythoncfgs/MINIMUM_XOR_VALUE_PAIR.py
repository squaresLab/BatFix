Nodes
1;statement;fun_1();8;
2;statement;foo_1 = 999999;9;
3;statement;foo_1 = 0;10;
4;conditional;foo < foo;11;
5;statement;return foo_1;15;
6;conditional;foo < foo;12;
7;statement;foo_1 = foo_2[foo_3] ^ foo_4[foo_5];13;
8;statement;foo_1 = fun_1(foo_2, foo_3);14;
9;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;9;
5;4;7;
6;8;
7;6;
8;
