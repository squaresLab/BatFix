Nodes
1;special;;;
2;statement;foo_1 = fun_1(foo_2);8;
3;statement;foo_1 = 0;9;
4;conditional;foo < foo;10;
5;statement;return fun_1(foo_1);15;
6;conditional;(foo_1 - foo_2[foo_3]) % foo_4 != 0;11;
7;statement;foo_1 += (foo_2 - foo_3[foo_4]) / foo_5;14;
8;statement;return -1;12;
9;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;9;
5;7;8;
6;4;
7;9;
8;