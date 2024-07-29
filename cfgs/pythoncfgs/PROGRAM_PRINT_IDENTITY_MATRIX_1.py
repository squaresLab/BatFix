Nodes
1;conditional;fun_1(foo_1);8;
2;statement;return true;14;
3;conditional;fun_1(foo_1);9;
4;conditional;foo_1 == foo_2 and foo_3[foo_4][foo_5] != 1;10;
5;conditional;foo_1 != foo_2 and foo_3[foo_4][foo_5] != 0;12;
6;statement;return false;13;
7;statement;return false;11;
8;exit;;
Edges
0;2;3;
1;8;
2;1;4;
3;5;7;
4;3;6;
5;8;
6;8;
7;
