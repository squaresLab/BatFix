Nodes
1;statement;foo_1 = 0;8;
2;conditional;fun_2(fun_2(foo_1));9;
3;statement;return foo_1;12;
4;conditional;foo_1 == fun_1(foo_2[foo_3]) - fun_2('a') or foo_4 == fun_3(foo_5[foo_6]) - fun_4('A');10;
5;statement;foo_1 += 1;11;
6;exit;;
Edges
0;2;
1;3;4;
2;6;
3;2;5;
4;2;
5;
