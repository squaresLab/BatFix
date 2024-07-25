Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo_1 <= foo_2 - 1;9;
3;statement;return -1;13;
4;conditional;foo_1[foo_2] == foo_3;10;
5;statement;foo_1 += fun_1(foo_2[foo_3] - foo_4);12;
6;statement;return foo_1;11;
7;exit;;
Edges
0;2;
1;3;4;
2;7;
3;5;6;
4;2;
5;7;
6;