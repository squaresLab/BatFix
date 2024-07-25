Nodes
1;special;;;
2;statement;int set1 = (foo_1 >> foo_2) & ((1 << foo_3) - 1);14;
3;statement;int set2 = (foo_1 >> foo_2) & ((1 << foo_3) - 1);15;
4;statement;int xor = foo_1 ^ foo_2;16;
5;statement;xor = (foo_1 << foo_2) | (foo_3 << foo_4);17;
6;statement;int result = foo_1 ^ foo_2;18;
7;statement;return foo_1;19;
8;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;
7;
