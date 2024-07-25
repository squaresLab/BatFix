Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo < foo;9;
3;statement;return foo_1;16;
4;conditional;foo < foo;10;
5;statement;foo_1 = foo_2[foo_3] * foo_4[foo_5];11;
6;conditional;foo < foo;12;
7;conditional;foo_1[foo_2] == foo_3;13;
8;statement;foo_1 = foo_2 + 1;14;
9;exit;;
Edges
0;2;
1;3;4;
2;9;
3;2;5;
4;6;
5;4;7;
6;6;8;
7;4;
8;