Nodes
1;special;;;
2;statement;boolean oneSeen = false;14;
3;statement;int i = 0;15;
4;statement;int n = fun_1();15;
5;conditional;foo_1 < foo_2;16;
6;conditional;fun_1(foo_2) == foo_3;17;
7;conditional;foo_1 == true;18;
8;statement;return false;18;
9;exit;;;
10;conditional;(foo_1 < foo_2) && (fun_1(foo_4) == foo_5);19;
11;statement;i++;19;
12;statement;oneSeen = true;20;
13;statement;i++;22;
14;statement;return true;24;
Edges
0;2;
1;3;
2;4;
3;5;
4;14;6;
5;7;13;
6;8;10;
7;9;
8;
9;12;11;
10;10;
11;5;
12;5;
13;9;