Statement: profit = [ 0 ] * n
Line: 8
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20

Statement: max_price = price [ n - 1 ]
Line: 9
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
max_price = 89

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
max_price = 89
i = 18

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
max_price = 89
i = 18

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 }
max_price = 89
i = 18

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 }
max_price = 89
i = 17

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 }
max_price = 89
i = 17

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 2, 0 }
max_price = 89
i = 17

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 2, 0 }
max_price = 89
i = 16

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 2, 0 }
max_price = 89
i = 16

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 5, 2, 0 }
max_price = 89
i = 16

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 5, 2, 0 }
max_price = 89
i = 15

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 5, 2, 0 }
max_price = 89
i = 15

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 7, 5, 2, 0 }
max_price = 89
i = 15

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 7, 5, 2, 0 }
max_price = 89
i = 14

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 7, 5, 2, 0 }
max_price = 89
i = 14

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 14

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 13

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 13

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 13

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 12

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 12

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 12

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 11

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 11

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 11

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 10

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 10

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 10

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 9

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 9

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 9

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 8

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 8

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 8

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 7

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 0, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 7

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 7

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 6

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 0, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 6

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 6

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 5

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 0, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 5

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 5

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 4

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 0, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 4

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 4

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 3

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 0, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 3

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 77, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 3

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 77, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 2

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 0, 77, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 2

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 79, 77, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 2

Statement: if price [ i ] > max_price :
Line: 11
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 79, 77, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 1

Statement: profit [ i ] = max ( profit [ i + 1 ] , max_price - price [ i ] )
Line: 13
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 0, 79, 77, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 1

Statement: for i in range ( n - 2 , 0 , - 1 ) :
Line: 10
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 79, 79, 77, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 1

Statement: min_price = price [ 0 ]
Line: 14
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 79, 79, 77, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 1

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 79, 79, 77, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 1
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 79, 79, 77, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 1
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 79, 79, 77, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 1
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 79, 77, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 1
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 79, 77, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 2
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 79, 77, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 2
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 77, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 2
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 77, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 3
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 77, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 3
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 3
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 4
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 72, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 4
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 4
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 5
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 71, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 5
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 5
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 6
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 66, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 6
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 6
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 7
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 57, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 7
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 7
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 8
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 48, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 8
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 8
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 9
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 45, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 9
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 9
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 10
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 42, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 10
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 10
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 11
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 39, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 11
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 11
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 12
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 30, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 12
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 12
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 13
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 20, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 13
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 13
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 14
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 20, 14, 7, 5, 2, 0 }
max_price = 89
i = 14
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 14, 7, 5, 2, 0 }
max_price = 89
i = 14
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 14, 7, 5, 2, 0 }
max_price = 89
i = 15
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 14, 7, 5, 2, 0 }
max_price = 89
i = 15
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 7, 5, 2, 0 }
max_price = 89
i = 15
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 7, 5, 2, 0 }
max_price = 89
i = 16
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 7, 5, 2, 0 }
max_price = 89
i = 16
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 5, 2, 0 }
max_price = 89
i = 16
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 5, 2, 0 }
max_price = 89
i = 17
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 5, 2, 0 }
max_price = 89
i = 17
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 2, 0 }
max_price = 89
i = 17
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 2, 0 }
max_price = 89
i = 18
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 2, 0 }
max_price = 89
i = 18
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 0 }
max_price = 89
i = 18
min_price = 9

Statement: if price [ i ] < min_price :
Line: 16
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 0 }
max_price = 89
i = 19
min_price = 9

Statement: profit [ i ] = max ( profit [ i - 1 ] , profit [ i ] + ( price [ i ] - min_price ) )
Line: 18
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 0 }
max_price = 89
i = 19
min_price = 9

Statement: for i in range ( 1 , n ) :
Line: 15
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80 }
max_price = 89
i = 19
min_price = 9

Statement: result = profit [ n - 1 ]
Line: 19
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80 }
max_price = 89
i = 19
min_price = 9

Statement: return result
Line: 20
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80 }
max_price = 89
i = 19
min_price = 9
result = 80

Statement: return result
Line: 20
price = { 9, 10, 10, 12, 17, 18, 23, 32, 41, 44, 47, 50, 59, 69, 69, 75, 82, 84, 87, 89, 97, 99 }
n = 20
profit = { 0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80 }
max_price = 89
i = 19
min_price = 9
result = 80
__return__ = 80
