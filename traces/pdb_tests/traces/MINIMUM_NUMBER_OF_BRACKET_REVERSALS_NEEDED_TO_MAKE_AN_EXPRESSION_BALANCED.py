Statement: lenn = len ( expr )
Line: 8
expr = "}{"

Statement: if ( lenn % 2 ) :
Line: 9
expr = "}{"
lenn = 2

Statement: s = [ ]
Line: 11
expr = "}{"
lenn = 2

Statement: for i in range ( lenn ) :
Line: 12
expr = "}{"
lenn = 2
s = {  }

Statement: if ( expr [ i ] == '' and len ( s ) ) :
Line: 13
expr = "}{"
lenn = 2
s = {  }
i = 0

Statement: s.insert ( 0 , expr [ i ] )
Line: 19
expr = "}{"
lenn = 2
s = {  }
i = 0

Statement: for i in range ( lenn ) :
Line: 12
expr = "}{"
lenn = 2
s = { '}' }
i = 0

Statement: if ( expr [ i ] == '' and len ( s ) ) :
Line: 13
expr = "}{"
lenn = 2
s = { '}' }
i = 1

Statement: s.insert ( 0 , expr [ i ] )
Line: 19
expr = "}{"
lenn = 2
s = { '}' }
i = 1

Statement: for i in range ( lenn ) :
Line: 12
expr = "}{"
lenn = 2
s = { '{', '}' }
i = 1

Statement: red_len = len ( s )
Line: 20
expr = "}{"
lenn = 2
s = { '{', '}' }
i = 1

Statement: n = 0
Line: 21
expr = "}{"
lenn = 2
s = { '{', '}' }
i = 1
red_len = 2

Statement: while ( len ( s ) and s [ 0 ] == '' ) :
Line: 22
expr = "}{"
lenn = 2
s = { '{', '}' }
i = 1
red_len = 2
n = 0

Statement: return ( red_len // 2 + n % 2 )
Line: 25
expr = "}{"
lenn = 2
s = { '{', '}' }
i = 1
red_len = 2
n = 0

Statement: return ( red_len // 2 + n % 2 )
Line: 25
expr = "}{"
lenn = 2
s = { '{', '}' }
i = 1
red_len = 2
n = 0
__return__ = 1
