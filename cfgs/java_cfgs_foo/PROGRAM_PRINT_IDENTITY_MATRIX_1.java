Nodes
1;special;;;
2;statement;int row = 0;14;
3;conditional;foo_1 < foo_2;15;
4;statement;int col = 0;17;
5;conditional;foo_1 < foo_2;18;
6;conditional;(foo_1 == foo_2) && (foo_3[foo_4][foo_5] != 1);20;
7;statement;return false;20;
8;exit;;;
9;conditional;(foo_1 != foo_2) && (foo_3[foo_4][foo_5] != 0);21;
10;statement;return false;21;
11;statement;col++;19;
12;statement;row++;16;
13;statement;return true;24;
Edges
0;2;
1;3;
2;4;13;
3;5;
4;6;12;
5;7;9;
6;8;
7;
8;10;11;
9;8;
10;5;
11;3;
12;8;
