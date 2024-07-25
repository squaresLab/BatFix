Nodes
1;statement;foo_1[foo_2] = foo_3[foo_4];8;
2;conditional;foo_1 == fun_1(foo_2) - 1;9;
3;statement;fun_1(foo_1, foo_2, foo_3 + 1);11;
4;statement;return;10;
5;exit;;
Edges
0;2;
1;3;4;
2;5;
3;5;
4;