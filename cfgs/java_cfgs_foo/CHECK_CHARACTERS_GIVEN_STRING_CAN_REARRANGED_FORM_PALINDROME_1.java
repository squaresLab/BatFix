Nodes
1;special;;;
2;statement;List<Character> list = new ArrayList<Character>();14;
3;statement;int i = 0;15;
4;conditional;foo_1 < fun_1();16;
5;conditional;fun_1(fun_2(foo_3));18;
6;statement;fun_1(((Character) (fun_2(foo_3))));18;
7;statement;fun_1(fun_2(foo_3));19;
8;statement;i++;17;
9;conditional;(((fun_1() % 2) == 0) && fun_2()) || (((fun_3() % 2) == 1) && (fun_4() == 1));21;
10;statement;return true;21;
11;exit;;;
12;statement;return false;22;
Edges
0;2;
1;3;
2;4;
3;5;9;
4;6;7;
5;8;
6;8;
7;4;
8;10;12;
9;11;
10;
11;11;
