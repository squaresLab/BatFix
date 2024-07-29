Nodes
1;statement;fun_1(0, foo_1, 2);8;
2;conditional;foo_1 > 0 and foo_2[foo_3] < foo_4[foo_5 - 1];9;
3;conditional;foo_1 < foo_2 - 1 and foo_3[foo_4] < foo_5[foo_6 + 1];11;
4;statement;(foo_1[foo_2], foo_3[foo_4 + 1]) = (foo_5[foo_6 + 1], foo_7[foo_8]);12;
5;statement;(foo_1[foo_2], foo_3[foo_4 - 1]) = (foo_5[foo_6 - 1], foo_7[foo_8]);10;
6;exit;;
Edges
0;2;
1;3;5;
2;1;4;
3;1;
4;3;
5;
