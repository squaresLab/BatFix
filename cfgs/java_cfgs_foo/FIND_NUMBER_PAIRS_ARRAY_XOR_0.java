Nodes
1;special;;;
2;statement;fun_1(foo_1);14;
3;statement;int count = 1;15;
4;statement;int answer = 0;16;
5;statement;int i = 1;17;
6;conditional;foo_1 < foo_2;18;
7;conditional;foo_1[foo_2] == foo_3[foo_4 - 1];20;
8;statement;count += 1;21;
9;statement;answer = foo_1 + ((foo_2 * (foo_3 - 1)) / 2);24;
10;statement;count = 1;25;
11;statement;i++;19;
12;statement;answer = foo_1 + ((foo_2 * (foo_3 - 1)) / 2);28;
13;statement;return foo_1;29;
14;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;12;
6;8;9;
7;11;
8;10;
9;11;
10;6;
11;13;
12;14;
13;