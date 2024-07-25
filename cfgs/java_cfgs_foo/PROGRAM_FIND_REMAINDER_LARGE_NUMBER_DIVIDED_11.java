Nodes
1;special;;;
2;statement;int len = fun_1();14;
3;statement;int num;15;
4;statement;int rem = 0;15;
5;statement;int i = 0;16;
6;conditional;foo_1 < foo_2;17;
7;statement;num = (foo_1 * 10) + (fun_1(foo_3) - '0');19;
8;statement;rem = foo_1 % 11;20;
9;statement;i++;18;
10;statement;return foo_1;22;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;10;
6;8;
7;9;
8;6;
9;11;
10;
