Statement: res = 0
Line: 8
a = 4
b = 33

Statement: while ( b > 0 ) :
Line: 9
a = 4
b = 33
res = 0

Statement: if ( b & 1 ) :
Line: 0
a = 4
b = 33
res = 0

Statement: res = res + a
Line: 1
a = 4
b = 33
res = 0

Statement: a = a << 1
Line: 2
a = 4
b = 33
res = 4

Statement: b = b >> 1
Line: 3
a = 8
b = 33
res = 4

Statement: while ( b > 0 ) :
Line: 9
a = 8
b = 16
res = 4

Statement: if ( b & 1 ) :
Line: 0
a = 8
b = 16
res = 4

Statement: a = a << 1
Line: 2
a = 8
b = 16
res = 4

Statement: b = b >> 1
Line: 3
a = 16
b = 16
res = 4

Statement: while ( b > 0 ) :
Line: 9
a = 16
b = 8
res = 4

Statement: if ( b & 1 ) :
Line: 0
a = 16
b = 8
res = 4

Statement: a = a << 1
Line: 2
a = 16
b = 8
res = 4

Statement: b = b >> 1
Line: 3
a = 32
b = 8
res = 4

Statement: while ( b > 0 ) :
Line: 9
a = 32
b = 4
res = 4

Statement: if ( b & 1 ) :
Line: 0
a = 32
b = 4
res = 4

Statement: a = a << 1
Line: 2
a = 32
b = 4
res = 4

Statement: b = b >> 1
Line: 3
a = 64
b = 4
res = 4

Statement: while ( b > 0 ) :
Line: 9
a = 64
b = 2
res = 4

Statement: if ( b & 1 ) :
Line: 0
a = 64
b = 2
res = 4

Statement: a = a << 1
Line: 2
a = 64
b = 2
res = 4

Statement: b = b >> 1
Line: 3
a = 128
b = 2
res = 4

Statement: while ( b > 0 ) :
Line: 9
a = 128
b = 1
res = 4

Statement: if ( b & 1 ) :
Line: 0
a = 128
b = 1
res = 4

Statement: res = res + a
Line: 1
a = 128
b = 1
res = 4

Statement: a = a << 1
Line: 2
a = 128
b = 1
res = 132

Statement: b = b >> 1
Line: 3
a = 256
b = 1
res = 132

Statement: while ( b > 0 ) :
Line: 9
a = 256
b = 0
res = 132

Statement: return res
Line: 4
a = 256
b = 0
res = 132

Statement: return res
Line: 4
a = 256
b = 0
res = 132
__return__ = 132

