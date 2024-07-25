Nodes
1;special;;;
2;statement;int sum = ((foo_1 * foo_2) + (foo_3 * foo_4)) + (foo_5 * foo_6);14;
3;conditional;(foo_1 * foo_2) == foo_3;15;
4;statement;return true;15;
5;exit;;;
6;statement;return false;16;
Edges
0;2;
1;3;
2;4;6;
3;5;
4;
5;5;
