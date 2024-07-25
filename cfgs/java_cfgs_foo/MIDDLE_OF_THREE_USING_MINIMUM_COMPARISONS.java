Nodes
1;special;;;
2;conditional;((foo_1 < foo_2) && (foo_3 < foo_4)) || ((foo_5 < foo_6) && (foo_7 < foo_8));14;
3;statement;return foo_1;14;
4;exit;;;
5;conditional;((foo_1 < foo_2) && (foo_3 < foo_4)) || ((foo_5 < foo_6) && (foo_7 < foo_8));15;
6;statement;return foo_1;15;
7;statement;return foo_1;16;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;7;
5;4;
6;4;
