Nodes
1;special;;;
2;conditional;foo_1 >= foo_2;14;
3;statement;return foo_1;14;
4;exit;;;
5;statement;double eq_root = (fun_1(1 + (8 * (foo_1 - foo_2))) - 1) / 2;15;
6;statement;return ((int) (fun_1(foo_1) + foo_2));16;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;4;
