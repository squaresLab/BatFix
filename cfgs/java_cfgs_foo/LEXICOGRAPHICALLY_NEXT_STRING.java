Nodes
1;special;;;
2;conditional;foo_1 == "";15;
3;statement;return "a";15;
4;exit;;;
5;statement;int i = fun_1() - 1;16;
6;conditional;(fun_1(foo_2) == 'z') && (foo_3 >= 0);17;
7;statement;i--;17;
8;conditional;foo_1 == (-1);18;
9;statement;str = foo_1 + 'a';18;
10;statement;str = (fun_1(0, foo_2) + ((char) (((int) (fun_2(foo_4))) + 1))) + fun_3(foo_6 + 1);19;
11;statement;return foo_1;20;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;8;7;
6;6;
7;9;10;
8;11;
9;11;
10;4;
