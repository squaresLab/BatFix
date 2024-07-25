Nodes
1;special;;;
2;statement;int first = 1;14;
3;statement;int second = 1;14;
4;statement;int number = 2;14;
5;statement;int next = 1;14;
6;conditional;foo_1 > 0;15;
7;statement;next = (foo_1 + foo_2) % foo_3;16;
8;statement;first = foo_1;17;
9;statement;second = foo_1;18;
10;statement;number++;19;
11;statement;return foo_1;21;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;11;7;
6;8;
7;9;
8;10;
9;6;
10;12;
11;
