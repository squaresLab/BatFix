Nodes
1;special;;;
2;statement;int neg = 0;14;
3;statement;int pos = 0;14;
4;statement;int sum = 0;15;
5;statement;int i = 0;16;
6;conditional;foo_1 < foo_2;17;
7;statement;sum += foo_1[foo_2];19;
8;conditional;foo_1[foo_2] < 0;20;
9;statement;neg++;20;
10;statement;pos++;21;
11;statement;i++;18;
12;statement;return foo_1 / fun_1(foo_2 - foo_3);23;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;12;
6;8;
7;9;10;
8;11;
9;11;
10;6;
11;13;
12;
