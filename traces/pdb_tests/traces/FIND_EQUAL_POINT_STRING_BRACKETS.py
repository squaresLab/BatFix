Statement: l = len ( str )
Line: 8
str = "(())))("

Statement: open = [ None ] * ( l + 1 )
Line: 9
str = "(())))("
l = 7

Statement: close = [ None ] * ( l + 1 )
Line: 10
str = "(())))("
l = 7
open = { None, None, None, None, None, None, None, None }

Statement: index = - 1
Line: 11
str = "(())))("
l = 7
open = { None, None, None, None, None, None, None, None }
close = { None, None, None, None, None, None, None, None }

Statement: open [ 0 ] = 0
Line: 12
str = "(())))("
l = 7
open = { None, None, None, None, None, None, None, None }
close = { None, None, None, None, None, None, None, None }
index = -1

Statement: close [ l ] = 0
Line: 13
str = "(())))("
l = 7
open = { 0, None, None, None, None, None, None, None }
close = { None, None, None, None, None, None, None, None }
index = -1

Statement: if ( str [ 0 ] == '(' ) :
Line: 14
str = "(())))("
l = 7
open = { 0, None, None, None, None, None, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1

Statement: open [ 1 ] = 1
Line: 15
str = "(())))("
l = 7
open = { 0, None, None, None, None, None, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1

Statement: if ( str [ l - 1 ] == ')' ) :
Line: 16
str = "(())))("
l = 7
open = { 0, 1, None, None, None, None, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1

Statement: for i in range ( 1 , l ) :
Line: 18
str = "(())))("
l = 7
open = { 0, 1, None, None, None, None, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1

Statement: if ( str [ i ] == '(' ) :
Line: 19
str = "(())))("
l = 7
open = { 0, 1, None, None, None, None, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 1

Statement: open [ i + 1 ] = open [ i ] + 1
Line: 20
str = "(())))("
l = 7
open = { 0, 1, None, None, None, None, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 1

Statement: for i in range ( 1 , l ) :
Line: 18
str = "(())))("
l = 7
open = { 0, 1, 2, None, None, None, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 1

Statement: if ( str [ i ] == '(' ) :
Line: 19
str = "(())))("
l = 7
open = { 0, 1, 2, None, None, None, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 2

Statement: open [ i + 1 ] = open [ i ]
Line: 22
str = "(())))("
l = 7
open = { 0, 1, 2, None, None, None, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 2

Statement: for i in range ( 1 , l ) :
Line: 18
str = "(())))("
l = 7
open = { 0, 1, 2, 2, None, None, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 2

Statement: if ( str [ i ] == '(' ) :
Line: 19
str = "(())))("
l = 7
open = { 0, 1, 2, 2, None, None, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 3

Statement: open [ i + 1 ] = open [ i ]
Line: 22
str = "(())))("
l = 7
open = { 0, 1, 2, 2, None, None, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 3

Statement: for i in range ( 1 , l ) :
Line: 18
str = "(())))("
l = 7
open = { 0, 1, 2, 2, 2, None, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 3

Statement: if ( str [ i ] == '(' ) :
Line: 19
str = "(())))("
l = 7
open = { 0, 1, 2, 2, 2, None, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 4

Statement: open [ i + 1 ] = open [ i ]
Line: 22
str = "(())))("
l = 7
open = { 0, 1, 2, 2, 2, None, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 4

Statement: for i in range ( 1 , l ) :
Line: 18
str = "(())))("
l = 7
open = { 0, 1, 2, 2, 2, 2, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 4

Statement: if ( str [ i ] == '(' ) :
Line: 19
str = "(())))("
l = 7
open = { 0, 1, 2, 2, 2, 2, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 5

Statement: open [ i + 1 ] = open [ i ]
Line: 22
str = "(())))("
l = 7
open = { 0, 1, 2, 2, 2, 2, None, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 5

Statement: for i in range ( 1 , l ) :
Line: 18
str = "(())))("
l = 7
open = { 0, 1, 2, 2, 2, 2, 2, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 5

Statement: if ( str [ i ] == '(' ) :
Line: 19
str = "(())))("
l = 7
open = { 0, 1, 2, 2, 2, 2, 2, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 6

Statement: open [ i + 1 ] = open [ i ] + 1
Line: 20
str = "(())))("
l = 7
open = { 0, 1, 2, 2, 2, 2, 2, None }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 6

Statement: for i in range ( 1 , l ) :
Line: 18
str = "(())))("
l = 7
open = { 0, 1, 2, 2, 2, 2, 2, 3 }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 6

Statement: for i in range ( l - 2 , - 1 , - 1 ) :
Line: 23
str = "(())))("
l = 7
open = { 0, 1, 2, 2, 2, 2, 2, 3 }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 6

Statement: if ( str [ i ] == ')' ) :
Line: 24
str = "(())))("
l = 7
open = { 0, 1, 2, 2, 2, 2, 2, 3 }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 5

Statement: close [ i ] = close [ i + 1 ] + 1
Line: 25
str = "(())))("
l = 7
open = { 0, 1, 2, 2, 2, 2, 2, 3 }
close = { None, None, None, None, None, None, None, 0 }
index = -1
i = 5
