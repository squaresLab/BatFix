Nodes
1;conditional;foo_1 <= foo_2 - foo_3 + 1;8;
2;statement;foo_1 = foo_2 - (foo_3 - foo_4 + 1);10;
3;conditional;foo_1 % foo_2 == 0;11;
4;statement;return foo_1 % foo_2;14;
5;statement;return foo_1;12;
6;statement;return foo_1 + foo_2 - 1;9;
7;exit;;
Edges
0;2;6;
1;3;
2;4;5;
3;7;
4;7;
5;7;
6;