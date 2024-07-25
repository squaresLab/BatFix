Nodes
1;special;;;
2;statement;fun_1(foo_1, fun_2());14;
3;statement;int[] dimension = new int[]{ 0, 0 };15;
4;statement;int i = 0;17;
5;statement;int j = 0;17;
6;conditional;(foo_1 < (foo_2 - 1)) && (foo_3 < 2);18;
7;conditional;foo_1[foo_2] == foo_3[foo_4 + 1];19;
8;statement;foo_1[j++] = foo_2[i++];19;
9;statement;i++;19;
10;statement;return foo_1[0] * foo_2[1];20;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;10;
6;8;9;
7;9;
8;6;
9;11;
10;
