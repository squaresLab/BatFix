Nodes
1;conditional;foo_1 == foo_2;9;
2;conditional;foo_1[foo_2][foo_3] != -1;13;
3;statement;foo_1 = fun_1(foo_2, foo_3 + 1, foo_4 + foo_5[foo_6], foo_7, foo_8, foo_9);15;
4;statement;foo_1 = fun_1(foo_2, foo_3 + 1, foo_4 - foo_5[foo_6], foo_7, foo_8, foo_9);16;
5;statement;foo_1 = foo_2 or foo_3;17;
6;statement;foo_1[foo_2][foo_3] = foo_4;18;
7;statement;return foo_1;19;
8;statement;return foo_1[foo_2][foo_3];14;
9;conditional;foo_1 % foo_2 == 0;10;
10;statement;return false;12;
11;statement;return true;11;
12;exit;;
Edges
0;2;9;
1;3;8;
2;4;
3;5;
4;6;
5;7;
6;12;
7;12;
8;10;11;
9;12;
10;12;
11;