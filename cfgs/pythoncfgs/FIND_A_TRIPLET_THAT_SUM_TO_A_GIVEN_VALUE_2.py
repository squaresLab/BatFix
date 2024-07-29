Nodes
1;conditional;foo < foo;8;
2;statement;return false;16;
3;statement;foo_1 = fun_1();9;
4;statement;foo_1 = foo_2 - foo_3[foo_4];10;
5;conditional;foo < foo;11;
6;conditional;foo_1 - foo_2[foo_3] in foo_4;12;
7;statement;fun_1(foo_1[foo_2]);15;
8;statement;fun_1('Triplet is', foo_1[foo_2], ', ', foo_3[foo_4], ', ', foo_5 - foo_6[foo_7]);13;
9;statement;return true;14;
10;exit;;
Edges
0;2;3;
1;10;
2;4;
3;5;
4;1;6;
5;7;8;
6;5;
7;9;
8;10;
9;
