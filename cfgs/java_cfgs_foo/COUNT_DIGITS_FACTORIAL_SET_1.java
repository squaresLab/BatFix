Nodes
1;special;;;
2;conditional;foo_1 < 0;14;
3;statement;return 0;14;
4;exit;;;
5;conditional;foo_1 <= 1;15;
6;statement;return 1;15;
7;statement;double digits = 0;16;
8;statement;int i = 2;17;
9;conditional;foo_1 <= foo_2;18;
10;statement;digits += fun_1(foo_1);19;
11;statement;i++;19;
12;statement;return ((int) (fun_1(foo_1))) + 1;20;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;7;
5;4;
6;8;
7;9;
8;10;12;
9;11;
10;9;
11;4;
