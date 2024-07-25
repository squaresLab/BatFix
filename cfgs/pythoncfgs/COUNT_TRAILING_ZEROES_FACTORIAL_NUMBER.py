Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 5;9;
3;conditional;foo_1 / foo_2 >= 1;10;
4;statement;return fun_1(foo_1);13;
5;statement;foo_1 += fun_1(foo_2 / foo_3);11;
6;statement;foo_1 *= 5;12;
7;exit;;
Edges
0;2;
1;3;
2;4;5;
3;7;
4;6;
5;3;
6;