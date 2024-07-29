Nodes
1;conditional;foo < foo;8;
2;statement;return false;13;
3;conditional;foo < foo;9;
4;conditional;foo < foo;10;
5;conditional;foo_1[foo_2] + foo_3[foo_4] + foo_5[foo_6] == foo_7;11;
6;statement;return true;12;
7;exit;;
Edges
0;2;3;
1;7;
2;1;4;
3;3;5;
4;4;6;
5;7;
6;
