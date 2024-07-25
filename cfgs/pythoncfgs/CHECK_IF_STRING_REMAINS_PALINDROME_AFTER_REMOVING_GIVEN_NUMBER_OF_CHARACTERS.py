Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;conditional;foo_1 >= foo_2;9;
3;statement;return false;11;
4;statement;return true;10;
5;exit;;
Edges
0;2;
1;3;4;
2;5;
3;5;
4;