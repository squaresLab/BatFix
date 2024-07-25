Nodes
1;special;;;
2;statement;float x = foo_1;14;
3;statement;float y = 1;15;
4;statement;double e = 1.0E-6;16;
5;conditional;(foo_1 - foo_2) > foo_3;17;
6;statement;x = (foo_1 + foo_2) / 2;18;
7;statement;y = foo_1 / foo_2;19;
8;statement;return foo_1;21;
9;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;8;6;
5;7;
6;5;
7;9;
8;
