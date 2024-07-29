Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = 0;10;
4;conditional;fun_2(fun_2(foo_1));11;
5;statement;return foo_1;18;
6;conditional;foo_1[foo_2] == 'a';12;
7;conditional;foo_1[foo_2] == 'b';14;
8;conditional;foo_1[foo_2] == 'c';16;
9;statement;foo_1 = foo_2 + 2 * foo_3;17;
10;statement;foo_1 = foo_2 + 2 * foo_3;15;
11;statement;foo_1 = 1 + 2 * foo_2;13;
12;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;12;
5;7;11;
6;8;10;
7;4;9;
8;4;
9;4;
10;4;
11;
