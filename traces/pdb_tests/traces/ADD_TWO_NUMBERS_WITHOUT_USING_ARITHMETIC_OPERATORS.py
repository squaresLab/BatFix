Statement: while ( y != 0 ) :
Line: 8
x = 56
y = 60

Statement: carry = x & y
Line: 9
x = 56
y = 60

Statement: x = x ^ y
Line: 10
x = 56
y = 60
carry = 56

Statement: y = carry << 1
Line: 11
x = 4
y = 60
carry = 56

Statement: while ( y != 0 ) :
Line: 8
x = 4
y = 112
carry = 56

Statement: carry = x & y
Line: 9
x = 4
y = 112
carry = 56

Statement: x = x ^ y
Line: 10
x = 4
y = 112
carry = 0

Statement: y = carry << 1
Line: 11
x = 116
y = 112
carry = 0

Statement: while ( y != 0 ) :
Line: 8
x = 116
y = 0
carry = 0

Statement: return x
Line: 12
x = 116
y = 0
carry = 0

Statement: return x
Line: 12
x = 116
y = 0
carry = 0
__return__ = 116
