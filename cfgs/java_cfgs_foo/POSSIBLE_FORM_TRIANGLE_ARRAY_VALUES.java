Nodes
1;special;;;
2;conditional;foo_1 < 3;14;
3;statement;return false;14;
4;exit;;;
5;statement;fun_1(foo_1);15;
6;statement;int i = 0;16;
7;conditional;foo_1 < (foo_2 - 2);17;
8;conditional;(foo_1[foo_2] + foo_3[foo_4 + 1]) > foo_5[foo_6 + 2];18;
9;statement;return true;18;
10;statement;i++;18;
11;statement;return false;19;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;7;
6;8;11;
7;9;10;
8;4;
9;7;
10;4;
