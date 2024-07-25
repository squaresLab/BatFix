Nodes
1;conditional;fun_1(foo_1 / 100);8;
2;statement;return foo_1 % 29 == 0;12;
3;statement;foo_1 = fun_1(foo_2 % 10);9;
4;statement;foo_1 = fun_1(foo_2 / 10);10;
5;statement;foo_1 += foo_2 * 3;11;
6;exit;;
Edges
0;2;3;
1;6;
2;4;
3;5;
4;1;
5;