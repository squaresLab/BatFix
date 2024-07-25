Nodes
1;special;;;
2;statement;int i = 0;14;
3;conditional;foo_1 <= (foo_2 - 1);15;
4;conditional;foo_1[foo_2] == foo_3;16;
5;statement;return foo_1;16;
6;exit;;;
7;statement;i += fun_1(foo_1[foo_2] - foo_3);17;
8;statement;return -1;19;
Edges
0;2;
1;3;
2;8;4;
3;5;7;
4;6;
5;
6;3;
7;6;
