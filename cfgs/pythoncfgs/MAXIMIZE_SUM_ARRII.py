Nodes
1;statement;fun_1();8;
2;statement;foo_1 = 0;9;
3;conditional;fun_1(foo_1);10;
4;statement;return foo_1;12;
5;statement;foo_1 += foo_2[foo_3] * foo_4;11;
6;exit;;
Edges
0;2;
1;3;
2;4;5;
3;6;
4;3;
5;