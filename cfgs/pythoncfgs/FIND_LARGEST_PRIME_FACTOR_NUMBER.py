Nodes
1;statement;foo_1 = -1;10;
2;conditional;foo_1 % 2 == 0;11;
3;conditional;fun_3(3, fun_3(fun_3(foo_1)) + 1, 2);14;
4;conditional;foo_1 > 2;18;
5;statement;return fun_1(foo_1);20;
6;statement;foo_1 = foo_2;19;
7;conditional;foo_1 % foo_2 == 0;15;
8;statement;foo_1 = foo_2;16;
9;statement;foo_1 = foo_2 / foo_3;17;
10;statement;foo_1 = 2;12;
11;statement;foo_1 >>= 1;13;
12;exit;;
Edges
0;2;
1;3;10;
2;4;7;
3;5;6;
4;12;
5;5;
6;3;8;
7;9;
8;7;
9;11;
10;2;
11;