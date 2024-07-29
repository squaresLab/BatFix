Nodes
1;conditional;foo_1 >= foo_2;8;
2;statement;return -1;18;
3;statement;foo_1 = fun_1(foo_2 + (foo_3 - foo_4) / 2);9;
4;conditional;foo_1[foo_2] == foo_3;10;
5;conditional;foo_1 > foo_2 and foo_3[foo_4 - 1] == foo_5;11;
6;conditional;foo_1 < foo_2 and foo_3[foo_4 + 1] == foo_5;13;
7;conditional;foo_1[foo_2] > foo_3;15;
8;statement;return fun_1(foo_1, foo_2 + 2, foo_3, foo_4);17;
9;statement;return fun_1(foo_1, foo_2, foo_3 - 2, foo_4);16;
10;statement;return foo_1 + 1;14;
11;statement;return foo_1 - 1;12;
12;statement;return foo_1;10;
13;exit;;
Edges
0;2;3;
1;13;
2;4;
3;5;12;
4;6;11;
5;7;10;
6;8;9;
7;13;
8;13;
9;13;
10;13;
11;13;
12;
