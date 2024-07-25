Nodes
1;statement;foo_1 = 1;8;
2;conditional;foo_1 % 2;9;
3;statement;return (fun_1(foo_1 - 1, foo_2) + foo_3 * (foo_4 - 1)) / foo_5;11;
4;statement;foo_1 = -1;10;
5;exit;;
Edges
0;2;
1;3;4;
2;5;
3;3;
4;