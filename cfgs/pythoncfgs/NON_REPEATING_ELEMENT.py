Nodes
1;conditional;fun_1(foo_1);8;
2;statement;return -1;16;
3;statement;foo_1 = 0;9;
4;conditional;foo_1 < foo_2;10;
5;conditional;foo_1 == foo_2;14;
6;statement;return foo_1[foo_2];15;
7;conditional;foo_1 != foo_2 and foo_3[foo_4] == foo_5[foo_6];11;
8;statement;foo_1 += 1;13;
9;exit;;
Edges
0;2;3;
1;9;
2;4;
3;5;7;
4;1;6;
5;9;
6;5;8;
7;4;
8;
