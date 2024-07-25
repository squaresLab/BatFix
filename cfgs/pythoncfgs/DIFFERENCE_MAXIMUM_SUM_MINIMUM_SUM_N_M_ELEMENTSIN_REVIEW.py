Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;8;
3;statement;fun_1();9;
4;statement;foo_1 = foo_2 - 1;10;
5;conditional;fun_1(foo_1);11;
6;statement;return foo_1 - foo_2;15;
7;statement;foo_1 += foo_2[foo_3];12;
8;statement;foo_1 += foo_2[foo_3];13;
9;statement;foo_1 = foo_2 - 1;14;
10;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;7;
5;10;
6;8;
7;9;
8;5;
9;