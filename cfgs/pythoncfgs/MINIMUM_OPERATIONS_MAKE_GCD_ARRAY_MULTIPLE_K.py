Nodes
1;statement;foo_1 = 0;8;
2;conditional;fun_1(foo_1);9;
3;statement;return foo_1;14;
4;conditional;foo_1[foo_2] != 1 and foo_3[foo_4] > foo_5;10;
5;statement;foo_1 = foo_2 + foo_3 - foo_4[foo_5];13;
6;statement;foo_1 = foo_2 + fun_1(foo_3[foo_4] % foo_5, foo_6 - foo_7[foo_8] % foo_9);11;
7;exit;;
Edges
0;2;
1;3;4;
2;7;
3;5;6;
4;2;
5;2;
6;