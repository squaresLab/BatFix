Nodes
1;conditional;fun_1(foo_1) + fun_2(foo_2) < foo_3;8;
2;statement;foo_1 = 0;10;
3;conditional;fun_4(0, fun_4(fun_3(foo_1), fun_4(foo_2)), 1);11;
4;conditional;(foo_1 - fun_1(foo_2) - fun_2(foo_3) + 2 * foo_4) % 2 == 0;16;
5;statement;return false;18;
6;statement;return true;17;
7;conditional;foo_1[foo_2] == foo_3[foo_4];12;
8;statement;foo_1 += 1;13;
9;statement;return true;9;
10;exit;;
Edges
0;2;9;
1;3;
2;4;7;
3;5;6;
4;10;
5;10;
6;4;8;
7;3;
8;10;
9;
