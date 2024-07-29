Nodes
1;statement;fun_1();10;
2;statement;foo_1 = fun_1(1.0 * foo_2 // (foo_3 + 1));11;
3;statement;foo_1 = 0;12;
4;conditional;fun_1(foo_1 - 1 + 1);13;
5;statement;return foo_1;15;
6;statement;foo_1 += foo_2[foo_3];14;
7;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;7;
5;4;
6;
