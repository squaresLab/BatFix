Nodes
1;statement;foo_1 = (foo_2 - foo_3) * (foo_4 - foo_5) + (foo_6 - foo_7) * (foo_8 - foo_9);8;
2;statement;foo_1 = (foo_2 + foo_3) * (foo_4 + foo_5);9;
3;conditional;foo_1 == foo_2;10;
4;conditional;foo_1 > foo_2;12;
5;statement;return 0;15;
6;statement;return -1;13;
7;statement;return 1;11;
8;exit;;
Edges
0;2;
1;3;
2;4;7;
3;5;6;
4;8;
5;8;
6;8;
7;