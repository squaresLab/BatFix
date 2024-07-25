Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo < foo;9;
3;statement;foo_1 = foo_2 ^ foo_3[foo_4 - 1];11;
4;statement;return foo_1;12;
5;statement;foo_1 = foo_2 ^ foo_3 + 1 ^ foo_4[foo_5];10;
6;exit;;
Edges
0;2;
1;3;5;
2;4;
3;6;
4;2;
5;