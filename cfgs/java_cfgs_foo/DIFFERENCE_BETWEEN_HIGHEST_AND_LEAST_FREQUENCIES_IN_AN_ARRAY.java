Nodes
1;special;;;
2;statement;fun_1(foo_1);14;
3;statement;int count = 0;15;
4;statement;int max_count = 0;15;
5;statement;int min_count = foo_1;15;
6;statement;int i = 0;16;
7;conditional;foo_1 < (foo_2 - 1);17;
8;conditional;foo_1[foo_2] == foo_3[foo_4 + 1];19;
9;statement;count += 1;20;
10;statement;continue;21;
11;statement;max_count = fun_1(foo_1, foo_2);24;
12;statement;min_count = fun_1(foo_1, foo_2);25;
13;statement;count = 0;26;
14;statement;i++;18;
15;statement;return foo_1 - foo_2;29;
16;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;15;
7;9;11;
8;10;
9;7;
10;12;
11;13;
12;14;
13;7;
14;16;
15;
