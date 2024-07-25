Nodes
1;statement;foo_1 = (foo_2 % foo_3 + foo_4) % foo_5;8;
2;conditional;foo_1 == foo_2;9;
3;conditional;foo_1[foo_2][foo_3] != -1;13;
4;statement;foo_1 = fun_1(foo_2, foo_3 + 1, foo_4 + foo_5[foo_6], foo_7, foo_8, foo_9);15;
5;statement;foo_1 = fun_1(foo_2, foo_3 + 1, foo_4 - foo_5[foo_6], foo_7, foo_8, foo_9);16;
6;statement;foo_1 = fun_1(foo_2 or foo_3);17;
7;statement;foo_1[foo_2][foo_3] = foo_4;18;
8;statement;return foo_1;19;
9;statement;return foo_1[foo_2][foo_3];14;
10;conditional;foo_1 == 0;10;
11;statement;return 0;12;
12;statement;return 1;11;
13;exit;;
Edges
0;2;
1;3;10;
2;4;9;
3;5;
4;6;
5;7;
6;8;
7;13;
8;13;
9;11;12;
10;13;
11;13;
12;