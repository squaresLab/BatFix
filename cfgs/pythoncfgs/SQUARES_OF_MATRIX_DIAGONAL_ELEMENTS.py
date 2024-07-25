Nodes
1;statement;fun_1('Diagonal one : ', end='');8;
2;conditional;foo < foo;9;
3;statement;fun_1(' \n\nDiagonal two : ', end='');13;
4;statement;foo < foo;14;
5;conditional;foo < foo;15;
6;conditional;foo_1 + foo_2 == foo_3 - 1;16;
7;statement;fun_2(fun_2(foo_0[foo_1][foo_2] * foo_3[foo_4][foo_5]), end='');17;
8;conditional;foo < foo;10;
9;conditional;foo_1 == foo_2;11;
10;statement;fun_2(fun_2(foo_0[foo_1][foo_2] * foo_3[foo_4][foo_5]), end='');12;
11;exit;;
Edges
0;2;
1;3;8;
2;4;
3;5;
4;4;6;
5;5;7;
6;5;
7;2;9;
8;8;10;
9;8;
10;