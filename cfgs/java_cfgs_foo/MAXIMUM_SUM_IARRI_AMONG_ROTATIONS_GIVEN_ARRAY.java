Nodes
1;special;;;
2;statement;int res = Integer.MIN_VALUE;14;
3;statement;int i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;statement;int curr_sum = 0;18;
6;statement;int j = 0;19;
7;conditional;foo_1 < foo_2;20;
8;statement;int index = (foo_1 + foo_2) % foo_3;22;
9;statement;curr_sum += foo_1 * foo_2[foo_3];23;
10;statement;j++;21;
11;statement;res = fun_1(foo_1, foo_2);25;
12;statement;i++;17;
13;statement;return foo_1;27;
14;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;13;
4;6;
5;7;
6;8;11;
7;9;
8;10;
9;7;
10;12;
11;4;
12;14;
13;