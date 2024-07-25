Nodes
1;conditional;foo_1 < foo_2;8;
2;conditional;foo_1 == foo_2;10;
3;statement;foo_1 = fun_1((foo_2 + foo_3) / 2);12;
4;conditional;foo_1 < foo_2 and foo_3[foo_4 + 1] < foo_5[foo_6];13;
5;conditional;foo_1 > foo_2 and foo_3[foo_4] < foo_5[foo_6 - 1];15;
6;conditional;foo_1[foo_2] > foo_3[foo_4];17;
7;statement;return fun_1(foo_1, foo_2 + 1, foo_3);19;
8;statement;return fun_1(foo_1, foo_2, foo_3 - 1);18;
9;statement;return foo_1[foo_2];16;
10;statement;return foo_1[foo_2 + 1];14;
11;statement;return foo_1[foo_2];11;
12;statement;return foo_1[0];9;
13;exit;;
Edges
0;2;12;
1;3;11;
2;4;
3;5;10;
4;6;9;
5;7;8;
6;13;
7;13;
8;13;
9;13;
10;13;
11;13;
12;