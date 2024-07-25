Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;conditional;foo < foo;10;
4;statement;fun_1('Principal Diagonal:', foo_1);13;
5;statement;fun_1('Secondary Diagonal:', foo_1);14;
6;statement;foo_1 += foo_2[foo_3][foo_4];11;
7;statement;foo_1 += foo_2[foo_3][foo_4 - foo_5 - 1];12;
8;exit;;
Edges
0;2;
1;3;
2;4;6;
3;5;
4;8;
5;7;
6;3;
7;