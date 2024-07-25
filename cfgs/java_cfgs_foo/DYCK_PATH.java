Nodes
1;special;;;
2;statement;int res = 1;14;
3;statement;int i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;statement;res *= (2 * foo_1) - foo_2;18;
6;statement;res /= foo_1 + 1;19;
7;statement;++i;17;
8;statement;return foo_1 / (foo_2 + 1);21;
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
