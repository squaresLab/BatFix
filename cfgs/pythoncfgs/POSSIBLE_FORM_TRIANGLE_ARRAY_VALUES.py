Nodes
1;conditional;foo_1 < 3;8;
2;statement;fun_1();10;
3;statement;fun_1(foo_1 - 2);11;
4;conditional;foo_1[foo_2] + foo_3[foo_4 + 1] > foo_5[foo_6 + 2];12;
5;statement;return true;13;
6;statement;return false;9;
7;exit;;
Edges
0;2;6;
1;3;
2;4;
3;3;5;
4;7;
5;7;
6;