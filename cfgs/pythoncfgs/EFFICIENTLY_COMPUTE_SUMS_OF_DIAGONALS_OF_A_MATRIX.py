Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;conditional;foo < foo;10;
4;statement;fun_1('Principal Diagonal:', foo_1);16;
5;statement;fun_1('Secondary Diagonal:', foo_1);17;
6;conditional;foo < foo;11;
7;conditional;foo_1 == foo_2;12;
8;conditional;foo_1 + foo_2 == foo_3 - 1;14;
9;statement;foo_1 += foo_2[foo_3][foo_4];15;
10;statement;foo_1 += foo_2[foo_3][foo_4];13;
11;exit;;
Edges
0;2;
1;3;
2;4;6;
3;5;
4;11;
5;3;7;
6;8;10;
7;6;9;
8;6;
9;8;
10;