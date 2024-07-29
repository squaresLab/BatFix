Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = fun_1(foo_2);9;
3;statement;foo_1 = 0;10;
4;conditional;foo_1 < foo_2;11;
5;statement;return foo_1;17;
6;conditional;foo_1[foo_2] == '4';12;
7;conditional;foo_1[foo_2] == '7';14;
8;statement;foo_1 = foo_2 + 1;16;
9;statement;foo_1 = foo_2 * 2 + 2;15;
10;statement;foo_1 = foo_2 * 2 + 1;13;
11;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;11;
5;7;10;
6;8;9;
7;4;
8;8;
9;7;
10;
