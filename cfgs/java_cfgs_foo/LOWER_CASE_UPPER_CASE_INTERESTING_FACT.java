Nodes
1;special;;;
2;statement;int i = 0;14;
3;conditional;foo_1 < foo_2.length;15;
4;conditional;('a' <= foo_1[foo_2]) & (foo_3[foo_4] <= 'z');17;
5;statement;foo_1[foo_2] = ((char) ((foo_3[foo_4] - 'a') + 'A'));18;
6;statement;i++;16;
7;statement;return fun_1(foo_1);21;
8;exit;;;
Edges
0;2;
1;3;
2;4;7;
3;5;6;
4;6;
5;3;
6;8;
7;
