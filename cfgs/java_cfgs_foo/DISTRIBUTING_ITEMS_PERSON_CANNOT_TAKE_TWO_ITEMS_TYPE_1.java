Nodes
1;special;;;
2;statement;HashMap<Integer, Integer> hash = new HashMap<>();14;
3;statement;int i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;conditional;!fun_1(foo_2[foo_3]);18;
6;statement;fun_1(foo_2[foo_3], 0);18;
7;statement;fun_1(foo_2[foo_3], fun_2(foo_5[foo_6]) + 1);19;
8;statement;i++;17;
9;statement;Map.Entry x;21;
10;conditional;fun_1();21;
11;conditional;((int) (fun_1())) > (2 * foo_2);21;
12;statement;return false;21;
13;exit;;;
14;statement;return true;22;
Edges
0;2;
1;3;
2;4;
3;5;9;
4;6;7;
5;7;
6;8;
7;4;
8;10;
9;11;14;
10;12;10;
11;13;
12;
13;13;