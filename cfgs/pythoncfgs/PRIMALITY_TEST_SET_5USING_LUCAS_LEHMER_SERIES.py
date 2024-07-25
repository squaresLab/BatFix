Nodes
1;statement;foo_1 = 2 ** foo_2 - 1;8;
2;statement;foo_1 = 4 % foo_2;9;
3;conditional;foo < foo;10;
4;conditional;foo_1 == 0;12;
5;statement;return false;13;
6;statement;return true;12;
7;statement;foo_1 = (foo_2 * foo_3 - 2) % foo_4;11;
8;exit;;
Edges
0;2;
1;3;
2;4;7;
3;5;6;
4;8;
5;8;
6;3;
7;