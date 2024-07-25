Nodes
1;statement;foo_1 = foo_2 - foo_3 - 1;8;
2;statement;foo_1 = foo_2 - foo_3 + (foo_4 - 1);9;
3;conditional;foo_1 == foo_2;10;
4;statement;return fun_1(foo_1, foo_2);12;
5;statement;return 0;11;
6;exit;;
Edges
0;2;
1;3;
2;4;5;
3;6;
4;6;
5;