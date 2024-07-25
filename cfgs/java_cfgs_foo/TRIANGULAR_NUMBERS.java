Nodes
1;special;;;
2;conditional;foo_1 < 0;14;
3;statement;return false;14;
4;exit;;;
5;statement;int sum = 0;15;
6;statement;int n = 1;16;
7;conditional;foo_1 <= foo_2;17;
8;statement;sum = foo_1 + foo_2;19;
9;conditional;foo_1 == foo_2;20;
10;statement;return true;20;
11;statement;n++;18;
12;statement;return false;22;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;7;
6;8;12;
7;9;
8;10;11;
9;4;
10;7;
11;4;
