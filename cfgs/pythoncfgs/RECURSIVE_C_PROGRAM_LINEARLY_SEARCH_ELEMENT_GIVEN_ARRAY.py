Nodes
1;conditional;foo_1 < foo_2;8;
2;conditional;foo_1[foo_2] == foo_3;10;
3;conditional;foo_1[foo_2] == foo_3;12;
4;statement;return fun_1(foo_1, foo_2 + 1, foo_3 - 1, foo_4);14;
5;statement;return foo_1;13;
6;statement;return foo_1;11;
7;statement;return -1;9;
8;exit;;
Edges
0;2;7;
1;3;6;
2;4;5;
3;8;
4;8;
5;8;
6;8;
7;