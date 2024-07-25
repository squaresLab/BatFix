Nodes
1;conditional;foo_1 <= 1;8;
2;statement;fun_1(foo_1, foo_2 - 1);10;
3;statement;foo_1 = foo_2[foo_3 - 1];11;
4;statement;foo_1 = foo_2 - 2;12;
5;conditional;foo_1 >= 0 and foo_2[foo_3] > foo_4;13;
6;statement;foo_1[foo_2 + 1] = foo_3;16;
7;statement;foo_1[foo_2 + 1] = foo_3[foo_4];14;
8;statement;foo_1 = foo_2 - 1;15;
9;statement;return;9;
10;exit;;
Edges
0;2;9;
1;3;
2;4;
3;5;
4;6;7;
5;10;
6;8;
7;5;
8;10;
9;