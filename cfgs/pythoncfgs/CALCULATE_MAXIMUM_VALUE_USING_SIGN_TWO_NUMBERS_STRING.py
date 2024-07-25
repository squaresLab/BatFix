Nodes
1;statement;foo_1 = fun_1(foo_2[0]) - 48;8;
2;conditional;foo < foo;9;
3;statement;return foo_1;14;
4;conditional;foo_1[foo_2] == '0' or foo_3[foo_4] == '1' or foo_5 < 2;10;
5;statement;foo_1 *= fun_1(foo_2[foo_3]) - 48;13;
6;statement;foo_1 += fun_1(foo_2[foo_3]) - 48;11;
7;exit;;
Edges
0;2;
1;3;4;
2;7;
3;5;6;
4;2;
5;2;
6;