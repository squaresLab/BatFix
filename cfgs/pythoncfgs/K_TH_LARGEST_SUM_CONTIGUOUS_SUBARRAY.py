Nodes
1;statement;foo_1 = [];10;
2;statement;fun_1(0);11;
3;statement;fun_1(foo_1[0]);12;
4;conditional;foo < foo;13;
5;statement;foo_1 = [];15;
6;statement;fun_1(foo_1);16;
7;conditional;foo < foo;17;
8;statement;return foo_1[0];26;
9;conditional;foo < foo;18;
10;statement;foo_1 = foo_2[foo_3] - foo_4[foo_5 - 1];19;
11;conditional;fun_1(foo_1) < foo_2;20;
12;conditional;foo_1[0] < foo_2;23;
13;statement;fun_1(foo_1);24;
14;statement;fun_1(foo_1, foo_2);25;
15;statement;fun_1(foo_1, foo_2);21;
16;statement;fun_1(foo_1[foo_2 - 1] + foo_3[foo_4 - 1]);14;
17;exit;;
Edges
0;2;
1;3;
2;4;
3;5;16;
4;6;
5;7;
6;8;9;
7;17;
8;7;10;
9;11;
10;12;15;
11;9;13;
12;14;
13;9;
14;9;
15;4;
16;