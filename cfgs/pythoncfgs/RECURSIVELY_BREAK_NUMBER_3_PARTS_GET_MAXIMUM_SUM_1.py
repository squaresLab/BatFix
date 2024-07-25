Nodes
1;statement;foo_1 = [0] * (foo_2 + 1);8;
2;statement;foo_1[0] = 0;9;
3;statement;foo_1[1] = 1;10;
4;conditional;foo < foo;11;
5;statement;return foo_1[foo_2];13;
6;statement;foo_1[foo_2] = fun_4(foo_3[fun_2(foo_4 / 2)] + foo_5[fun_3(foo_6 / 3)] + foo_7[fun_4(foo_8 / 4)], foo_9);12;
7;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;7;
5;4;
6;