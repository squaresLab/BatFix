Nodes
1;special;;;
2;statement;int result = 0;14;
3;statement;int i = 0;15;
4;conditional;foo_1 < fun_1();16;
5;conditional;(foo_1 == (fun_1(foo_3) - 'a')) || (foo_4 == (fun_2(foo_6) - 'A'));18;
6;statement;result++;19;
7;statement;i++;17;
8;statement;return foo_1;22;
9;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;8;
4;6;7;
5;7;
6;4;
7;9;
8;
