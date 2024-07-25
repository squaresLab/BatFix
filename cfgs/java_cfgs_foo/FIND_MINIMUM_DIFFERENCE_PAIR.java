Nodes
1;special;;;
2;statement;int diff = Integer.MAX_VALUE;14;
3;statement;int i = 0;15;
4;conditional;foo_1 < (foo_2 - 1);16;
5;statement;int j = foo_1 + 1;17;
6;conditional;foo_1 < foo_2;18;
7;conditional;fun_1(foo_1[foo_2] - foo_3[foo_4]) < foo_5;19;
8;statement;diff = fun_1(foo_1[foo_2] - foo_3[foo_4]);19;
9;statement;j++;19;
10;statement;i++;17;
11;statement;return foo_1;20;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;11;
4;6;
5;7;10;
6;8;9;
7;9;
8;6;
9;4;
10;12;
11;
