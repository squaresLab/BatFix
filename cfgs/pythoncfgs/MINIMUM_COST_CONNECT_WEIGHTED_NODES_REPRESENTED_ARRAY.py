Nodes
1;statement;foo_1 = foo_2.maxsize;10;
2;statement;foo_1 = 0;11;
3;conditional;fun_1(foo_1);12;
4;statement;return foo_1 * (foo_2 - foo_3);15;
5;statement;foo_1 = fun_1(foo_2[foo_3], foo_4);13;
6;statement;foo_1 += foo_2[foo_3];14;
7;exit;;
Edges
0;2;
1;3;
2;4;5;
3;7;
4;6;
5;3;
6;
