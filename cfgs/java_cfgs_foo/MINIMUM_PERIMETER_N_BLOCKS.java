Nodes
1;special;;;
2;statement;int l = ((int) (fun_1(foo_1)));14;
3;statement;int sq = foo_1 * foo_2;15;
4;conditional;foo_1 == foo_2;16;
5;statement;return foo_1 * 4;16;
6;exit;;;
7;statement;long row = foo_1 / foo_2;18;
8;statement;long perimeter = 2 * (foo_1 + foo_2);19;
9;conditional;(foo_1 % foo_2) != 0;20;
10;statement;perimeter += 2;20;
11;statement;return foo_1;21;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;
6;8;
7;9;
8;10;11;
9;11;
10;6;
