Nodes
1;statement;foo_1 = 1;8;
2;conditional;foo_1 == foo_2;9;
3;conditional;foo_1 - foo_2 >= 5;11;
4;conditional;foo < foo;14;
5;statement;return foo_1 % 10;16;
6;statement;foo_1 = foo_2 * (foo_3 % 10) % 10;15;
7;statement;return 0;12;
8;statement;return 1;10;
9;exit;;
Edges
0;2;
1;3;8;
2;4;7;
3;5;6;
4;9;
5;4;
6;9;
7;9;
8;
