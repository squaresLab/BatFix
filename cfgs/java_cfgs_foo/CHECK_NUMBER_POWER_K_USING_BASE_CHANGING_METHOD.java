Nodes
1;special;;;
2;statement;boolean oneSeen = false;14;
3;conditional;foo_1 > 0;15;
4;statement;int digit = foo_1 % foo_2;16;
5;conditional;foo_1 > 1;17;
6;statement;return false;17;
7;exit;;;
8;conditional;foo_1 == 1;18;
9;conditional;foo_1;19;
10;statement;return false;19;
11;statement;oneSeen = true;20;
12;statement;n /= foo_1;22;
13;statement;return true;24;
Edges
0;2;
1;3;
2;13;4;
3;5;
4;6;8;
5;7;
6;
7;9;12;
8;10;11;
9;7;
10;12;
11;3;
12;7;
