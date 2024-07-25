Nodes
1;special;;;
2;statement;foo_1[foo_2] = foo_3[foo_4];10;
3;conditional;foo_1 == (foo_2.length - 1);11;
4;statement;return;12;
5;exit;;;
6;statement;fun_1(foo_1, foo_2, foo_3 + 1);14;
Edges
0;2;
1;3;
2;4;6;
3;5;
4;
5;5;
