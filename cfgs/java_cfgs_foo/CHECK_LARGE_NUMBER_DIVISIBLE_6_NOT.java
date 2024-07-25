Nodes
1;special;;;
2;statement;int n = fun_1();14;
3;conditional;((fun_1(foo_2 - 1) - '0') % 2) != 0;15;
4;statement;return false;15;
5;exit;;;
6;statement;int digitSum = 0;16;
7;statement;int i = 0;17;
8;conditional;foo_1 < foo_2;18;
9;statement;digitSum += fun_1(foo_2) - '0';19;
10;statement;i++;19;
11;statement;return (foo_1 % 3) == 0;20;
Edges
0;2;
1;3;
2;4;6;
3;5;
4;
5;7;
6;8;
7;9;11;
8;10;
9;8;
10;5;
