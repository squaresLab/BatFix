Nodes
1;statement;foo_1 = true;8;
2;conditional;foo < foo;9;
3;statement;foo_1 == false;15;
4;statement;fun_1(' not exist ');16;
5;conditional;foo < foo;10;
6;conditional;foo < foo;11;
7;conditional;foo_1[foo_2] + foo_3[foo_4] + foo_5[foo_6] == 0;12;
8;statement;fun_1(foo_1[foo_2], foo_3[foo_4], foo_5[foo_6]);13;
9;statement;foo_1 = true;14;
10;exit;;
Edges
0;2;
1;3;5;
2;4;
3;10;
4;2;6;
5;5;7;
6;6;8;
7;9;
8;6;
9;
