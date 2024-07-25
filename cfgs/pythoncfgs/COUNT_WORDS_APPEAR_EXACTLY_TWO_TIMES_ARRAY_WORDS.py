Nodes
1;statement;foo_1 = fun_1();8;
2;conditional;fun_1(foo_1);9;
3;statement;foo_1 = 0;11;
4;conditional;fun_1();12;
5;statement;return foo_1;15;
6;conditional;foo_1 == 2;13;
7;statement;foo_1 += 1;14;
8;statement;foo_1[foo_2[foo_3]] = fun_1(foo_4[foo_5], 0) + 1;10;
9;exit;;
Edges
0;2;
1;3;8;
2;4;
3;5;6;
4;9;
5;4;7;
6;4;
7;2;
8;