Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;conditional;fun_1(foo_1);10;
4;statement;return 1;16;
5;conditional;fun_1(foo_1);11;
6;conditional;foo_1 == foo_2;14;
7;statement;return 0;15;
8;conditional;foo_1[foo_2] == foo_3[foo_4];12;
9;exit;;
Edges
0;2;
1;3;
2;4;5;
3;9;
4;6;8;
5;3;7;
6;9;
7;5;6;
8;
