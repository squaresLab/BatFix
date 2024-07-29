Nodes
1;statement;foo_1 = '';8;
2;conditional;fun_2(fun_2(foo_1));9;
3;statement;return foo_1;15;
4;statement;foo_1 = foo_2[foo_3];10;
5;conditional;fun_1();11;
6;statement;foo_1 += fun_2((fun_2(foo_2) + foo_3 - 97) % 26 + 97);14;
7;statement;foo_1 += fun_2((fun_2(foo_2) + foo_3 - 65) % 26 + 65);12;
8;exit;;
Edges
0;2;
1;3;4;
2;8;
3;5;
4;6;7;
5;2;
6;2;
7;
