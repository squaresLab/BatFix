Nodes
1;special;;;
2;statement;int count = 0;14;
3;statement;int curr = 1;15;
4;conditional;;;
5;statement;int sum = 0;18;
6;statement;int x = foo_1;19;
7;conditional;foo_1 > 0;20;
8;statement;sum = foo_1 + (foo_2 % 10);21;
9;statement;x = foo_1 / 10;21;
10;conditional;foo_1 == 10;22;
11;statement;count++;22;
12;conditional;foo_1 == foo_2;23;
13;statement;return foo_1;23;
14;exit;;;
15;statement;curr++;17;
Edges
0;2;
1;3;
2;4;
3;5;14;
4;6;
5;7;
6;8;10;
7;9;
8;7;
9;11;12;
10;12;
11;13;15;
12;14;
13;
14;4;