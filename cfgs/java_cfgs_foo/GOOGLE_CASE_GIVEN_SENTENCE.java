Nodes
1;special;;;
2;statement;int n = fun_1();14;
3;statement;String s1 = "";15;
4;statement;s1 = foo_1 + fun_1(fun_2(0));16;
5;statement;int i = 1;17;
6;conditional;foo_1 < foo_2;18;
7;conditional;(fun_1(foo_2) == ' ') && (foo_3 < foo_4);20;
8;statement;s1 = (foo_1 + " ") + fun_1(fun_2(foo_3 + 1));21;
9;statement;i++;22;
10;statement;s1 = foo_1 + fun_1(fun_2(foo_3));24;
11;statement;i++;19;
12;statement;return foo_1;26;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;12;
6;8;10;
7;9;
8;11;
9;11;
10;6;
11;13;
12;
