Nodes
1;special;;;
2;statement;Queue<Integer> input = new LinkedList<>();14;
3;statement;int i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;statement;fun_1(foo_2[foo_3]);18;
6;statement;i++;17;
7;statement;Queue<Integer> output = new LinkedList<>();20;
8;statement;int i = 0;21;
9;conditional;foo_1 < foo_2;22;
10;statement;fun_1(foo_2[foo_3]);24;
11;statement;i++;23;
12;statement;Stack<Integer> tempStack = new Stack<>();26;
13;conditional;!fun_1();27;
14;statement;int ele = fun_1();28;
15;conditional;foo_1 == fun_1();29;
16;statement;fun_1();30;
17;conditional;!fun_1();31;
18;conditional;fun_1() == fun_2();32;
19;statement;fun_1();33;
20;statement;fun_1();34;
21;statement;break;36;
22;statement;fun_1(foo_2);40;
23;statement;return fun_1() && fun_2();43;
24;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;4;
6;8;
7;9;
8;10;12;
9;11;
10;9;
11;13;
12;23;14;
13;15;
14;16;22;
15;17;
16;13;18;
17;19;21;
18;20;
19;17;
20;13;
21;13;
22;24;
23;
