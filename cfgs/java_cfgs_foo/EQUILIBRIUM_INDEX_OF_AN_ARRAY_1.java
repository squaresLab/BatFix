Nodes
1;special;;;
2;statement;int sum = 0;14;
3;statement;int leftsum = 0;15;
4;statement;int i = 0;16;
5;conditional;foo_1 < foo_2;17;
6;statement;sum += foo_1[foo_2];18;
7;statement;++i;18;
8;statement;int i = 0;19;
9;conditional;foo_1 < foo_2;20;
10;statement;sum -= foo_1[foo_2];22;
11;conditional;foo_1 == foo_2;23;
12;statement;return foo_1;23;
13;exit;;;
14;statement;leftsum += foo_1[foo_2];24;
15;statement;++i;21;
16;statement;return -1;26;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;8;
5;7;
6;5;
7;9;
8;10;16;
9;11;
10;12;14;
11;13;
12;
13;15;
14;9;
15;13;