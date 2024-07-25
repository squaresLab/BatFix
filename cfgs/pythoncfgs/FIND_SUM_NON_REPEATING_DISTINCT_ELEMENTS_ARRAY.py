Nodes
1;statement;foo_1 = fun_1();8;
2;statement;foo_1 = 0;9;
3;conditional;fun_1(foo_1);10;
4;conditional;foo_1;13;
5;statement;return foo_1;15;
6;statement;foo_1 = foo_2 + foo_3;14;
7;conditional;foo_1[foo_2] not in foo_3;11;
8;statement;fun_1(foo_1[foo_2]);12;
9;exit;;
Edges
0;2;
1;3;
2;4;7;
3;5;6;
4;9;
5;4;
6;3;8;
7;3;
8;