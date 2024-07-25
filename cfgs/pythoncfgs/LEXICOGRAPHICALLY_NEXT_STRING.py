Nodes
1;conditional;foo_1 == ' ';8;
2;statement;foo_1 = fun_1(foo_2) - 1;10;
3;conditional;foo_1[foo_2] == 'z' and foo_3 >= 0;11;
4;conditional;foo_1 == -1;13;
5;statement;foo_1 = fun_3(foo_2[foo_3], fun_3(fun_3(foo_4[foo_5]) + 1), 1);16;
6;statement;return foo_1;17;
7;statement;foo_1 = foo_2 + 'a';14;
8;statement;foo_1 -= 1;12;
9;statement;return 'a';9;
10;exit;;
Edges
0;2;9;
1;3;
2;4;8;
3;5;7;
4;6;
5;10;
6;6;
7;3;
8;10;
9;