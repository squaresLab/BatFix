Statement: set1 = ( x >> p1 ) & ( ( 1 << n ) - 1 )
Line: 8
x = 95
p1 = 88
p2 = 97
n = 92

Statement: set2 = ( x >> p2 ) & ( ( 1 << n ) - 1 )
Line: 9
x = 95
p1 = 88
p2 = 97
n = 92
set1 = 0

Statement: xor = ( set1 ^ set2 )
Line: 0
x = 95
p1 = 88
p2 = 97
n = 92
set1 = 0
set2 = 0

Statement: xor = ( xor << p1 ) | ( xor << p2 )
Line: 1
x = 95
p1 = 88
p2 = 97
n = 92
set1 = 0
set2 = 0
xor = 0

Statement: result = x ^ xor
Line: 2
x = 95
p1 = 88
p2 = 97
n = 92
set1 = 0
set2 = 0
xor = 0

Statement: return result
Line: 3
x = 95
p1 = 88
p2 = 97
n = 92
set1 = 0
set2 = 0
xor = 0
result = 95

Statement: return result
Line: 3
x = 95
p1 = 88
p2 = 97
n = 92
set1 = 0
set2 = 0
xor = 0
result = 95
__return__ = 95

