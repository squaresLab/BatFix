Nodes
1;special;;;
2;statement;HashMap<Integer, Integer> map = new HashMap<>();14;
3;statement;int max_dist = 0;15;
4;statement;int i = 0;16;
5;conditional;foo_1 < foo_2;17;
6;conditional;!fun_1(foo_2[foo_3]);19;
7;statement;fun_1(foo_2[foo_3], foo_4);19;
8;statement;max_dist = fun_1(foo_1, foo_2 - fun_2(foo_4[foo_5]));20;
9;statement;i++;18;
10;statement;return foo_1;22;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;10;
5;7;8;
6;9;
7;9;
8;5;
9;11;
10;
