Nodes
1;conditional;foo_1 == 0;8;
2;conditional;foo_1 != 1;10;
3;statement;return true;14;
4;conditional;foo_1 % 2 != 0;11;
5;statement;foo_1 = foo_2 // 2;13;
6;statement;return false;12;
7;statement;return false;9;
8;exit;;
Edges
0;2;7;
1;3;4;
2;8;
3;5;6;
4;2;
5;8;
6;8;
7;