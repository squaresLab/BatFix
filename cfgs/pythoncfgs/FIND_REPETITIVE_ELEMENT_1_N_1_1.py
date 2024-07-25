Nodes
1;special;;;
2;statement;foo_1 = fun_1();2;
3;conditional;foo < foo;3;
4;statement;return -1;7;
5;conditional;foo_1[foo_2] in foo_3;4;
6;statement;fun_1(foo_1[foo_2]);6;
7;statement;return foo_1[foo_2];5;
8;exit;;
Edges
0;2;
1;3;
2;4;5;
3;8;
4;6;7;
5;3;
6;8;
7;