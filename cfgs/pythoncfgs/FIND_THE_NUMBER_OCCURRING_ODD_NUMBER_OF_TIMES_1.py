Nodes
1;statement;foo_1 = fun_1();8;
2;conditional;fun_1(foo_1);9;
3;conditional;foo_1;11;
4;statement;return -1;14;
5;conditional;foo_1[foo_2] % 2 != 0;12;
6;statement;return foo_1;13;
7;statement;foo_1[foo_2[foo_3]] = fun_1(foo_4[foo_5], 0) + 1;10;
8;exit;;
Edges
0;2;
1;3;7;
2;4;5;
3;8;
4;3;6;
5;8;
6;2;
7;