Nodes
1;statement;foo_1 = [];8;
2;conditional;fun_2(fun_2(foo_1));9;
3;statement;fun_2(fun_2(foo_1));11;
4;statement;foo_1[foo_2] = fun_1();12;
5;statement;fun_1(foo_1[foo_2]);10;
6;exit;;
Edges
0;2;
1;3;5;
2;4;
3;3;
4;2;
5;