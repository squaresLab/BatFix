Nodes
1;statement;foo_1 = foo_2;8;
2;conditional;fun_2(fun_2(foo_1) - 1, -1, -1);9;
3;statement;return foo_1;11;
4;statement;foo_1 += foo_2[foo_3];10;
5;exit;;
Edges
0;2;
1;3;4;
2;5;
3;2;
4;
