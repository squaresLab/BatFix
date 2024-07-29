Nodes
1;conditional;foo_1 > foo_2;8;
2;conditional;foo_1 > foo_2;16;
3;conditional;foo_1 > foo_2;18;
4;statement;return foo_1;21;
5;statement;return foo_1;19;
6;statement;return foo_1;17;
7;conditional;foo_1 > foo_2;9;
8;conditional;foo_1 > foo_2;11;
9;statement;return foo_1;14;
10;statement;return foo_1;12;
11;statement;return foo_1;10;
12;exit;;
Edges
0;2;7;
1;3;6;
2;4;5;
3;12;
4;12;
5;12;
6;8;11;
7;9;10;
8;12;
9;12;
10;12;
11;
