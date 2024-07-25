Nodes
1;special;;;
2;statement;int i = 0;14;
3;conditional;foo_1 < (foo_2 - 1);15;
4;statement;int j = foo_1 + 1;16;
5;conditional;foo_1 < foo_2;17;
6;conditional;(foo_1[foo_2] * foo_3[foo_4]) == foo_5;18;
7;statement;return true;18;
8;exit;;;
9;statement;j++;18;
10;statement;i++;16;
11;statement;return false;19;
Edges
0;2;
1;3;
2;4;11;
3;5;
4;6;10;
5;7;9;
6;8;
7;
8;5;
9;3;
10;8;
