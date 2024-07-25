Nodes
1;special;;;
2;statement;int b_count = 0;14;
3;statement;int res = 0;15;
4;statement;int i = 0;16;
5;conditional;foo_1 < foo_2.length;17;
6;conditional;foo_1[(foo_2.length - foo_3) - 1] == 'a';19;
7;statement;res = foo_1 + foo_2;20;
8;statement;b_count = foo_1 * 2;21;
9;statement;b_count += 1;24;
10;statement;i++;18;
11;statement;return foo_1;27;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;11;
5;7;9;
6;8;
7;10;
8;10;
9;5;
10;12;
11;
