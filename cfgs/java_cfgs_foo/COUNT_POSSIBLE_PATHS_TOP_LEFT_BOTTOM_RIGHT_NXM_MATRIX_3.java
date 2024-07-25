Nodes
1;special;;;
2;statement;int path = 1;14;
3;statement;int i = foo_1;15;
4;conditional;foo_1 < ((foo_2 + foo_3) - 1);16;
5;statement;path *= foo_1;18;
6;statement;path /= (foo_1 - foo_2) + 1;19;
7;statement;i++;17;
8;statement;return foo_1;21;
9;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;8;
4;6;
5;7;
6;4;
7;9;
8;
