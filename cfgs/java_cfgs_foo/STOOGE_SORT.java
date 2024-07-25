Nodes
1;special;;;
2;conditional;foo_1 >= foo_2;14;
3;statement;return;14;
4;exit;;;
5;conditional;foo_1[foo_2] > foo_3[foo_4];15;
6;statement;int t = foo_1[foo_2];16;
7;statement;foo_1[foo_2] = foo_3[foo_4];17;
8;statement;foo_1[foo_2] = foo_3;18;
9;conditional;((foo_1 - foo_2) + 1) > 2;20;
10;statement;int t = ((foo_1 - foo_2) + 1) / 3;21;
11;statement;fun_1(foo_1, foo_2, foo_3 - foo_4);22;
12;statement;fun_1(foo_1, foo_2 + foo_3, foo_4);23;
13;statement;fun_1(foo_1, foo_2, foo_3 - foo_4);24;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;9;
5;7;
6;8;
7;9;
8;10;4;
9;11;
10;12;
11;13;
12;4;
