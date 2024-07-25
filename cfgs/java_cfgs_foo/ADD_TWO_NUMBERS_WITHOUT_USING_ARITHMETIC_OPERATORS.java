Nodes
1;special;;;
2;conditional;foo_1 != 0;14;
3;statement;int carry = foo_1 & foo_2;15;
4;statement;x = foo_1 ^ foo_2;16;
5;statement;y = foo_1 << 1;17;
6;statement;return foo_1;19;
7;exit;;;
Edges
0;2;
1;6;3;
2;4;
3;5;
4;2;
5;7;
6;
