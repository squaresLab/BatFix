Nodes
1;statement;foo_1 = 0;8;
2;conditional;fun_1(foo_1);9;
3;statement;foo_1 < foo_2;13;
4;statement;foo_1[foo_2] = 0;14;
5;statement;foo_1 += 1;15;
6;conditional;foo_1[foo_2] != 0;10;
7;statement;foo_1[foo_2] = foo_3[foo_4];11;
8;statement;foo_1 += 1;12;
9;exit;;
Edges
0;2;
1;3;6;
2;4;
3;5;
4;3;
5;2;7;
6;8;
7;2;
8;