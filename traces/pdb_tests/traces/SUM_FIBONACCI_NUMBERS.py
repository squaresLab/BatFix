Statement: if ( n <= 0 ) :
Line: 8
n = 9

Statement: fibo = [ 0 ] * ( n + 1 )
Line: 10
n = 9

Statement: fibo [ 1 ] = 1
Line: 11
n = 9
fibo = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }

Statement: sm = fibo [ 0 ] + fibo [ 1 ]
Line: 12
n = 9
fibo = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 }

Statement: for i in range ( 2 , n + 1 ) :
Line: 13
n = 9
fibo = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 }
sm = 1

Statement: fibo [ i ] = fibo [ i - 1 ] + fibo [ i - 2 ]
Line: 14
n = 9
fibo = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 }
sm = 1
i = 2

Statement: sm = sm + fibo [ i ]
Line: 15
n = 9
fibo = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 }
sm = 1
i = 2

Statement: for i in range ( 2 , n + 1 ) :
Line: 13
n = 9
fibo = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 }
sm = 2
i = 2

Statement: fibo [ i ] = fibo [ i - 1 ] + fibo [ i - 2 ]
Line: 14
n = 9
fibo = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 }
sm = 2
i = 3

Statement: sm = sm + fibo [ i ]
Line: 15
n = 9
fibo = { 0, 1, 1, 2, 0, 0, 0, 0, 0, 0 }
sm = 2
i = 3

Statement: for i in range ( 2 , n + 1 ) :
Line: 13
n = 9
fibo = { 0, 1, 1, 2, 0, 0, 0, 0, 0, 0 }
sm = 4
i = 3

Statement: fibo [ i ] = fibo [ i - 1 ] + fibo [ i - 2 ]
Line: 14
n = 9
fibo = { 0, 1, 1, 2, 0, 0, 0, 0, 0, 0 }
sm = 4
i = 4

Statement: sm = sm + fibo [ i ]
Line: 15
n = 9
fibo = { 0, 1, 1, 2, 3, 0, 0, 0, 0, 0 }
sm = 4
i = 4

Statement: for i in range ( 2 , n + 1 ) :
Line: 13
n = 9
fibo = { 0, 1, 1, 2, 3, 0, 0, 0, 0, 0 }
sm = 7
i = 4

Statement: fibo [ i ] = fibo [ i - 1 ] + fibo [ i - 2 ]
Line: 14
n = 9
fibo = { 0, 1, 1, 2, 3, 0, 0, 0, 0, 0 }
sm = 7
i = 5

Statement: sm = sm + fibo [ i ]
Line: 15
n = 9
fibo = { 0, 1, 1, 2, 3, 5, 0, 0, 0, 0 }
sm = 7
i = 5

Statement: for i in range ( 2 , n + 1 ) :
Line: 13
n = 9
fibo = { 0, 1, 1, 2, 3, 5, 0, 0, 0, 0 }
sm = 12
i = 5

Statement: fibo [ i ] = fibo [ i - 1 ] + fibo [ i - 2 ]
Line: 14
n = 9
fibo = { 0, 1, 1, 2, 3, 5, 0, 0, 0, 0 }
sm = 12
i = 6

Statement: sm = sm + fibo [ i ]
Line: 15
n = 9
fibo = { 0, 1, 1, 2, 3, 5, 8, 0, 0, 0 }
sm = 12
i = 6

Statement: for i in range ( 2 , n + 1 ) :
Line: 13
n = 9
fibo = { 0, 1, 1, 2, 3, 5, 8, 0, 0, 0 }
sm = 20
i = 6

Statement: fibo [ i ] = fibo [ i - 1 ] + fibo [ i - 2 ]
Line: 14
n = 9
fibo = { 0, 1, 1, 2, 3, 5, 8, 0, 0, 0 }
sm = 20
i = 7

Statement: sm = sm + fibo [ i ]
Line: 15
n = 9
fibo = { 0, 1, 1, 2, 3, 5, 8, 13, 0, 0 }
sm = 20
i = 7

Statement: for i in range ( 2 , n + 1 ) :
Line: 13
n = 9
fibo = { 0, 1, 1, 2, 3, 5, 8, 13, 0, 0 }
sm = 33
i = 7

Statement: fibo [ i ] = fibo [ i - 1 ] + fibo [ i - 2 ]
Line: 14
n = 9
fibo = { 0, 1, 1, 2, 3, 5, 8, 13, 0, 0 }
sm = 33
i = 8

Statement: sm = sm + fibo [ i ]
Line: 15
n = 9
fibo = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 0 }
sm = 33
i = 8

Statement: for i in range ( 2 , n + 1 ) :
Line: 13
n = 9
fibo = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 0 }
sm = 54
i = 8

Statement: fibo [ i ] = fibo [ i - 1 ] + fibo [ i - 2 ]
Line: 14
n = 9
fibo = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 0 }
sm = 54
i = 9

Statement: sm = sm + fibo [ i ]
Line: 15
n = 9
fibo = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 }
sm = 54
i = 9

Statement: for i in range ( 2 , n + 1 ) :
Line: 13
n = 9
fibo = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 }
sm = 88
i = 9

Statement: return sm
Line: 16
n = 9
fibo = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 }
sm = 88
i = 9

Statement: return sm
Line: 16
n = 9
fibo = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 }
sm = 88
i = 9
__return__ = 88

