Statement: dp = [ [ 0 for i in range ( m + 1 ) ] for j in range ( n + 1 ) ]
Line: 8
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3

Statement: for i in range ( 1 , n + 1 , 1 ) :
Line: 9
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3
dp = { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }

Statement: for j in range ( i , m + 1 , 1 ) :
Line: 10
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3
dp = { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }
i = 1

Statement: dp [ i ] [ j ] = max ( ( dp [ i - 1 ] [ j - 1 ] + ( A [ j - 1 ] * B [ i - 1 ] ) ) , dp [ i ] [ j - 1 ] )
Line: 11
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3
dp = { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }
i = 1
j = 1

Statement: for j in range ( i , m + 1 , 1 ) :
Line: 10
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3
dp = { 0, 0, 0, 0 }, { 0, 98, 0, 0 }, { 0, 0, 0, 0 }
i = 1
j = 1

Statement: dp [ i ] [ j ] = max ( ( dp [ i - 1 ] [ j - 1 ] + ( A [ j - 1 ] * B [ i - 1 ] ) ) , dp [ i ] [ j - 1 ] )
Line: 11
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3
dp = { 0, 0, 0, 0 }, { 0, 98, 0, 0 }, { 0, 0, 0, 0 }
i = 1
j = 2

Statement: for j in range ( i , m + 1 , 1 ) :
Line: 10
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3
dp = { 0, 0, 0, 0 }, { 0, 98, 126, 0 }, { 0, 0, 0, 0 }
i = 1
j = 2

Statement: dp [ i ] [ j ] = max ( ( dp [ i - 1 ] [ j - 1 ] + ( A [ j - 1 ] * B [ i - 1 ] ) ) , dp [ i ] [ j - 1 ] )
Line: 11
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3
dp = { 0, 0, 0, 0 }, { 0, 98, 126, 0 }, { 0, 0, 0, 0 }
i = 1
j = 3

Statement: for j in range ( i , m + 1 , 1 ) :
Line: 10
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3
dp = { 0, 0, 0, 0 }, { 0, 98, 126, 308 }, { 0, 0, 0, 0 }
i = 1
j = 3

Statement: for i in range ( 1 , n + 1 , 1 ) :
Line: 9
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3
dp = { 0, 0, 0, 0 }, { 0, 98, 126, 308 }, { 0, 0, 0, 0 }
i = 1
j = 3

Statement: for j in range ( i , m + 1 , 1 ) :
Line: 10
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3
dp = { 0, 0, 0, 0 }, { 0, 98, 126, 308 }, { 0, 0, 0, 0 }
i = 2
j = 3

Statement: dp [ i ] [ j ] = max ( ( dp [ i - 1 ] [ j - 1 ] + ( A [ j - 1 ] * B [ i - 1 ] ) ) , dp [ i ] [ j - 1 ] )
Line: 11
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3
dp = { 0, 0, 0, 0 }, { 0, 98, 126, 308 }, { 0, 0, 0, 0 }
i = 2
j = 2

Statement: for j in range ( i , m + 1 , 1 ) :
Line: 10
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3
dp = { 0, 0, 0, 0 }, { 0, 98, 126, 308 }, { 0, 0, 296, 0 }
i = 2
j = 2

Statement: dp [ i ] [ j ] = max ( ( dp [ i - 1 ] [ j - 1 ] + ( A [ j - 1 ] * B [ i - 1 ] ) ) , dp [ i ] [ j - 1 ] )
Line: 11
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3
dp = { 0, 0, 0, 0 }, { 0, 98, 126, 308 }, { 0, 0, 296, 0 }
i = 2
j = 3

Statement: for j in range ( i , m + 1 , 1 ) :
Line: 10
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3
dp = { 0, 0, 0, 0 }, { 0, 98, 126, 308 }, { 0, 0, 296, 610 }
i = 2
j = 3

Statement: for i in range ( 1 , n + 1 , 1 ) :
Line: 9
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3
dp = { 0, 0, 0, 0 }, { 0, 98, 126, 308 }, { 0, 0, 296, 610 }
i = 2
j = 3

Statement: return dp [ n ] [ m ]
Line: 12
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3
dp = { 0, 0, 0, 0 }, { 0, 98, 126, 308 }, { 0, 0, 296, 610 }
i = 2
j = 3

Statement: return dp [ n ] [ m ]
Line: 12
A = { 7, 9, 22, 68 }
B = { 14, 22, 54, 58 }
n = 2
m = 3
dp = { 0, 0, 0, 0 }, { 0, 98, 126, 308 }, { 0, 0, 296, 610 }
i = 2
j = 3
__return__ = 610
