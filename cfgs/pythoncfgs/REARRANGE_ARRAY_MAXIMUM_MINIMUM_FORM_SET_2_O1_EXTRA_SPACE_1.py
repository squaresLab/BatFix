Nodes
1;statement;foo_1 = foo_2[foo_3 - 1];8;
2;statement;foo_1 = foo_2[0];9;
3;statement;fun_1(foo_1);10;
4;conditional;foo_1 % 2 == 0;11;
5;statement;foo_1[foo_2] = foo_3;15;
6;statement;foo_1 += 1;16;
7;statement;foo_1[foo_2] = foo_3;12;
8;statement;foo_1 -= 1;13;
9;exit;;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;3;
6;8;
7;3;
8;