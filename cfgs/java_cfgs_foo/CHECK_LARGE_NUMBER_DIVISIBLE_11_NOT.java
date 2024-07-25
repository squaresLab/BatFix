Nodes
1;special;;;
2;statement;int n = fun_1();14;
3;statement;int oddDigSum = 0;15;
4;statement;int evenDigSum = 0;15;
5;statement;int i = 0;16;
6;conditional;foo_1 < foo_2;17;
7;conditional;(foo_1 % 2) == 0;19;
8;statement;oddDigSum += fun_1(foo_2) - '0';19;
9;statement;evenDigSum += fun_1(foo_2) - '0';20;
10;statement;i++;18;
11;statement;return ((foo_1 - foo_2) % 11) == 0;22;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;11;
6;8;9;
7;10;
8;10;
9;6;
10;12;
11;
