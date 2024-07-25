Nodes
1;statement;foo_1 = 0;8;
2;conditional;fun_1(foo_1 + 1);9;
3;statement;return foo_1;14;
4;conditional;fun_1(foo_1 + 1);10;
5;conditional;fun_1(foo_1 + 1);11;
6;conditional;foo_1 + foo_2 + foo_3 == foo_4;12;
7;statement;foo_1 += 1;13;
8;exit;;
Edges
0;2;
1;3;4;
2;8;
3;2;5;
4;4;6;
5;5;7;
6;5;
7;