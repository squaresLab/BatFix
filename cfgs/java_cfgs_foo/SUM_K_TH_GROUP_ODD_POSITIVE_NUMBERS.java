Nodes
1;special;;;
2;statement;int cur = (foo_1 * (foo_2 - 1)) + 1;14;
3;statement;int sum = 0;15;
4;conditional;(k--) > 0;16;
5;statement;sum += foo_1;17;
6;statement;cur += 2;18;
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
