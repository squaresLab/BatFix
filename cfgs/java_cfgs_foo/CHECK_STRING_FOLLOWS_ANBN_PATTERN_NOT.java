Nodes
1;special;;;
2;statement;int l = fun_1();14;
3;conditional;(foo_1 % 2) == 1;15;
4;statement;return false;16;
5;exit;;;
6;statement;int i = 0;18;
7;statement;int j = foo_1 - 1;19;
8;conditional;foo_1 < foo_2;20;
9;conditional;(fun_1(foo_2) != 'a') || (fun_2(foo_4) != 'b');21;
10;statement;return false;22;
11;statement;i++;24;
12;statement;j--;25;
13;statement;return true;27;
Edges
0;2;
1;3;
2;4;6;
3;5;
4;
5;7;
6;8;
7;13;9;
8;10;11;
9;5;
10;12;
11;8;
12;5;
