Nodes
1;conditional;foo < foo;8;
2;statement;fun_1();11;
3;statement;foo < foo;12;
4;conditional;foo_1[foo_2] & 1;13;
5;statement;foo_1[foo_2] *= -1;14;
6;conditional;foo_1[foo_2] & 1;9;
7;statement;foo_1[foo_2] *= -1;10;
8;exit;;
Edges
0;2;6;
1;3;
2;4;
3;3;5;
4;3;
5;1;7;
6;1;
7;