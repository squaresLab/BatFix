Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = 1;9;
3;conditional;foo < foo;10;
4;statement;return foo_1;13;
5;conditional;foo_1[foo_2] + 1 != foo_3[foo_4 + 1];11;
6;statement;foo_1 = foo_2 + 1;12;
7;exit;;
Edges
0;2;
1;3;
2;4;5;
3;7;
4;3;6;
5;3;
6;