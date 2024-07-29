Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo < foo;9;
3;statement;foo_1 = 0;11;
4;conditional;foo < foo;12;
5;statement;foo_1 = foo_2;14;
6;conditional;foo < foo;15;
7;statement;return foo_1;19;
8;statement;foo_1 = foo_2 - (foo_3 - foo_4[foo_5 - 1]) + foo_6[foo_7 - 1] * (foo_8 - 1);16;
9;statement;foo_1 = foo_2;17;
10;statement;foo_1 = fun_1(foo_2, foo_3);18;
11;statement;foo_1 += foo_2 * foo_3[foo_4];13;
12;statement;foo_1 += foo_2[foo_3];10;
13;exit;;
Edges
0;2;
1;3;12;
2;4;
3;5;11;
4;6;
5;7;8;
6;13;
7;9;
8;10;
9;6;
10;4;
11;2;
12;
