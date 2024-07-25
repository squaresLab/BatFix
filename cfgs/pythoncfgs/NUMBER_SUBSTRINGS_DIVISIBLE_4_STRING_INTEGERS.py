Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = 0;9;
3;conditional;fun_1(0, foo_1, 1);10;
4;conditional;fun_1(0, foo_1 - 1, 1);13;
5;statement;return foo_1;17;
6;statement;foo_1 = (fun_1(foo_2[foo_3]) - fun_2('0')) * 10 + (fun_3(foo_4[foo_5 + 1]) - fun_4('0'));14;
7;conditional;foo_1 % 4 == 0;15;
8;statement;foo_1 = foo_2 + foo_3 + 1;16;
9;conditional;foo_1[foo_2] == '4' or foo_3[foo_4] == '8' or foo_5[foo_6] == '0';11;
10;statement;foo_1 += 1;12;
11;exit;;
Edges
0;2;
1;3;
2;4;9;
3;5;6;
4;11;
5;7;
6;4;8;
7;4;
8;3;10;
9;3;
10;