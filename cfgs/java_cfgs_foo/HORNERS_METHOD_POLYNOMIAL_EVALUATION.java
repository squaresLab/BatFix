Nodes
1;special;;;
2;statement;int result = foo_1[0];14;
3;statement;int i = 1;15;
4;conditional;foo_1 < foo_2;16;
5;statement;result = (foo_1 * foo_2) + foo_3[foo_4];17;
6;statement;i++;17;
7;statement;return foo_1;18;
8;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;4;
6;8;
7;