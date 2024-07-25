Nodes
1;special;;;
2;statement;String result = "";14;
3;statement;boolean v = true;15;
4;statement;int i = 0;16;
5;conditional;foo_1 < fun_1();17;
6;conditional;fun_1(foo_2) == ' ';19;
7;statement;v = true;20;
8;conditional;(fun_1(foo_2) != ' ') && (foo_3 == true);22;
9;statement;result += fun_1(foo_2);23;
10;statement;v = false;24;
11;statement;i++;18;
12;statement;return foo_1;27;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;12;
5;7;8;
6;11;
7;9;11;
8;10;
9;11;
10;5;
11;13;
12;
