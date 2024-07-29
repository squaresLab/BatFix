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
Line: 0
x = 45
y = 5
p = 68
res = 1

Statement: if ( ( y & 1 ) == 1 ) :
Line: 1
x = 45
y = 5
p = 68
res = 1

Statement: res = ( res * x ) % p
Line: 2
x = 45
y = 5
p = 68
res = 1

Statement: y = y >> 1
Line: 3
x = 45
y = 5
p = 68
res = 45

Statement: x = ( x * x ) % p
Line: 4
x = 45
y = 2
p = 68
res = 45

Statement: while ( y > 0 ) :
Line: 0
x = 53
y = 2
p = 68
res = 45

Statement: if ( ( y & 1 ) == 1 ) :
Line: 1
x = 53
y = 2
p = 68
res = 45

Statement: y = y >> 1
Line: 3
x = 53
y = 2
p = 68
res = 45

Statement: x = ( x * x ) % p
Line: 4
x = 53
y = 1
p = 68
res = 45

Statement: while ( y > 0 ) :
Line: 0
x = 21
y = 1
p = 68
res = 45

Statement: if ( ( y & 1 ) == 1 ) :
Line: 1
x = 21
y = 1
p = 68
res = 45

Statement: res = ( res * x ) % p
Line: 2
x = 21
y = 1
p = 68
res = 45

Statement: y = y >> 1
Line: 3
x = 21
y = 1
p = 68
res = 61

Statement: x = ( x * x ) % p
Line: 4
x = 21
y = 0
p = 68
res = 61

Statement: while ( y > 0 ) :
Line: 0
x = 33
y = 0
p = 68
res = 61

Statement: return res
Line: 5
x = 33
y = 0
p = 68
res = 61

Statement: return res
Line: 5
x = 33
y = 0
p = 68
res = 61
__return__ = 61
