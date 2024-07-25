Nodes
1;special;;;
2;conditional;(fun_1() == 0) && (fun_2() == 0);14;
3;statement;return true;14;
4;exit;;;
5;conditional;((fun_1() > 1) && (fun_2(0) == '*')) && (fun_3() == 0);15;
6;statement;return false;15;
7;conditional;((fun_1() > 1) && (fun_2(0) == '?')) || (((fun_3() != 0) && (fun_4() != 0)) && (fun_5(0) == fun_6(0)));16;
8;statement;return fun_1(fun_2(1), fun_3(1));16;
9;conditional;(fun_1() > 0) && (fun_2(0) == '*');17;
10;statement;return fun_1(fun_2(1), foo_2) || fun_3(foo_3, fun_4(1));17;
11;statement;return false;18;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;7;
5;4;
6;8;9;
7;4;
8;10;11;
9;4;
10;4;
