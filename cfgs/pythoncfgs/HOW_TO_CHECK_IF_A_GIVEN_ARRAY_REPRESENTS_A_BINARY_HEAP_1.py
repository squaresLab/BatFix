Nodes
1;conditional;fun_2(fun_2((foo_1 - 2) / 2) + 1);8;
2;statement;return true;13;
3;conditional;foo_1[2 * foo_2 + 1] > foo_3[foo_4];9;
4;conditional;2 * foo_1 + 2 < foo_2 and foo_3[2 * foo_4 + 2] > foo_5[foo_6];11;
5;statement;return false;12;
6;statement;return false;10;
7;exit;;
Edges
0;2;3;
1;7;
2;4;6;
3;1;5;
4;7;
5;7;
6;
