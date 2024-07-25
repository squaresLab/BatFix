Nodes
1;special;;;
2;conditional;foo_1 > foo_2;14;
3;conditional;foo_1 > foo_2;15;
4;statement;return foo_1;15;
5;exit;;;
6;conditional;foo_1 > foo_2;16;
7;statement;return foo_1;16;
8;statement;return foo_1;17;
9;conditional;foo_1 > foo_2;20;
10;statement;return foo_1;20;
11;conditional;foo_1 > foo_2;21;
12;statement;return foo_1;21;
13;statement;return foo_1;22;
Edges
0;2;
1;3;9;
2;4;6;
3;5;
4;
5;7;8;
6;5;
7;5;
8;10;11;
9;5;
10;12;13;
11;5;
12;5;
