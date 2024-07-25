Nodes
1;special;;;
2;statement;int result = 0;14;
3;statement;int i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;conditional;foo_1[foo_2] < foo_3[foo_4];18;
6;statement;result++;18;
7;conditional;(foo_1[foo_2] == foo_3[foo_4]) && (foo_5 < foo_6);19;
8;statement;result++;19;
9;statement;i++;17;
10;statement;return foo_1;21;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;10;
4;6;7;
5;7;
6;8;9;
7;9;
8;4;
9;11;
10;
