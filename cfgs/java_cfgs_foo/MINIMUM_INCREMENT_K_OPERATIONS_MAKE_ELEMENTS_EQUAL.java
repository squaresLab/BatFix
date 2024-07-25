Nodes
1;special;;;
2;statement;fun_1(foo_1);14;
3;statement;int max = foo_1[foo_2.length - 1];15;
4;statement;int res = 0;16;
5;statement;int i = 0;17;
6;conditional;foo_1 < foo_2;18;
7;conditional;((foo_1 - foo_2[foo_3]) % foo_4) != 0;20;
8;statement;return -1;20;
9;exit;;;
10;statement;res += (foo_1 - foo_2[foo_3]) / foo_4;21;
11;statement;i++;19;
12;statement;return foo_1;23;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;12;
6;8;10;
7;9;
8;
9;11;
10;6;
11;9;
