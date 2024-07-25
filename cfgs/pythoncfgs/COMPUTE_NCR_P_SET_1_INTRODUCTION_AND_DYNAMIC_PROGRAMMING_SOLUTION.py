Nodes
1;statement;foo_1 = [0 for foo_2 in fun_1(foo_3 + 1)];8;
2;statement;foo_1[0] = 1;9;
3;conditional;foo < foo;10;
4;statement;return foo_1[foo_2];13;
5;conditional;fun_2(fun_2(foo_1, foo_2), 0, -1);11;
6;statement;foo_1[foo_2] = (foo_3[foo_4] + foo_5[foo_6 - 1]) % foo_7;12;
7;exit;;
Edges
0;2;
1;3;
2;4;5;
3;7;
4;3;6;
5;5;
6;