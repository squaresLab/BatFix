Statement: arr = [ ]
Line: 8
S = U

Statement: arr.append ( [ '@' , - 1 ] )
Line: 9
S = U
arr = []

Statement: maxlen = 0
Line: 0
S = U
arr = [['@', -1]]

Statement: for i in range ( len ( S ) ) :
Line: 1
S = U
arr = [['@', -1]]
maxlen = 0

Statement: arr.append ( [ S [ i ] , i ] )
Line: 2
S = U
arr = [['@', -1]]
maxlen = 0
i = 0

Statement: while ( len ( arr ) >= 3 and arr [ len ( arr ) - 3 ] [ 0 ] == '1' and arr [ len ( arr ) - 2 ] [ 0 ] == '0' and arr [ len ( arr ) - 1 ] [ 0 ] == '0' ) :
Line: 3
S = U
arr = [['@', -1], ['U', 0]]
maxlen = 0
i = 0

Statement: tmp = arr [ - 1 ]
Line: 7
S = U
arr = [['@', -1], ['U', 0]]
maxlen = 0
i = 0

Statement: maxlen = max ( maxlen , i - tmp [ 1 ] )
Line: 8
S = U
arr = [['@', -1], ['U', 0]]
maxlen = 0
i = 0
tmp = ['U', 0]

Statement: for i in range ( len ( S ) ) :
Line: 1
S = U
arr = [['@', -1], ['U', 0]]
maxlen = 0
i = 0
tmp = ['U', 0]

Statement: return maxlen
Line: 9
S = U
arr = [['@', -1], ['U', 0]]
maxlen = 0
i = 0
tmp = ['U', 0]

Statement: return maxlen
Line: 9
S = U
arr = [['@', -1], ['U', 0]]
maxlen = 0
i = 0
tmp = ['U', 0]
__return__ = 0
