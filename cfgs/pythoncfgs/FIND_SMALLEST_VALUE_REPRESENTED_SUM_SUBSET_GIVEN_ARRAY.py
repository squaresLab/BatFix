Nodes
1;statement;foo_1 = 1;8;
2;conditional;foo < foo;9;
3;statement;return foo_1;14;
4;conditional;foo_1[foo_2] <= foo_3;10;
5;statement;foo_1 = foo_2 + foo_3[foo_4];11;
6;exit;;
Edges
0;2;
1;3;4;
2;6;
3;3;5;
4;2;
5;
