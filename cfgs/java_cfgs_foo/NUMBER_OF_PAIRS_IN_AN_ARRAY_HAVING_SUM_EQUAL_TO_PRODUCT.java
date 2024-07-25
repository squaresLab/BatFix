Nodes
1;special;;;
2;statement;int zero = 0;14;
3;statement;int two = 0;14;
4;statement;int i = 0;15;
5;conditional;foo_1 < foo_2;16;
6;conditional;foo_1[foo_2] == 0;18;
7;statement;zero++;19;
8;conditional;foo_1[foo_2] == 2;21;
9;statement;two++;22;
10;statement;i++;17;
11;statement;int cnt = ((foo_1 * (foo_2 - 1)) / 2) + ((foo_3 * (foo_4 - 1)) / 2);25;
12;statement;return foo_1;26;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;11;
5;7;8;
6;8;
7;9;10;
8;10;
9;5;
10;12;
11;13;
12;
