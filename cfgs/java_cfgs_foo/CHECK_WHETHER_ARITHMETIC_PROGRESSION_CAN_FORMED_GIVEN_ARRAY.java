Nodes
1;special;;;
2;conditional;foo_1 == 1;14;
3;statement;return true;14;
4;exit;;;
5;statement;fun_1(foo_1);15;
6;statement;int d = foo_1[1] - foo_2[0];16;
7;statement;int i = 2;17;
8;conditional;foo_1 < foo_2;18;
9;conditional;(foo_1[foo_2] - foo_3[foo_4 - 1]) != foo_5;19;
10;statement;return false;19;
11;statement;i++;19;
12;statement;return true;20;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;7;
6;8;
7;9;12;
8;10;11;
9;4;
10;8;
11;4;
