Nodes
1;special;;;
2;statement;int result = 0;14;
3;statement;int i = 2;15;
4;conditional;foo_1 <= fun_1(foo_2);16;
5;conditional;(foo_1 % foo_2) == 0;18;
6;conditional;foo_1 == (foo_2 / foo_3);19;
7;statement;result += foo_1;19;
8;statement;result += foo_1 + (foo_2 / foo_3);20;
9;statement;i++;17;
10;statement;return foo_1 + 1;23;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;10;
4;6;9;
5;7;8;
6;9;
7;9;
8;4;
9;11;
10;
