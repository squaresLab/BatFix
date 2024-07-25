Nodes
1;special;;;
2;statement;int res = 0;14;
3;statement;int i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;conditional;foo_1 == foo_2[foo_3];17;
6;statement;res++;17;
7;statement;i++;17;
8;statement;return foo_1;18;
9;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;8;
4;6;7;
5;7;
6;4;
7;9;
8;
