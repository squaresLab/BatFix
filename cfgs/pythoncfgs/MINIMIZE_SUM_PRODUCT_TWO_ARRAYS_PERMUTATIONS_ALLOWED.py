Nodes
1;statement;fun_1(foo_1);8;
2;statement;fun_1(foo_1);9;
3;statement;foo_1 = 0;10;
4;conditional;fun_1(foo_1);11;
5;statement;return foo_1;13;
6;statement;foo_1 += foo_2[foo_3] * foo_4[foo_5 - foo_6 - 1];12;
7;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;7;
5;4;
6;
