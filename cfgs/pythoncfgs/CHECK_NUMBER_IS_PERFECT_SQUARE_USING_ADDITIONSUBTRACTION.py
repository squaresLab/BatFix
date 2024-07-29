Nodes
1;statement;foo_1 = 1;8;
2;statement;foo_1 = 0;9;
3;conditional;foo_1 < foo_2;10;
4;statement;return false;15;
5;statement;foo_1 += foo_2;11;
6;conditional;foo_1 == foo_2;12;
7;statement;foo_1 += 2;14;
8;statement;return true;13;
9;exit;;
Edges
0;2;
1;3;
2;4;5;
3;9;
4;6;
5;7;8;
6;3;
7;9;
8;
