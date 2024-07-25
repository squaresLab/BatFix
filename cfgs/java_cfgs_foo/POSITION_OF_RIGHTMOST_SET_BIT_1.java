Nodes
1;special;;;
2;statement;int position = 1;14;
3;statement;int m = 1;15;
4;conditional;(foo_1 & foo_2) == 0;16;
5;statement;m = foo_1 << 1;17;
6;statement;position++;18;
7;statement;return foo_1;20;
8;exit;;;
Edges
0;2;
1;3;
2;4;
3;7;5;
4;6;
5;4;
6;8;
7;
