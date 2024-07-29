Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;conditional;fun_1(foo_1);10;
4;statement;fun_1(' Frequency of odd number =', foo_1);16;
5;statement;fun_1(' Frequency of even number =', foo_1);17;
6;conditional;fun_1(foo_1);11;
7;conditional;foo_1[foo_2][foo_3] % 2 == 0;12;
8;statement;foo_1 += 1;15;
9;statement;foo_1 += 1;13;
10;exit;;
Edges
0;2;
1;3;
2;4;6;
3;5;
4;10;
5;3;7;
6;8;9;
7;6;
8;6;
9;
