Nodes
1;conditional;foo_1 <= 1;8;
2;conditional;foo < foo;10;
3;statement;return true;13;
4;conditional;foo_1 % foo_2 == 0;11;
5;statement;return false;12;
6;statement;return false;9;
7;exit;;
Edges
0;2;6;
1;3;4;
2;7;
3;2;5;
4;7;
5;7;
6;
