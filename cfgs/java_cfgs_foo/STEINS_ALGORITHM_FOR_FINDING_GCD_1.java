Nodes
1;special;;;
2;conditional;foo_1 == foo_2;14;
3;statement;return foo_1;14;
4;exit;;;
5;conditional;foo_1 == 0;15;
6;statement;return foo_1;15;
7;conditional;foo_1 == 0;16;
8;statement;return foo_1;16;
9;conditional;((~foo_1) & 1) == 1;17;
10;conditional;(foo_1 & 1) == 1;18;
11;statement;return fun_1(foo_1 >> 1, foo_2);18;
12;statement;return fun_1(foo_1 >> 1, foo_2 >> 1) << 1;19;
13;conditional;((~foo_1) & 1) == 1;21;
14;statement;return fun_1(foo_1, foo_2 >> 1);21;
15;conditional;foo_1 > foo_2;22;
16;statement;return fun_1((foo_1 - foo_2) >> 1, foo_3);22;
17;statement;return fun_1((foo_1 - foo_2) >> 1, foo_3);23;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;7;
5;4;
6;8;9;
7;4;
8;10;13;
9;11;12;
10;4;
11;4;
12;14;15;
13;4;
14;16;17;
15;4;
16;4;