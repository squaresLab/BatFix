Nodes
1;special;;;
2;statement;int max = 0;28;
3;statement;int min = 0;28;
4;statement;fun_1(foo_1);29;
5;statement;int i = 0;30;
6;statement;int j = foo_1 - 1;30;
7;conditional;foo_1 < foo_2;31;
8;statement;min += foo_1[foo_2];33;
9;statement;max += foo_1[foo_2];34;
10;statement;i++;32;
11;statement;j--;32;
12;statement;return foo_1 - foo_2;36;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;12;
7;9;
8;10;
9;11;
10;7;
11;13;
12;
