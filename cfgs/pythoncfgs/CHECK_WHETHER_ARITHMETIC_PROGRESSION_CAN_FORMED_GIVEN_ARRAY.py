Nodes
1;conditional;foo_1 == 1;8;
2;statement;fun_1();9;
3;statement;foo_1 = foo_2[1] - foo_3[0];10;
4;conditional;foo < foo;11;
5;statement;return true;14;
6;conditional;foo_1[foo_2] - foo_3[foo_4 - 1] != foo_5;12;
7;statement;return false;13;
8;statement;return true;8;
9;exit;;
Edges
0;2;8;
1;3;
2;4;
3;5;6;
4;9;
5;4;7;
6;9;
7;9;
8;
