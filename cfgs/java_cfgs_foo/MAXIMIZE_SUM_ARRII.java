Nodes
1;special;;;
2;statement;fun_1(foo_1);14;
3;statement;int sum = 0;15;
4;statement;int i = 0;16;
5;conditional;foo_1 < foo_2;17;
6;statement;sum += foo_1[foo_2] * foo_3;18;
7;statement;i++;18;
8;statement;return foo_1;19;
9;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;8;
5;7;
6;5;
7;9;
8;
