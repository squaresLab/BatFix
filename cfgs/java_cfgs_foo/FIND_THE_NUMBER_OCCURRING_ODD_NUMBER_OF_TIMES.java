Nodes
1;special;;;
2;statement;int i;14;
3;statement;i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;statement;int count = 0;18;
6;statement;int j = 0;19;
7;conditional;foo_1 < foo_2;20;
8;conditional;foo_1[foo_2] == foo_3[foo_4];22;
9;statement;count++;22;
10;statement;j++;21;
11;conditional;(foo_1 % 2) != 0;24;
12;statement;return foo_1[foo_2];24;
13;exit;;;
14;statement;i++;17;
15;statement;return -1;26;
Edges
0;2;
1;3;
2;4;
3;5;15;
4;6;
5;7;
6;8;11;
7;9;10;
8;10;
9;7;
10;12;14;
11;13;
12;
13;4;
14;13;