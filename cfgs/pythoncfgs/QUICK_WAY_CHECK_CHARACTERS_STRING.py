Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;conditional;foo < foo;9;
3;statement;return true;12;
4;conditional;foo_1[foo_2] != foo_3[0];10;
5;statement;return false;11;
6;exit;;
Edges
0;2;
1;3;4;
2;6;
3;2;5;
4;6;
5;