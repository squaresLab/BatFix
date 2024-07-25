Nodes
1;statement;foo_1 = 1;8;
2;conditional;foo < foo;9;
3;statement;return foo_1;15;
4;statement;foo_1 = foo_2 * (foo_3 + 1) / 2;10;
5;conditional;foo_1 < foo_2;11;
6;statement;foo_1 = foo_2;12;
7;exit;;
Edges
0;2;
1;3;4;
2;7;
3;5;
4;3;6;
5;2;
6;