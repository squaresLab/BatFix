Nodes
1;statement;foo_1 = fun_1();8;
2;conditional;fun_1(foo_1);9;
3;conditional;fun_1(foo_1);11;
4;statement;return false;15;
5;conditional;fun_1(foo_1);12;
6;conditional;foo_1 - foo_2[foo_3] - foo_4[foo_5] in foo_6;13;
7;statement;return true;14;
8;statement;fun_1(foo_1[foo_2]);10;
9;exit;;
Edges
0;2;
1;3;8;
2;4;5;
3;9;
4;3;6;
5;5;7;
6;9;
7;2;
8;