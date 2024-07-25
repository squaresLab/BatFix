Nodes
1;special;;;
2;statement;int maxSum = 0;14;
3;statement;fun_1(foo_1);15;
4;statement;int i = foo_1 - 1;16;
5;conditional;foo_1 > 0;17;
6;conditional;(foo_1[foo_2] - foo_3[foo_4 - 1]) < foo_5;19;
7;statement;maxSum += foo_1[foo_2];20;
8;statement;maxSum += foo_1[foo_2 - 1];21;
9;statement;--i;22;
10;statement;--i;18;
11;statement;return foo_1;25;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;11;
5;7;10;
6;8;
7;9;
8;10;
9;5;
10;12;
11;
