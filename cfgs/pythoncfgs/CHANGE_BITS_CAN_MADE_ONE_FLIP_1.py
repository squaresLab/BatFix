Nodes
1;special;;;
2;statement;foo_1 = 0;2;
3;statement;foo_1 = fun_1(foo_2);3;
4;conditional;foo < foo;4;
5;statement;return foo_1 == foo_2 - 1 or foo_3 == 1;6;
6;statement;foo_1 += fun_1(foo_2[foo_3]) - fun_2('0');5;
7;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;7;
5;4;
6;