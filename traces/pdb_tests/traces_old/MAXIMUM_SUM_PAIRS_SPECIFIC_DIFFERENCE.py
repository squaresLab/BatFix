Statement: arr.sort ( )
Line: 8
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4

Statement: dp = [ 0 ] * N
Line: 9
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4

Statement: dp [ 0 ] = 0
Line: 0
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 0, 0]

Statement: for i in range ( 1 , N ) :
Line: 1
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 0, 0]

Statement: dp [ i ] = dp [ i - 1 ]
Line: 2
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 0, 0]
i = 1

Statement: if ( arr [ i ] - arr [ i - 1 ] < K ) :
Line: 3
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 0, 0]
i = 1

Statement: for i in range ( 1 , N ) :
Line: 1
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 0, 0]
i = 1

Statement: dp [ i ] = dp [ i - 1 ]
Line: 2
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 0, 0]
i = 2

Statement: if ( arr [ i ] - arr [ i - 1 ] < K ) :
Line: 3
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 0, 0]
i = 2

Statement: for i in range ( 1 , N ) :
Line: 1
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 0, 0]
i = 2

Statement: dp [ i ] = dp [ i - 1 ]
Line: 2
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 0, 0]
i = 3

Statement: if ( arr [ i ] - arr [ i - 1 ] < K ) :
Line: 3
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 0, 0]
i = 3

Statement: for i in range ( 1 , N ) :
Line: 1
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 0, 0]
i = 3

Statement: dp [ i ] = dp [ i - 1 ]
Line: 2
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 0, 0]
i = 4

Statement: if ( arr [ i ] - arr [ i - 1 ] < K ) :
Line: 3
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 0, 0]
i = 4

Statement: if ( i >= 2 ) :
Line: 4
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 0, 0]
i = 4

Statement: dp [ i ] = max ( dp [ i ] , dp [ i - 2 ] + arr [ i ] + arr [ i - 1 ] ) ;
Line: 5
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 0, 0]
i = 4

Statement: for i in range ( 1 , N ) :
Line: 1
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 156, 0]
i = 4

Statement: dp [ i ] = dp [ i - 1 ]
Line: 2
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 156, 0]
i = 5

Statement: if ( arr [ i ] - arr [ i - 1 ] < K ) :
Line: 3
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 156, 156]
i = 5

Statement: for i in range ( 1 , N ) :
Line: 1
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 156, 156]
i = 5

Statement: return dp [ N - 1 ]
Line: 8
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 156, 156]
i = 5

Statement: return dp [ N - 1 ]
Line: 8
arr = [48, 53, 67, 78, 78, 93, 95]
N = 6
K = 4
dp = [0, 0, 0, 0, 156, 156]
i = 5
__return__ = 156
