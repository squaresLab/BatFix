Nodes
1;statement;foo_1 = -1;8;
2;statement;foo_1 = 1;9;
3;statement;foo_1 = fun_1(foo_2);10;
4;conditional;foo < foo;11;
5;statement;return foo_1;19;
6;conditional;foo_1[foo_2] == '(';12;
7;conditional;foo_1[foo_2] == ')';14;
8;conditional;foo_1 == foo_2;17;
9;statement;foo_1 *= fun_1(foo_2[foo_3]) - fun_2('0');18;
10;statement;foo_1 -= 1;15;
11;statement;foo_1 += 1;13;
12;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;12;
5;7;11;
6;8;10;
7;4;9;
8;4;
9;4;
10;4;
11;