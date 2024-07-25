Nodes
1;special;;;
2;statement;int count = 0;14;
3;statement;int cummulative_sum = 0;15;
4;statement;fun_1(foo_1);16;
5;statement;int i = 0;17;
6;conditional;foo_1 < foo_2;18;
7;conditional;foo_1[foo_2] >= foo_3;20;
8;statement;count++;21;
9;statement;cummulative_sum += foo_1[foo_2];22;
10;statement;i++;19;
11;statement;return foo_1;25;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;11;
6;8;10;
7;9;
8;10;
9;6;
10;12;
11;
