Nodes
1;conditional;foo < foo;8;
2;statement;return true;15;
3;statement;foo_1 = 0;9;
4;conditional;foo < foo;10;
5;statement;foo_1 = foo_2 - fun_1(foo_3[foo_4][foo_5]);12;
6;conditional;fun_1(foo_1[foo_2][foo_3]) < foo_4;13;
7;statement;return false;14;
8;statement;foo_1 = foo_2 + fun_1(foo_3[foo_4][foo_5]);11;
9;exit;;
Edges
0;2;3;
1;9;
2;4;
3;5;8;
4;6;
5;1;7;
6;9;
7;4;
8;
