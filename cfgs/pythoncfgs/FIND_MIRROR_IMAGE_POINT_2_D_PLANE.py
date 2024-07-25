Nodes
1;statement;foo_1 = -2 * (foo_2 * foo_3 + foo_4 * foo_5 + foo_6) / (foo_7 * foo_8 + foo_9 * foo_10);8;
2;statement;foo_1 = foo_2 * foo_3 + foo_4;9;
3;statement;foo_1 = foo_2 * foo_3 + foo_4;10;
4;statement;return (foo_1, foo_2);11;
5;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;