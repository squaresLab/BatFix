Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo_1;9;
3;statement;return foo_1;12;
4;statement;foo_1 += foo_2 & 1;10;
5;statement;foo_1 >>= 1;11;
6;exit;;
Edges
0;2;
1;3;4;
2;6;
3;5;
4;2;
5;