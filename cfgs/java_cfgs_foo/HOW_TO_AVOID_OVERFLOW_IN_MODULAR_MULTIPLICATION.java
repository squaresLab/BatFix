Nodes
1;special;;;
2;statement;long res = 0;14;
3;statement;a = foo_1 % foo_2;15;
4;conditional;foo_1 > 0;16;
5;conditional;(foo_1 % 2) == 1;17;
6;statement;res = (foo_1 + foo_2) % foo_3;18;
7;statement;a = (foo_1 * 2) % foo_2;20;
8;statement;b /= 2;21;
9;statement;return foo_1 % foo_2;23;
10;exit;;;
Edges
0;2;
1;3;
2;4;
3;9;5;
4;6;7;
5;7;
6;8;
7;4;
8;10;
9;
