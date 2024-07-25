Nodes
1;special;;;
2;statement;int x1 = foo_1[0];14;
3;statement;int x2 = 1;15;
4;statement;int i = 1;16;
5;conditional;foo_1 < foo_2;17;
6;statement;x1 = foo_1 ^ foo_2[foo_3];18;
7;statement;i++;18;
8;statement;int i = 2;19;
9;conditional;foo_1 <= (foo_2 + 1);20;
10;statement;x2 = foo_1 ^ foo_2;21;
11;statement;i++;21;
12;statement;return foo_1 ^ foo_2;22;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;8;
5;7;
6;5;
7;9;
8;10;12;
9;11;
10;9;
11;13;
12;
