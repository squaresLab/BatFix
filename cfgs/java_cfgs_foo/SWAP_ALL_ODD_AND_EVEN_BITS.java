Nodes
1;special;;;
2;statement;int even_bits = foo_1 & 0xaaaaaaaa;14;
3;statement;int odd_bits = foo_1 & 0x55555555;15;
4;statement;even_bits >>= 1;16;
5;statement;odd_bits <<= 1;17;
6;statement;return foo_1 | foo_2;18;
7;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;
