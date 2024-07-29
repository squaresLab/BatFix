Nodes
1;conditional;fun_1(foo_1);8;
2;statement;return true;15;
3;statement;foo_1 = 0;9;
4;conditional;fun_1(foo_1);10;
5;conditional;foo_1[foo_2] == foo_3[foo_4];11;
6;conditional;foo_1 > 2 * foo_2;13;
7;statement;return false;14;
8;statement;foo_1 += 1;12;
9;exit;;
Edges
0;2;3;
1;9;
2;4;
3;1;5;
4;6;8;
5;4;7;
6;9;
7;6;
8;
