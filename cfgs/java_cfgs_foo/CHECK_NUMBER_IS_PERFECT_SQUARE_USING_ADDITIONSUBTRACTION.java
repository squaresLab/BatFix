Nodes
1;special;;;
2;statement;int sum = 0;14;
3;statement;int i = 1;14;
4;conditional;foo_1 < foo_2;15;
5;statement;sum += foo_1;17;
6;conditional;foo_1 == foo_2;18;
7;statement;return true;18;
8;exit;;;
9;statement;i += 2;16;
10;statement;return false;20;
Edges
0;2;
1;3;
2;4;
3;5;10;
4;6;
5;7;9;
6;8;
7;
8;4;
9;8;
