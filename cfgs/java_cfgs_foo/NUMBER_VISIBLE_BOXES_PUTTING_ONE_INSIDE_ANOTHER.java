Nodes
1;special;;;
2;statement;Queue<Integer> q = new LinkedList<>();14;
3;statement;fun_1(foo_1);15;
4;statement;fun_1(foo_2[0]);16;
5;statement;int i = 1;17;
6;conditional;foo_1 < foo_2;18;
7;statement;int now = fun_1();20;
8;conditional;foo_1[foo_2] >= (2 * foo_3);21;
9;statement;fun_1();21;
10;statement;fun_1(foo_2[foo_3]);22;
11;statement;i++;19;
12;statement;return fun_1();24;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;12;
6;8;
7;9;10;
8;10;
9;11;
10;6;
11;13;
12;
