Nodes
1;special;;;
2;statement;int i = 1;14;
3;statement;double res = 0.0;15;
4;statement;boolean sign = true;16;
5;conditional;foo_1 > 0;17;
6;statement;n--;18;
7;conditional;foo_1;19;
8;statement;sign = !foo_1;20;
9;statement;res = foo_1 + (((double) (++i)) / (++i));21;
10;statement;sign = !foo_1;24;
11;statement;res = foo_1 - (((double) (++i)) / (++i));25;
12;statement;return foo_1;28;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;12;6;
5;7;
6;8;10;
7;9;
8;5;
9;11;
10;5;
11;13;
12;
