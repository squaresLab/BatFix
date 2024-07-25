Nodes
1;special;;;
2;statement;int i;14;
3;conditional;foo_1 <= foo_2[foo_3];15;
4;statement;return foo_1;15;
5;exit;;;
6;statement;i = foo_1;16;
7;conditional;foo_1 < foo_2;17;
8;conditional;foo_1[foo_2] == foo_3;19;
9;statement;return foo_1;19;
10;conditional;(foo_1[foo_2] < foo_3) && (foo_4[foo_5 + 1] >= foo_6);20;
11;statement;return foo_1 + 1;20;
12;statement;i++;18;
13;statement;return -1;22;
Edges
0;2;
1;3;
2;4;6;
3;5;
4;
5;7;
6;8;13;
7;9;10;
8;5;
9;11;12;
10;5;
11;7;
12;5;
