Nodes
1;special;;;
2;statement;x = foo_1 % 10;14;
3;conditional;foo_1 != 0;15;
4;statement;y = (foo_1 % 4) + 4;15;
5;statement;return ((int) (fun_1(foo_1, foo_2))) % 10;16;
6;exit;;;
Edges
0;2;
1;3;
2;4;5;
3;5;
4;6;
5;
