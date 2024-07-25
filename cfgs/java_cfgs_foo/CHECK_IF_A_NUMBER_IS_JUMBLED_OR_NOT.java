Nodes
1;special;;;
2;conditional;(foo_1 / 10) == 0;14;
3;statement;return true;14;
4;exit;;;
5;conditional;foo_1 != 0;15;
6;conditional;(foo_1 / 10) == 0;16;
7;statement;return true;16;
8;statement;int digit1 = foo_1 % 10;17;
9;statement;int digit2 = (foo_1 / 10) % 10;18;
10;conditional;fun_1(foo_1 - foo_2) > 1;19;
11;statement;return false;19;
12;statement;num = foo_1 / 10;20;
13;statement;return true;22;
Edges
0;2;
1;3;5;
2;4;
3;
4;13;6;
5;7;8;
6;4;
7;9;
8;10;
9;11;12;
10;4;
11;5;
12;4;
