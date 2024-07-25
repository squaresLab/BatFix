Nodes
1;conditional;foo_1 > fun_1((foo_2 - 2) / 2);8;
2;conditional;foo_1[foo_2] >= foo_3[2 * foo_4 + 1] and foo_5[foo_6] >= foo_7[2 * foo_8 + 2] and fun_1(foo_9, 2 * foo_10 + 1, foo_11) and fun_2(foo_12, 2 * foo_13 + 2, foo_14);10;
3;statement;return false;12;
4;statement;return true;11;
5;statement;return true;9;
6;exit;;
Edges
0;2;5;
1;3;4;
2;6;
3;6;
4;6;
5;