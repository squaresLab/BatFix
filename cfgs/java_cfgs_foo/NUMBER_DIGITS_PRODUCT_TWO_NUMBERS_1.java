Nodes
1;special;;;
2;conditional;(foo_1 == 0) || (foo_2 == 0);14;
3;statement;return 1;14;
4;exit;;;
5;statement;return ((int) (fun_1(fun_2(fun_3(foo_1)) + fun_4(fun_5(foo_2))))) + 1;15;
Edges
0;2;
1;3;5;
2;4;
3;
4;4;
