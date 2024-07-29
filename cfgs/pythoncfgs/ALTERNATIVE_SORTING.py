Nodes
1;statement;fun_1();8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = foo_2 - 1;10;
4;conditional;foo_1 < foo_2;11;
5;statement;foo_1 % 2 != 0;16;
6;statement;fun_1(foo_1[foo_2]);17;
7;statement;fun_1(foo_1[foo_2], end=' ');12;
8;statement;foo_1 -= 1;13;
9;statement;fun_1(foo_1[foo_2], end=' ');14;
10;statement;foo_1 += 1;15;
11;exit;;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;11;
6;8;
7;9;
8;10;
9;4;
10;
