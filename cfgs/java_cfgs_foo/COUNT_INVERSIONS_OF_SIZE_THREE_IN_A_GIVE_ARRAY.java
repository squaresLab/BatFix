Nodes
1;special;;;
2;statement;int invcount = 0;14;
3;statement;int i = 0;15;
4;conditional;foo_1 < (foo_2 - 2);16;
5;statement;int j = foo_1 + 1;18;
6;conditional;foo_1 < (foo_2 - 1);19;
7;conditional;foo_1[foo_2] > foo_3[foo_4];21;
8;statement;int k = foo_1 + 1;22;
9;conditional;foo_1 < foo_2;23;
10;conditional;foo_1[foo_2] > foo_3[foo_4];25;
11;statement;invcount++;25;
12;statement;k++;24;
13;statement;j++;20;
14;statement;i++;17;
15;statement;return foo_1;30;
16;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;15;
4;6;
5;7;14;
6;8;13;
7;9;
8;10;13;
9;11;12;
10;12;
11;9;
12;6;
13;4;
14;16;
15;
