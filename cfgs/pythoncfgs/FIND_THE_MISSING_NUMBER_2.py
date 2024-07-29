Nodes
1;statement;foo_1 = foo_2[0];8;
2;statement;foo_1 = 1;9;
3;conditional;foo < foo;10;
4;conditional;foo < foo;12;
5;statement;return foo_1 ^ foo_2;14;
6;statement;foo_1 = foo_2 ^ foo_3;13;
7;statement;foo_1 = foo_2 ^ foo_3[foo_4];11;
8;exit;;
Edges
0;2;
1;3;
2;4;7;
3;5;6;
4;8;
5;4;
6;3;
7;
