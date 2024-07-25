Nodes
1;special;;;
2;statement;n = foo_1 % foo_2;14;
3;statement;int x = 2;15;
4;conditional;foo_1 < foo_2;16;
5;conditional;((foo_1 * foo_2) % foo_3) == foo_4;17;
6;statement;return true;17;
7;exit;;;
8;statement;x++;17;
9;statement;return false;18;
Edges
0;2;
1;3;
2;4;
3;5;9;
4;6;8;
5;7;
6;
7;4;
8;7;
