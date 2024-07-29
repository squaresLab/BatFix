Nodes
1;conditional;foo_1 > foo_2;8;
2;conditional;foo_1 >= foo_2[foo_3];10;
3;statement;foo_1 = fun_1((foo_2 + foo_3) / 2);12;
4;conditional;foo_1[foo_2] == foo_3;13;
5;conditional;foo_1 > 0 and foo_2[foo_3 - 1] <= foo_4 and (foo_5 < foo_6[foo_7]);15;
6;conditional;foo_1 < foo_2[foo_3];17;
7;statement;return fun_1(foo_1, foo_2 + 1, foo_3, foo_4);19;
8;statement;return fun_1(foo_1, foo_2, foo_3 - 1, foo_4);18;
9;statement;return foo_1 - 1;16;
10;statement;return foo_1;14;
11;statement;return foo_1;11;
12;statement;return -1;9;
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
