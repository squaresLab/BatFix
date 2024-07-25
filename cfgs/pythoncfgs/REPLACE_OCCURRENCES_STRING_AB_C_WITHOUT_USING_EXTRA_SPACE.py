Nodes
1;conditional;foo < foo;8;
2;statement;return;14;
3;conditional;foo_1[foo_2 - 1] == 'A' and foo_3[foo_4] == 'B';9;
4;statement;foo_1[foo_2 - 1] = 'C';10;
5;conditional;foo < foo;11;
6;statement;foo_1[fun_1(foo_2) - 1] = ' ';13;
7;statement;foo_1[foo_2] = foo_3[foo_4 + 1];12;
8;exit;;
Edges
0;2;3;
1;8;
2;1;4;
3;5;
4;6;7;
5;1;
6;5;
7;