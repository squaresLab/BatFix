Nodes
1;statement;foo_1 = false;8;
2;conditional;fun_1(foo_1 - 1);9;
3;statement;foo_1 == false;18;
4;statement;fun_1('No Triplet Found');19;
5;statement;foo_1 = fun_1();10;
6;conditional;foo < foo;11;
7;statement;foo_1 = -(foo_2[foo_3] + foo_4[foo_5]);12;
8;conditional;foo_1 in foo_2;13;
9;statement;fun_1(foo_1[foo_2]);17;
10;statement;fun_1(foo_1, foo_2[foo_3], foo_4[foo_5]);14;
11;statement;foo_1 = true;15;
12;exit;;
Edges
0;2;
1;3;5;
2;4;
3;12;
4;6;
5;2;7;
6;8;
7;9;10;
8;6;
9;11;
10;6;
11;
