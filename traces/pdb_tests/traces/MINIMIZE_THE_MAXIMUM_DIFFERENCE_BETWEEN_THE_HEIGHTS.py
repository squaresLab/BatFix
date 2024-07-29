Statement: if ( n == 1 ) :
Line: 8
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13

Statement: arr.sort ( )
Line: 10
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13

Statement: ans = arr [ n - 1 ] - arr [ 0 ]
Line: 11
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13

Statement: small = arr [ 0 ] + k
Line: 12
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33

Statement: big = arr [ n - 1 ] - k
Line: 13
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44

Statement: if ( small > big ) :
Line: 14
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 51

Statement: for i in range ( 1 , n - 1 ) :
Line: 16
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 51

Statement: subtract = arr [ i ] - k
Line: 17
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 51
i = 1

Statement: add = arr [ i ] + k
Line: 18
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 51
i = 1
subtract = 20

Statement: if ( subtract >= small or add <= big ) :
Line: 19
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 51
i = 1
subtract = 20
add = 46

Statement: continue
Line: 20
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 51
i = 1
subtract = 20
add = 46

Statement: for i in range ( 1 , n - 1 ) :
Line: 16
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 51
i = 1
subtract = 20
add = 46

Statement: subtract = arr [ i ] - k
Line: 17
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 51
i = 2
subtract = 20
add = 46

Statement: add = arr [ i ] + k
Line: 18
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 51
i = 2
subtract = 27
add = 46

Statement: if ( subtract >= small or add <= big ) :
Line: 19
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 51
i = 2
subtract = 27
add = 53

Statement: if ( big - subtract <= add - small ) :
Line: 21
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 51
i = 2
subtract = 27
add = 53

Statement: big = add
Line: 24
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 51
i = 2
subtract = 27
add = 53

Statement: for i in range ( 1 , n - 1 ) :
Line: 16
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 53
i = 2
subtract = 27
add = 53

Statement: subtract = arr [ i ] - k
Line: 17
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 53
i = 3
subtract = 27
add = 53

Statement: add = arr [ i ] + k
Line: 18
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 53
i = 3
subtract = 30
add = 53

Statement: if ( subtract >= small or add <= big ) :
Line: 19
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 53
i = 3
subtract = 30
add = 56

Statement: if ( big - subtract <= add - small ) :
Line: 21
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 53
i = 3
subtract = 30
add = 56

Statement: big = add
Line: 24
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 53
i = 3
subtract = 30
add = 56

Statement: for i in range ( 1 , n - 1 ) :
Line: 16
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 56
i = 3
subtract = 30
add = 56

Statement: subtract = arr [ i ] - k
Line: 17
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 56
i = 4
subtract = 30
add = 56

Statement: add = arr [ i ] + k
Line: 18
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 56
i = 4
subtract = 31
add = 56

Statement: if ( subtract >= small or add <= big ) :
Line: 19
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 56
i = 4
subtract = 31
add = 57

Statement: if ( big - subtract <= add - small ) :
Line: 21
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 56
i = 4
subtract = 31
add = 57

Statement: big = add
Line: 24
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 56
i = 4
subtract = 31
add = 57

Statement: for i in range ( 1 , n - 1 ) :
Line: 16
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 57
i = 4
subtract = 31
add = 57

Statement: subtract = arr [ i ] - k
Line: 17
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 57
i = 5
subtract = 31
add = 57

Statement: add = arr [ i ] + k
Line: 18
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 57
i = 5
subtract = 38
add = 57

Statement: if ( subtract >= small or add <= big ) :
Line: 19
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 57
i = 5
subtract = 38
add = 64

Statement: if ( big - subtract <= add - small ) :
Line: 21
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 57
i = 5
subtract = 38
add = 64

Statement: small = subtract
Line: 22
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 44
big = 57
i = 5
subtract = 38
add = 64

Statement: for i in range ( 1 , n - 1 ) :
Line: 16
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 38
big = 57
i = 5
subtract = 38
add = 64

Statement: subtract = arr [ i ] - k
Line: 17
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 38
big = 57
i = 6
subtract = 38
add = 64

Statement: add = arr [ i ] + k
Line: 18
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 38
big = 57
i = 6
subtract = 39
add = 64

Statement: if ( subtract >= small or add <= big ) :
Line: 19
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 38
big = 57
i = 6
subtract = 39
add = 65

Statement: for i in range ( 1 , n - 1 ) :
Line: 16
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 38
big = 57
i = 6
subtract = 39
add = 65

Statement: subtract = arr [ i ] - k
Line: 17
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 38
big = 57
i = 7
subtract = 39
add = 65

Statement: add = arr [ i ] + k
Line: 18
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 38
big = 57
i = 7
subtract = 43
add = 65

Statement: if ( subtract >= small or add <= big ) :
Line: 19
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 38
big = 57
i = 7
subtract = 43
add = 69

Statement: for i in range ( 1 , n - 1 ) :
Line: 16
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 38
big = 57
i = 7
subtract = 43
add = 69

Statement: subtract = arr [ i ] - k
Line: 17
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 38
big = 57
i = 8
subtract = 43
add = 69

Statement: add = arr [ i ] + k
Line: 18
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 38
big = 57
i = 8
subtract = 47
add = 69

Statement: if ( subtract >= small or add <= big ) :
Line: 19
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 38
big = 57
i = 8
subtract = 47
add = 73

Statement: for i in range ( 1 , n - 1 ) :
Line: 16
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 38
big = 57
i = 8
subtract = 47
add = 73

Statement: return min ( ans , big - small )
Line: 25
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 38
big = 57
i = 8
subtract = 47
add = 73

Statement: return min ( ans , big - small )
Line: 25
arr = { 31, 33, 40, 43, 44, 51, 52, 56, 60, 64, 66, 79, 91, 93, 99 }
n = 10
k = 13
ans = 33
small = 38
big = 57
i = 8
subtract = 47
add = 73
__return__ = 19
