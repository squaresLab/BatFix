Nodes
1;special;;;
2;statement;int i = 0;14;
3;statement;int ans = 0;15;
4;conditional;(1 << foo_1) <= foo_2;16;
5;statement;boolean k = false;17;
6;statement;int change = 1 << foo_1;18;
7;statement;int j = 0;19;
8;conditional;foo_1 <= foo_2;20;
9;conditional;foo_1 == true;22;
10;statement;ans += 1;22;
11;statement;ans += 0;23;
12;conditional;foo_1 == 1;24;
13;statement;k = !foo_1;25;
14;statement;change = 1 << foo_1;26;
15;statement;change--;29;
16;statement;j++;21;
17;statement;i++;32;
18;statement;return foo_1;34;
19;exit;;;
Edges
0;2;
1;3;
2;4;
3;18;5;
4;6;
5;7;
6;8;
7;9;17;
8;10;11;
9;12;
10;12;
11;13;15;
12;14;
13;16;
14;16;
15;8;
16;4;
17;19;
18;
