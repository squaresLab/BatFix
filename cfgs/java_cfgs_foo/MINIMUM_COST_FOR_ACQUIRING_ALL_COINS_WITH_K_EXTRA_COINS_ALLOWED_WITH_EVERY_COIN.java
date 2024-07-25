Nodes
1;special;;;
2;statement;fun_1(foo_1);14;
3;statement;int coins_needed = ((int) (fun_1((1.0 * foo_1) / (foo_2 + 1))));15;
4;statement;int ans = 0;16;
5;statement;int i = 0;17;
6;conditional;foo_1 <= (foo_2 - 1);18;
7;statement;ans += foo_1[foo_2];19;
8;statement;i++;19;
9;statement;return foo_1;20;
10;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;9;
6;8;
7;6;
8;10;
9;
