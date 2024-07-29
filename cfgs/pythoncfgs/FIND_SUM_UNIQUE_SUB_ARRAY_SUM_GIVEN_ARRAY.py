Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = fun_1();9;
3;conditional;fun_1(foo_1);10;
4;conditional;foo_1;15;
5;statement;return foo_1;18;
6;conditional;foo_1[foo_2] == 1;16;
7;statement;foo_1 += foo_2;17;
8;statement;foo_1 = 0;11;
9;conditional;foo < foo;12;
10;statement;foo_1 += foo_2[foo_3];13;
11;statement;foo_1[foo_2] = fun_1(foo_3, 0) + 1;14;
12;exit;;
Edges
0;2;
1;3;
2;4;8;
3;5;6;
4;12;
5;4;7;
6;4;
7;9;
8;3;10;
9;11;
10;9;
11;
