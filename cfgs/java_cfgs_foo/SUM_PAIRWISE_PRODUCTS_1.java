Nodes
1;special;;;
2;statement;int multiTerms = (foo_1 * (foo_2 + 1)) / 2;14;
3;statement;int sum = foo_1;15;
4;statement;int i = 2;16;
5;conditional;foo_1 <= foo_2;17;
6;statement;multiTerms = foo_1 - (foo_2 - 1);19;
7;statement;sum = foo_1 + (foo_2 * foo_3);20;
8;statement;i++;18;
9;statement;return foo_1;22;
10;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;9;
5;7;
6;8;
7;5;
8;10;
9;