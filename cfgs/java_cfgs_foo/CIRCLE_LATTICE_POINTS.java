Nodes
1;special;;;
2;conditional;foo_1 <= 0;14;
3;statement;return 0;14;
4;exit;;;
5;statement;int result = 4;15;
6;statement;int x = 1;16;
7;conditional;foo_1 < foo_2;17;
8;statement;int ySquare = (foo_1 * foo_2) - (foo_3 * foo_4);19;
9;statement;int y = ((int) (fun_1(foo_1)));20;
10;conditional;(foo_1 * foo_2) == foo_3;21;
11;statement;result += 4;21;
12;statement;x++;18;
13;statement;return foo_1;23;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;7;
6;8;13;
7;9;
8;10;
9;11;12;
10;12;
11;7;
12;4;
