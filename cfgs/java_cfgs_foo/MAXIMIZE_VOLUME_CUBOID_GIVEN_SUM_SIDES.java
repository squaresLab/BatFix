Nodes
1;special;;;
2;statement;int maxvalue = 0;14;
3;statement;int i = 1;15;
4;conditional;foo_1 <= (foo_2 - 2);16;
5;statement;int j = 1;18;
6;conditional;foo_1 <= (foo_2 - 1);19;
7;statement;int k = (foo_1 - foo_2) - foo_3;21;
8;statement;maxvalue = fun_1(foo_1, (foo_2 * foo_3) * foo_4);22;
9;statement;j++;20;
10;statement;i++;17;
11;statement;return foo_1;25;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;11;
4;6;
5;7;10;
6;8;
7;9;
8;6;
9;4;
10;12;
11;
