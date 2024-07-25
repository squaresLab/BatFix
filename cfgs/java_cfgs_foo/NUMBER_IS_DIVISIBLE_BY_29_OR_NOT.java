Nodes
1;special;;;
2;conditional;(foo_1 / 100) > 0;14;
3;statement;int last_digit = ((int) (foo_1)) % 10;15;
4;statement;n /= 10;16;
5;statement;n += foo_1 * 3;17;
6;statement;return (foo_1 % 29) == 0;19;
7;exit;;;
Edges
0;2;
1;6;3;
2;4;
3;5;
4;2;
5;7;
6;
