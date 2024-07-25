Nodes
1;special;;;
2;statement;int count_odd = 0;14;
3;statement;int count_even = 0;14;
4;statement;int i = 0;15;
5;conditional;foo_1 < foo_2;16;
6;conditional;(foo_1[foo_2] & 1) == 1;18;
7;statement;count_odd++;18;
8;statement;count_even++;19;
9;statement;i++;17;
10;conditional;((foo_1 % 2) == 1) && ((foo_2 % 2) == 1);21;
11;statement;return false;21;
12;exit;;;
13;statement;return true;22;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;10;
5;7;8;
6;9;
7;9;
8;5;
9;11;13;
10;12;
11;
12;12;
