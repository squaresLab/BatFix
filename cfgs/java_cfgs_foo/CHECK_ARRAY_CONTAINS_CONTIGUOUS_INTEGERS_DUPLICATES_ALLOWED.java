Nodes
1;special;;;
2;statement;int max = Integer.MIN_VALUE;14;
3;statement;int min = Integer.MAX_VALUE;15;
4;statement;int i = 0;16;
5;conditional;foo_1 < foo_2;17;
6;statement;max = fun_1(foo_1, foo_2[foo_3]);19;
7;statement;min = fun_1(foo_1, foo_2[foo_3]);20;
8;statement;i++;18;
9;statement;int m = (foo_1 - foo_2) + 1;22;
10;conditional;foo_1 > foo_2;23;
11;statement;return false;23;
12;exit;;;
13;statement;boolean[] visited = new boolean[foo_1];24;
14;statement;int i = 0;25;
15;conditional;foo_1 < foo_2;26;
16;statement;foo_1[foo_2[foo_3] - foo_4] = true;27;
17;statement;i++;27;
18;statement;int i = 0;28;
19;conditional;foo_1 < foo_2;29;
20;conditional;foo_1[foo_2] == false;30;
21;statement;return false;30;
22;statement;i++;30;
23;statement;return true;31;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;9;
5;7;
6;8;
7;5;
8;10;
9;11;13;
10;12;
11;
12;14;
13;15;
14;16;18;
15;17;
16;15;
17;19;
18;20;23;
19;21;22;
20;12;
21;19;
22;12;