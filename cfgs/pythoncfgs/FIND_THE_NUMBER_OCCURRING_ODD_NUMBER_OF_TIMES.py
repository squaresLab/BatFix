Nodes
1;conditional;foo < foo;8;
2;statement;return -1;15;
3;statement;foo_1 = 0;9;
4;conditional;foo < foo;10;
5;conditional;foo_1 % 2 != 0;13;
6;statement;return foo_1[foo_2];14;
7;conditional;foo_1[foo_2] == foo_3[foo_4];11;
8;statement;foo_1 += 1;12;
9;exit;;
Edges
0;2;3;
1;9;
2;4;
3;5;7;
4;1;6;
5;9;
6;4;8;
7;4;
8;
