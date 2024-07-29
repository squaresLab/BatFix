Nodes
1;statement;foo_1 = 0;8;
2;conditional;fun_1(foo_1);9;
3;statement;return foo_1;14;
4;conditional;foo_1[foo_2] < foo_3[foo_4];10;
5;conditional;foo_1[foo_2] == foo_3[foo_4] and foo_5 < foo_6;12;
6;statement;foo_1 += 1;13;
7;statement;foo_1 += 1;11;
8;exit;;
Edges
0;2;
1;3;4;
2;8;
3;5;7;
4;2;6;
5;2;
6;5;
7;
