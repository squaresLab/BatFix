Nodes
1;special;;;
2;statement;int max_so_far = Integer.MIN_VALUE;14;
3;statement;int max_ending_here = 0;14;
4;statement;int start = 0;14;
5;statement;int end = 0;14;
6;statement;int s = 0;14;
7;statement;int i = 0;15;
8;conditional;foo_1 < foo_2;16;
9;statement;max_ending_here += foo_1[foo_2];18;
10;conditional;foo_1 < foo_2;19;
11;statement;max_so_far = foo_1;20;
12;statement;start = foo_1;21;
13;statement;end = foo_1;22;
14;conditional;foo_1 < 0;24;
15;statement;max_ending_here = 0;25;
16;statement;s = foo_1 + 1;26;
17;statement;i++;17;
18;statement;return (foo_1 - foo_2) + 1;29;
19;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;
7;9;18;
8;10;
9;11;14;
10;12;
11;13;
12;14;
13;15;17;
14;16;
15;17;
16;8;
17;19;
18;