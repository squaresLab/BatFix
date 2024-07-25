Nodes
1;special;;;
2;statement;int res = fun_1(0) - '0';14;
3;statement;int i = 1;15;
4;conditional;foo_1 < fun_1();16;
5;conditional;((fun_1(foo_2) == '0') || (fun_2(foo_4) == '1')) || (foo_5 < 2);18;
6;statement;res += fun_1(foo_2) - '0';18;
7;statement;res *= fun_1(foo_2) - '0';19;
8;statement;i++;17;
9;statement;return foo_1;21;
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
