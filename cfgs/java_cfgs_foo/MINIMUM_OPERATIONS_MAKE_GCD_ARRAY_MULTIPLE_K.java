Nodes
1;special;;;
2;statement;int result = 0;14;
3;statement;int i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;conditional;(foo_1[foo_2] != 1) && (foo_3[foo_4] > foo_5);18;
6;statement;result = foo_1 + fun_1(foo_2[foo_3] % foo_4, foo_5 - (foo_6[foo_7] % foo_8));19;
7;statement;result = (foo_1 + foo_2) - foo_3[foo_4];22;
8;statement;++i;17;
9;statement;return foo_1;25;
10;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;9;
4;6;7;
5;8;
6;8;
7;4;
8;10;
9;
