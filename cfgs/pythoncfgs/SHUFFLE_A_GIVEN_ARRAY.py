Nodes
1;conditional;fun_1(foo_1 - 1, 0, -1);10;
2;statement;return foo_1;13;
3;statement;foo_1 = fun_1(0, foo_2 + 1);11;
4;statement;(foo_1[foo_2], foo_3[foo_4]) = (foo_5[foo_6], foo_7[foo_8]);12;
5;exit;;
Edges
0;2;3;
1;5;
2;4;
3;1;
4;