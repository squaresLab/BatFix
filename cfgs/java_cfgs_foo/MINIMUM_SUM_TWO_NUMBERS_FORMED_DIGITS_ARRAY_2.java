Nodes
1;special;;;
2;statement;fun_1(foo_1);14;
3;statement;int num1 = 0;15;
4;statement;int num2 = 0;16;
5;statement;int i = 0;17;
6;conditional;foo_1 < foo_2;18;
7;conditional;(foo_1 % 2) == 0;20;
8;statement;num1 = (foo_1 * 10) + foo_2[foo_3];20;
9;statement;num2 = (foo_1 * 10) + foo_2[foo_3];21;
10;statement;i++;19;
11;statement;return foo_1 + foo_2;23;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;11;
6;8;9;
7;10;
8;10;
9;6;
10;12;
11;
