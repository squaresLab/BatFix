Nodes
1;statement;foo < foo;8;
2;statement;foo_1 = foo_2[0];9;
3;conditional;foo < foo;10;
4;statement;foo_1[foo_2 - 1] = foo_3;12;
5;statement;foo_1[foo_2] = foo_3[foo_4 + 1];11;
6;exit;;
Edges
0;2;
1;3;
2;4;5;
3;1;
4;3;
5;
