Nodes
1;special;;;
2;statement;int min_ending_here = 2147483647;14;
3;statement;int min_so_far = 2147483647;15;
4;statement;int i = 0;16;
5;conditional;foo_1 < foo_2;17;
6;conditional;foo_1 > 0;19;
7;statement;min_ending_here = foo_1[foo_2];19;
8;statement;min_ending_here += foo_1[foo_2];20;
9;statement;min_so_far = fun_1(foo_1, foo_2);21;
10;statement;i++;18;
11;statement;return foo_1;23;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;11;
5;7;8;
6;9;
7;9;
8;10;
9;5;
10;12;
11;
