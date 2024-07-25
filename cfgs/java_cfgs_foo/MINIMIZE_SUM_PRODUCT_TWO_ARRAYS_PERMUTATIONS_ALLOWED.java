Nodes
1;special;;;
2;statement;fun_1(foo_1);14;
3;statement;fun_1(foo_1);15;
4;statement;int result = 0;16;
5;statement;int i = 0;17;
6;conditional;foo_1 < foo_2;18;
7;statement;result += foo_1[foo_2] * foo_3[(foo_4 - foo_5) - 1];19;
8;statement;i++;19;
9;statement;return foo_1;20;
10;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;9;
6;8;
7;6;
8;10;
9;
