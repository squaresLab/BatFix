Nodes
1;statement;foo_1 = 99999999;8;
2;statement;fun_1(foo_1);9;
3;conditional;foo < foo;10;
4;statement;return foo_1;13;
5;conditional;(foo_1 == foo_2[foo_3] and foo_4 == foo_5[foo_6] or (foo_7 == foo_8[foo_9] and foo_10 == foo_11[foo_12])) and foo_13 > fun_1(foo_14 - foo_15);11;
6;statement;foo_1 = fun_1(foo_2 - foo_3);12;
7;exit;;
Edges
0;2;
1;3;
2;4;5;
3;7;
4;3;6;
5;3;
6;