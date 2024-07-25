Nodes
1;conditional;foo_1 == 0 or foo_2 == 9;8;
2;conditional;foo_1 < 9;10;
3;statement;return fun_3(fun_2(foo_1 >> 3) - fun_3(foo_2 & 7));12;
4;statement;return false;11;
5;statement;return true;9;
6;exit;;
Edges
0;2;5;
1;3;4;
2;6;
3;6;
4;6;
5;