Nodes
1;special;;;
2;statement;int c = 0;14;
3;conditional;((foo_1 != 0) && (foo_2 != 0)) && (foo_3 != 0);15;
4;statement;x--;16;
5;statement;y--;17;
6;statement;z--;18;
7;statement;c++;19;
8;statement;return foo_1;21;
9;exit;;;
Edges
0;2;
1;3;
2;8;4;
3;5;
4;6;
5;7;
6;3;
7;9;
8;
