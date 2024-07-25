Nodes
1;special;;;
2;statement;int min = foo_1[0];15;
3;statement;int i = 1;16;
4;conditional;foo_1 < foo_2;17;
5;conditional;foo_1[foo_2] < foo_3;19;
6;statement;min = foo_1[foo_2];19;
7;statement;i++;18;
8;statement;return (foo_1 - 1) * foo_2;21;
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
