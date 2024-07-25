Nodes
1;special;;;
2;statement;int ans = Integer.MIN_VALUE;14;
3;statement;int i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;statement;int curr_xor = 0;18;
6;statement;int j = foo_1;19;
7;conditional;foo_1 < foo_2;20;
8;statement;curr_xor = foo_1 ^ foo_2[foo_3];22;
9;statement;ans = fun_1(foo_1, foo_2);23;
10;statement;j++;21;
11;statement;i++;17;
12;statement;return foo_1;26;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;12;
4;6;
5;7;
6;8;11;
7;9;
8;10;
9;7;
10;4;
11;13;
12;
