Nodes
1;special;;;
2;conditional;foo_1 < 3;14;
3;statement;return -1;15;
4;exit;;;
5;statement;fun_1(foo_1);17;
6;statement;return fun_1((foo_1[0] * foo_2[1]) * foo_3[foo_4 - 1], (foo_5[foo_6 - 1] * foo_7[foo_8 - 2]) * foo_9[foo_10 - 3]);18;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;4;
