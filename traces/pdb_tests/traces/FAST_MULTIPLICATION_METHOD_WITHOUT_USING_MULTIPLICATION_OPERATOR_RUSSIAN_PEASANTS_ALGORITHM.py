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
Line: 10
a = 4
b = 33
res = 0

Statement: res = res + a
Line: 11
a = 4
b = 33
res = 0

Statement: a = a << 1
Line: 12
a = 4
b = 33
res = 4

Statement: b = b >> 1
Line: 13
a = 8
b = 33
res = 4

Statement: while ( b > 0 ) :
Line: 9
a = 8
b = 16
res = 4

Statement: if ( b & 1 ) :
Line: 10
a = 8
b = 16
res = 4

Statement: a = a << 1
Line: 12
a = 8
b = 16
res = 4

Statement: b = b >> 1
Line: 13
a = 16
b = 16
res = 4

Statement: while ( b > 0 ) :
Line: 9
a = 16
b = 8
res = 4

Statement: if ( b & 1 ) :
Line: 10
a = 16
b = 8
res = 4

Statement: a = a << 1
Line: 12
a = 16
b = 8
res = 4

Statement: b = b >> 1
Line: 13
a = 32
b = 8
res = 4

Statement: while ( b > 0 ) :
Line: 9
a = 32
b = 4
res = 4

Statement: if ( b & 1 ) :
Line: 10
a = 32
b = 4
res = 4

Statement: a = a << 1
Line: 12
a = 32
b = 4
res = 4

Statement: b = b >> 1
Line: 13
a = 64
b = 4
res = 4

Statement: while ( b > 0 ) :
Line: 9
a = 64
b = 2
res = 4

Statement: if ( b & 1 ) :
Line: 10
a = 64
b = 2
res = 4

Statement: a = a << 1
Line: 12
a = 64
b = 2
res = 4

Statement: b = b >> 1
Line: 13
a = 128
b = 2
res = 4

Statement: while ( b > 0 ) :
Line: 9
a = 128
b = 1
res = 4

Statement: if ( b & 1 ) :
Line: 10
a = 128
b = 1
res = 4

Statement: res = res + a
Line: 11
a = 128
b = 1
res = 4

Statement: a = a << 1
Line: 12
a = 128
b = 1
res = 132

Statement: b = b >> 1
Line: 13
a = 256
b = 1
res = 132

Statement: while ( b > 0 ) :
Line: 9
a = 256
b = 0
res = 132

Statement: return res
Line: 14
a = 256
b = 0
res = 132

Statement: return res
Line: 14
a = 256
b = 0
res = 132
__return__ = 132

