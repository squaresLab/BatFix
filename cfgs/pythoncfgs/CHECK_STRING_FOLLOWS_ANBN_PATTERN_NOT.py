Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;conditional;fun_1(foo_1);9;
3;conditional;foo_1 * 2 != foo_2;12;
4;conditional;foo < foo;14;
5;statement;return true;17;
6;conditional;foo_1[foo_2] != 'b';15;
7;statement;return false;16;
8;statement;return false;13;
9;conditional;foo_1[foo_2] != 'a';10;
10;exit;;
Edges
0;2;
1;3;9;
2;4;8;
3;5;6;
4;10;
5;4;7;
6;10;
7;10;
8;2;3;
9;