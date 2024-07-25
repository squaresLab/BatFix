Nodes
1;special;;;
2;statement;int p = ((int) (fun_1(foo_1, foo_2)));14;
3;statement;int count = 0;15;
4;conditional;(foo_1 > 0) && (foo_2 < foo_3);16;
5;statement;int rem = foo_1 % 10;17;
6;statement;count++;18;
7;conditional;foo_1 == foo_2;19;
8;statement;return foo_1;19;
9;exit;;;
10;statement;p = foo_1 / 10;20;
11;statement;return 0;22;
Edges
0;2;
1;3;
2;4;
3;11;5;
4;6;
5;7;
6;8;10;
7;9;
8;
9;4;
10;9;
