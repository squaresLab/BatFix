Nodes
1;special;;;
2;statement;int d1 = 0;14;
3;statement;int d2 = 0;14;
4;statement;int i = 0;15;
5;conditional;foo_1 < foo_2;16;
6;statement;d1 += foo_1[foo_2][foo_3];18;
7;statement;d2 += foo_1[foo_2][(foo_3 - foo_4) - 1];19;
8;statement;i++;17;
9;statement;return fun_1(foo_1 - foo_2);21;
10;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;9;
5;7;
6;8;
7;5;
8;10;
9;
