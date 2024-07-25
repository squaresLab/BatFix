Nodes
1;conditional;foo_1 == 0;8;
2;conditional;fun_1(foo_1 % 2) == 0;9;
3;statement;return foo_1 * fun_2(foo_2, fun_2(foo_3 / 2)) * fun_4(foo_4, fun_4(foo_5 / 2));12;
4;statement;return fun_2(foo_1, fun_2(foo_2 / 2)) * fun_4(foo_3, fun_4(foo_4 / 2));10;
5;statement;return 1;8;
6;exit;;
Edges
0;2;5;
1;3;4;
2;6;
3;6;
4;6;
5;