Nodes
1;statement;foo_1 = foo_2 + foo_3;8;
2;statement;foo_1 = fun_1(foo_2);9;
3;conditional;foo < foo;10;
4;statement;return foo_1;14;
5;statement;foo_1 = foo_2[foo_3:foo_4 + foo_5];11;
6;conditional;foo_1 == foo_2;12;
7;statement;return foo_1;13;
8;exit;;
Edges
0;2;
1;3;
2;4;5;
3;8;
4;6;
5;3;7;
6;8;
7;