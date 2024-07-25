Nodes
1;special;;;
2;conditional;foo_1 == 1;14;
3;statement;return 1;14;
4;exit;;;
5;statement;double z;15;
6;statement;double e = 2.71;16;
7;statement;z = fun_1((2 * 3.14) * foo_1) * fun_2(foo_2 / foo_3, foo_4);17;
8;statement;return ((int) (foo_1));18;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;7;
6;8;
7;4;
