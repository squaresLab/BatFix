Nodes
1;special;;;
2;conditional;foo_1 == foo_2;14;
3;statement;return foo_1[foo_2] * foo_3;15;
4;exit;;;
5;conditional;foo_1[foo_2][foo_3] != 0;17;
6;statement;return foo_1[foo_2][foo_3];18;
7;statement;foo_1[foo_2][foo_3] = fun_1((foo_4[foo_5] * foo_6) + fun_2(foo_7, foo_8, foo_9 + 1, foo_10, foo_11 + 1), (foo_12[foo_13] * foo_14) + fun_3(foo_15, foo_16, foo_17, foo_18 - 1, foo_19 + 1));20;
8;statement;return foo_1[foo_2][foo_3];21;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;7;
5;4;
6;8;
7;4;
