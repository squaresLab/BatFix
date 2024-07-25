Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo_1 < foo_2;9;
3;statement;fun_1('number is not present!');13;
4;statement;return -1;14;
5;conditional;foo_1[foo_2] == foo_3;10;
6;statement;foo_1 = foo_2 + fun_1(foo_3[foo_4] - foo_5);12;
7;statement;return foo_1;11;
8;exit;;
Edges
0;2;
1;3;5;
2;4;
3;8;
4;6;7;
5;2;
6;8;
7;