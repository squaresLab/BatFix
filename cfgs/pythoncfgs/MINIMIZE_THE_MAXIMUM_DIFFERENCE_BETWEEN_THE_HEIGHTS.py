Nodes
1;conditional;foo_1 == 1;8;
2;statement;fun_1();10;
3;statement;foo_1 = foo_2[foo_3 - 1] - foo_4[0];11;
4;statement;foo_1 = foo_2[0] + foo_3;12;
5;statement;foo_1 = foo_2[foo_3 - 1] - foo_4;13;
6;conditional;foo_1 > foo_2;14;
7;conditional;foo < foo;16;
8;statement;return fun_1(foo_1, foo_2 - foo_3);25;
9;statement;foo_1 = foo_2[foo_3] - foo_4;17;
10;statement;foo_1 = foo_2[foo_3] + foo_4;18;
11;conditional;foo_1 >= foo_2 or foo_3 <= foo_4;19;
12;conditional;foo_1 - foo_2 <= foo_3 - foo_4;21;
13;statement;foo_1 = foo_2;24;
14;statement;foo_1 = foo_2;22;
15;statement;(foo_1, foo_2) = (foo_3, foo_4);15;
16;statement;return 0;9;
17;exit;;
Edges
0;2;16;
1;3;
2;4;
3;5;
4;6;
5;7;15;
6;8;9;
7;17;
8;10;
9;11;
10;7;12;
11;13;14;
12;7;
13;7;
14;7;
15;17;
16;
