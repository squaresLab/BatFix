Nodes
1;special;;;
2;statement;HashSet<Integer> us = new HashSet<>();14;
3;statement;int even_count = 0;15;
4;statement;int i = 0;16;
5;conditional;foo_1 < foo_2;17;
6;conditional;(foo_1[foo_2] % 2) == 0;18;
7;statement;fun_1(foo_2[foo_3]);18;
8;statement;i++;18;
9;statement;even_count = fun_1();19;
10;statement;return ((int) (fun_1(2, foo_1) - 1));20;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;9;
5;7;8;
6;8;
7;5;
8;10;
9;11;
10;
