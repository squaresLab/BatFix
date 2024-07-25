Nodes
1;special;;;
2;statement;fun_1(foo_1, foo_2);15;
3;statement;fun_1(foo_1);16;
4;statement;int i = 0;17;
5;conditional;foo_1 < foo_2;18;
6;conditional;(foo_1[foo_2] + foo_3[foo_4]) < foo_5;20;
7;statement;return false;21;
8;exit;;;
9;statement;i++;19;
10;statement;return true;22;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;10;
5;7;9;
6;8;
7;
8;5;
9;8;
