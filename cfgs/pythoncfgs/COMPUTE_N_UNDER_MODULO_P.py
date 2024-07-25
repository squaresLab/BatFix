Nodes
1;conditional;foo_1 >= foo_2;8;
2;statement;foo_1 = 1;10;
3;conditional;foo < foo;11;
4;statement;return foo_1;13;
5;statement;foo_1 = foo_2 * foo_3 % foo_4;12;
6;statement;return 0;9;
7;exit;;
Edges
0;2;6;
1;3;
2;4;5;
3;7;
4;3;
5;7;
6;