Nodes
1;special;;;
2;statement;int temp = foo_1;14;
3;statement;int n = 0;15;
4;conditional;foo_1 != 0;16;
5;statement;x /= 10;17;
6;statement;n++;18;
7;statement;x = foo_1;20;
8;statement;int sum = 0;21;
9;conditional;foo_1 != 0;22;
10;statement;sum += fun_1(foo_1 % 10, foo_2);23;
11;statement;x /= 10;24;
12;statement;return foo_1 == foo_2;26;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;7;5;
4;6;
5;4;
6;8;
7;9;
8;12;10;
9;11;
10;9;
11;13;
12;
