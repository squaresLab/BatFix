Nodes
1;statement;fun_1();10;
2;statement;foo_1 = fun_1(foo_2.float_info.max);11;
3;statement;foo_1 = 0;12;
4;conditional;foo < foo;13;
5;statement;return foo_1;16;
6;statement;foo_1 = foo_2[foo_3] ^ foo_4[foo_5 + 1];14;
7;statement;foo_1 = fun_1(foo_2, foo_3);15;
8;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;8;
5;7;
6;4;
7;
