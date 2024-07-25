Nodes
1;conditional;foo_1 == 0;8;
2;conditional;foo_1 == 1;10;
3;statement;return fun_1(foo_1 - 1, foo_2, foo_3 + foo_4);12;
4;statement;return foo_1;11;
5;statement;return foo_1;9;
6;exit;;
Edges
0;2;5;
1;3;4;
2;6;
3;6;
4;6;
5;