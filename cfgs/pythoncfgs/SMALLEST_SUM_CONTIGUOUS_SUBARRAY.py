Nodes
1;statement;foo_1 = foo_2.maxsize;10;
2;statement;foo_1 = foo_2.maxsize;11;
3;conditional;fun_1(foo_1);12;
4;statement;return foo_1;18;
5;conditional;foo_1 > 0;13;
6;statement;foo_1 += foo_2[foo_3];16;
7;statement;foo_1 = fun_1(foo_2, foo_3);17;
8;statement;foo_1 = foo_2[foo_3];14;
9;exit;;
Edges
0;2;
1;3;
2;4;5;
3;9;
4;6;8;
5;7;
6;3;
7;7;
8;