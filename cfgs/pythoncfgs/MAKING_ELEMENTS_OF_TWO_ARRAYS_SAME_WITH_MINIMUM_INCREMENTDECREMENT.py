Nodes
1;statement;fun_1(reverse=false);8;
2;statement;fun_1(reverse=false);9;
3;statement;foo_1 = 0;10;
4;conditional;fun_1(0, foo_1, 1);11;
5;statement;return foo_1;16;
6;conditional;foo_1[foo_2] > foo_3[foo_4];12;
7;conditional;foo_1[foo_2] < foo_3[foo_4];14;
8;statement;foo_1 = foo_2 + fun_1(foo_3[foo_4] - foo_5[foo_6]);15;
9;statement;foo_1 = foo_2 + fun_1(foo_3[foo_4] - foo_5[foo_6]);13;
10;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;10;
5;7;9;
6;4;8;
7;4;
8;4;
9;
