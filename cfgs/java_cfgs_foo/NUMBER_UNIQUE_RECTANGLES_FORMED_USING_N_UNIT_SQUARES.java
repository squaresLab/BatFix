Nodes
1;special;;;
2;statement;int ans = 0;14;
3;statement;int length = 1;15;
4;conditional;foo_1 <= fun_1(foo_2);16;
5;statement;int height = foo_1;17;
6;conditional;(foo_1 * foo_2) <= foo_3;18;
7;statement;ans++;19;
8;statement;++height;19;
9;statement;++length;17;
10;statement;return foo_1;20;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;10;
4;6;
5;7;9;
6;8;
7;6;
8;4;
9;11;
10;
