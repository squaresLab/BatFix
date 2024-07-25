Nodes
1;conditional;foo_1 > foo_2;8;
2;statement;foo_1 = (foo_2 + foo_3) // 2;10;
3;conditional;foo_1[foo_2] == foo_3;11;
4;conditional;foo_1[foo_2] <= foo_3[foo_4];13;
5;conditional;foo_1 >= foo_2[foo_3] and foo_4 <= foo_5[foo_6];17;
6;statement;return fun_1(foo_1, foo_2, foo_3 - 1, foo_4);19;
7;statement;return fun_1(foo_1, foo_2 + 1, foo_3, foo_4);18;
8;conditional;foo_1 >= foo_2[foo_3] and foo_4 <= foo_5[foo_6];14;
9;statement;return fun_1(foo_1, foo_2 + 1, foo_3, foo_4);16;
10;statement;return fun_1(foo_1, foo_2, foo_3 - 1, foo_4);15;
11;statement;return foo_1;12;
12;statement;return -1;9;
13;exit;;
Edges
0;2;12;
1;3;
2;4;11;
3;5;8;
4;6;7;
5;13;
6;13;
7;9;10;
8;13;
9;13;
10;13;
11;13;
12;