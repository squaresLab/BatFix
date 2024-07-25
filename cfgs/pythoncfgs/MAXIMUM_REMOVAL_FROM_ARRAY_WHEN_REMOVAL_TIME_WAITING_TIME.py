Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;statement;fun_1();10;
4;conditional;fun_1(foo_1);11;
5;statement;return foo_1;15;
6;conditional;foo_1[foo_2] >= foo_3;12;
7;statement;foo_1 += 1;13;
8;statement;foo_1 += foo_2[foo_3];14;
9;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;9;
5;4;7;
6;8;
7;4;
8;