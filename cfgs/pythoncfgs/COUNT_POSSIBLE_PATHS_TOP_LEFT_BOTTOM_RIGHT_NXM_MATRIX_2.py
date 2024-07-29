Nodes
1;statement;foo_1 = [1 for foo_2 in fun_1(foo_3)];8;
2;conditional;fun_1(foo_1 - 1);9;
3;statement;return foo_1[foo_2 - 1];12;
4;conditional;foo < foo;10;
5;statement;foo_1[foo_2] += foo_3[foo_4 - 1];11;
6;exit;;
Edges
0;2;
1;3;4;
2;6;
3;2;5;
4;4;
5;
