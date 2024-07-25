Nodes
1;special;;;
2;statement;String res = foo_1;14;
3;statement;int j = fun_1() - 1;15;
4;conditional;foo_1 >= 0;16;
5;statement;res += fun_1(foo_2);17;
6;statement;--j;17;
7;statement;return foo_1;18;
8;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;4;
6;8;
7;
