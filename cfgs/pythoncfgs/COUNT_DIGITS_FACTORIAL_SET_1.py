Nodes
1;conditional;foo_1 < 0;10;
2;conditional;foo_1 <= 1;12;
3;statement;foo_1 = 0;14;
4;conditional;foo < foo;15;
5;statement;return fun_1(foo_1) + 1;17;
6;statement;foo_1 += fun_1(foo_2);16;
7;statement;return 1;13;
8;statement;return 0;11;
9;exit;;
Edges
0;2;8;
1;3;7;
2;4;
3;5;6;
4;9;
5;4;
6;9;
7;9;
8;