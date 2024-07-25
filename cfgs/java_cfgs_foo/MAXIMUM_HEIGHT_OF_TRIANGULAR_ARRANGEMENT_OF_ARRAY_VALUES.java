Nodes
1;special;;;
2;statement;int result = 1;14;
3;statement;int i = 1;15;
4;conditional;foo_1 <= foo_2;16;
5;statement;int y = (foo_1 * (foo_2 + 1)) / 2;18;
6;conditional;foo_1 < foo_2;19;
7;statement;result = foo_1;19;
8;statement;break;20;
9;statement;++i;17;
10;statement;return foo_1;22;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;10;
4;6;
5;7;8;
6;9;
7;10;
8;4;
9;11;
10;
