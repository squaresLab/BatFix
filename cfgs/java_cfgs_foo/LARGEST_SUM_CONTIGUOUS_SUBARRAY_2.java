Nodes
1;special;;;
2;statement;int max_so_far = foo_1[0];14;
3;statement;int curr_max = foo_1[0];15;
4;statement;int i = 1;16;
5;conditional;foo_1 < foo_2;17;
6;statement;curr_max = fun_1(foo_1[foo_2], foo_3 + foo_4[foo_5]);19;
7;statement;max_so_far = fun_1(foo_1, foo_2);20;
8;statement;i++;18;
9;statement;return foo_1;22;
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
