Nodes
1;special;;;
2;conditional;foo_1 > ((foo_2 - 2) / 2);14;
3;statement;return true;15;
4;exit;;;
5;conditional;(((foo_1[foo_2] >= foo_3[(2 * foo_4) + 1]) && (foo_5[foo_6] >= foo_7[(2 * foo_8) + 2])) && fun_1(foo_9, (2 * foo_10) + 1, foo_11)) && fun_2(foo_12, (2 * foo_13) + 2, foo_14);17;
6;statement;return true;18;
7;statement;return false;20;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;7;
5;4;
6;4;
