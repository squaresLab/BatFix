Nodes
1;conditional;foo_1 < foo_2;8;
2;conditional;foo_1 == 0;10;
3;statement;foo_1 = fun_1(foo_2 - 1, foo_3) + fun_2(foo_4 // 2, foo_5 - 1);12;
4;statement;return foo_1;13;
5;statement;return 1;11;
6;statement;return 0;9;
7;exit;;
Edges
0;2;6;
1;3;5;
2;4;
3;7;
4;7;
5;7;
6;
