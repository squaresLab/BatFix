Nodes
1;conditional;foo < foo;8;
2;statement;return true;14;
3;statement;foo_1 = 0;9;
4;conditional;foo < foo;10;
5;conditional;foo_1 != 1;12;
6;statement;return false;13;
7;statement;foo_1 = foo_2 + foo_3[foo_4][foo_5];11;
8;exit;;
Edges
0;2;3;
1;8;
2;4;
3;5;7;
4;1;6;
5;8;
6;4;
7;
