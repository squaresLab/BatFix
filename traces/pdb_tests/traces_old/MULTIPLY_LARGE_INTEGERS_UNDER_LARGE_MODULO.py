Statement: res = 0 ;
Line: 8
a = 60
b = 24
mod = 58

Statement: a = a % mod ;
Line: 9
a = 60
b = 24
mod = 58
res = 0

Statement: while ( b ) :
Line: 0
a = 2
b = 24
mod = 58
res = 0

Statement: if ( b & 1 ) :
Line: 1
a = 2
b = 24
mod = 58
res = 0

Statement: a = ( 2 * a ) % mod ;
Line: 3
a = 2
b = 24
mod = 58
res = 0

Statement: b >>= 1 ;
Line: 4
a = 4
b = 24
mod = 58
res = 0

Statement: while ( b ) :
Line: 0
a = 4
b = 12
mod = 58
res = 0

Statement: if ( b & 1 ) :
Line: 1
a = 4
b = 12
mod = 58
res = 0

Statement: a = ( 2 * a ) % mod ;
Line: 3
a = 4
b = 12
mod = 58
res = 0

Statement: b >>= 1 ;
Line: 4
a = 8
b = 12
mod = 58
res = 0

Statement: while ( b ) :
Line: 0
a = 8
b = 6
mod = 58
res = 0

Statement: if ( b & 1 ) :
Line: 1
a = 8
b = 6
mod = 58
res = 0

Statement: a = ( 2 * a ) % mod ;
Line: 3
a = 8
b = 6
mod = 58
res = 0

Statement: b >>= 1 ;
Line: 4
a = 16
b = 6
mod = 58
res = 0

Statement: while ( b ) :
Line: 0
a = 16
b = 3
mod = 58
res = 0

Statement: if ( b & 1 ) :
Line: 1
a = 16
b = 3
mod = 58
res = 0

Statement: res = ( res + a ) % mod ;
Line: 2
a = 16
b = 3
mod = 58
res = 0

Statement: a = ( 2 * a ) % mod ;
Line: 3
a = 16
b = 3
mod = 58
res = 16

Statement: b >>= 1 ;
Line: 4
a = 32
b = 3
mod = 58
res = 16

Statement: while ( b ) :
Line: 0
a = 32
b = 1
mod = 58
res = 16

Statement: if ( b & 1 ) :
Line: 1
a = 32
b = 1
mod = 58
res = 16

Statement: res = ( res + a ) % mod ;
Line: 2
a = 32
b = 1
mod = 58
res = 16

Statement: a = ( 2 * a ) % mod ;
Line: 3
a = 32
b = 1
mod = 58
res = 48

Statement: b >>= 1 ;
Line: 4
a = 6
b = 1
mod = 58
res = 48

Statement: while ( b ) :
Line: 0
a = 6
b = 0
mod = 58
res = 48

Statement: return res ;
Line: 5
a = 6
b = 0
mod = 58
res = 48

Statement: return res ;
Line: 5
a = 6
b = 0
mod = 58
res = 48
__return__ = 48
