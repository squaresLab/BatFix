Statement: res = 1
Line: 8
x = 45
y = 5
p = 68

Statement: x = x % p
Line: 9
x = 45
y = 5
p = 68
res = 1

Statement: while ( y > 0 ) :
Line: 10
x = 45
y = 5
p = 68
res = 1

Statement: if ( ( y & 1 ) == 1 ) :
Line: 11
x = 45
y = 5
p = 68
res = 1

Statement: res = ( res * x ) % p
Line: 12
x = 45
y = 5
p = 68
res = 1

Statement: y = y >> 1
Line: 13
x = 45
y = 5
p = 68
res = 45

Statement: x = ( x * x ) % p
Line: 14
x = 45
y = 2
p = 68
res = 45

Statement: while ( y > 0 ) :
Line: 10
x = 53
y = 2
p = 68
res = 45

Statement: if ( ( y & 1 ) == 1 ) :
Line: 11
x = 53
y = 2
p = 68
res = 45

Statement: y = y >> 1
Line: 13
x = 53
y = 2
p = 68
res = 45

Statement: x = ( x * x ) % p
Line: 14
x = 53
y = 1
p = 68
res = 45

Statement: while ( y > 0 ) :
Line: 10
x = 21
y = 1
p = 68
res = 45

Statement: if ( ( y & 1 ) == 1 ) :
Line: 11
x = 21
y = 1
p = 68
res = 45

Statement: res = ( res * x ) % p
Line: 12
x = 21
y = 1
p = 68
res = 45

Statement: y = y >> 1
Line: 13
x = 21
y = 1
p = 68
res = 61

Statement: x = ( x * x ) % p
Line: 14
x = 21
y = 0
p = 68
res = 61

Statement: while ( y > 0 ) :
Line: 10
x = 33
y = 0
p = 68
res = 61

Statement: return res
Line: 15
x = 33
y = 0
p = 68
res = 61

Statement: return res
Line: 15
x = 33
y = 0
p = 68
res = 61
__return__ = 61

