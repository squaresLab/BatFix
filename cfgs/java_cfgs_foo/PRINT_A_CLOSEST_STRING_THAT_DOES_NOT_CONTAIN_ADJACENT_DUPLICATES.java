Nodes
1;special;;;
2;statement;int n = fun_1();14;
3;statement;char[] s = fun_1();15;
4;statement;int i = 1;16;
5;conditional;foo_1 < foo_2;17;
6;conditional;foo_1[foo_2] == foo_3[foo_4 - 1];19;
7;statement;foo_1[foo_2] = 'a';20;
8;conditional;(foo_1[foo_2] == foo_3[foo_4 - 1]) || (((foo_5 + 1) < foo_6) && (foo_7[foo_8] == foo_9[foo_10 + 1]));21;
9;statement;foo_1[foo_2]++;21;
10;statement;i++;22;
11;statement;i++;18;
12;statement;return new String(foo_1);25;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;12;
5;7;11;
6;8;
7;10;9;
8;8;
9;11;
10;5;
11;13;
12;
