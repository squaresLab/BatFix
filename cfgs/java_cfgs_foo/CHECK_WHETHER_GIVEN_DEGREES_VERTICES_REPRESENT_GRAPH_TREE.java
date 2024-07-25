Nodes
1;special;;;
2;statement;int deg_sum = 0;14;
3;statement;int i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;statement;deg_sum += foo_1[foo_2];18;
6;statement;i++;17;
7;statement;return (2 * (foo_1 - 1)) == foo_2;20;
8;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;4;
6;8;
7;
