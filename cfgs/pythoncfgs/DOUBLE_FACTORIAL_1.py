Nodes
1;statement;foo_1 = 1;8;
2;statement;fun_1(foo_1, -1, -2);9;
3;conditional;foo_1 == 0 or foo_2 == 1;10;
4;statement;foo_1 *= foo_2;13;
5;statement;return foo_1;11;
6;exit;;
Edges
0;2;
1;3;
2;4;5;
3;2;
4;6;
5;
