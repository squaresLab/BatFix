Nodes
1;statement;foo_1 = fun_1();8;
2;conditional;fun_1(foo_1);9;
3;statement;foo_1 = 0;11;
4;conditional;fun_1(foo_1);12;
5;statement;return -1;17;
6;conditional;foo_1[foo_2] not in foo_3;13;
7;conditional;foo_1 == foo_2;15;
8;statement;return foo_1[foo_2];16;
9;statement;foo_1 += 1;14;
10;statement;fun_1(foo_1[foo_2]);10;
11;exit;;
Edges
0;2;
1;3;10;
2;4;
3;5;6;
4;11;
5;7;9;
6;4;8;
7;11;
8;7;
9;2;
10;
