Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = fun_1();9;
3;conditional;fun_1(foo_1);10;
4;conditional;fun_1(foo_1);12;
5;statement;return foo_1;15;
6;conditional;foo_1 - foo_2[foo_3] in foo_4;13;
7;statement;foo_1 += 1;14;
8;statement;fun_1(foo_1[foo_2]);11;
9;exit;;
Edges
0;2;
1;3;
2;4;8;
3;5;6;
4;9;
5;4;7;
6;4;
7;3;
8;
