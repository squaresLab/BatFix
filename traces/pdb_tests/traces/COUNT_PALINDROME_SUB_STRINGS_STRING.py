Statement: dp = [ [ 0 for x in range ( n ) ] for y in range ( n ) ]
Line: 8
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11

Statement: P = [ [ False for x in range ( n ) ] for y in range ( n ) ]
Line: 9
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }

Statement: for i in range ( n ) :
Line: 10
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }

Statement: P [ i ] [ i ] = True
Line: 11
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 0

Statement: for i in range ( n ) :
Line: 10
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 0

Statement: P [ i ] [ i ] = True
Line: 11
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 1

Statement: for i in range ( n ) :
Line: 10
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 1

Statement: P [ i ] [ i ] = True
Line: 11
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 2

Statement: for i in range ( n ) :
Line: 10
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 2

Statement: P [ i ] [ i ] = True
Line: 11
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 3

Statement: for i in range ( n ) :
Line: 10
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 3

Statement: P [ i ] [ i ] = True
Line: 11
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 4

Statement: for i in range ( n ) :
Line: 10
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 4

Statement: P [ i ] [ i ] = True
Line: 11
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 5

Statement: for i in range ( n ) :
Line: 10
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 5

Statement: P [ i ] [ i ] = True
Line: 11
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 6

Statement: for i in range ( n ) :
Line: 10
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 6

Statement: P [ i ] [ i ] = True
Line: 11
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 7

Statement: for i in range ( n ) :
Line: 10
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 7

Statement: P [ i ] [ i ] = True
Line: 11
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 8

Statement: for i in range ( n ) :
Line: 10
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 8

Statement: P [ i ] [ i ] = True
Line: 11
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, False, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 9

Statement: for i in range ( n ) :
Line: 10
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 9

Statement: P [ i ] [ i ] = True
Line: 11
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, False }
i = 10

Statement: for i in range ( n ) :
Line: 10
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 10

Statement: for i in range ( n - 1 ) :
Line: 12
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 10

Statement: if ( str [ i ] == str [ i + 1 ] ) :
Line: 13
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0

Statement: P [ i ] [ i + 1 ] = True
Line: 14
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, False, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0

Statement: dp [ i ] [ i + 1 ] = 1
Line: 15
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0

Statement: for i in range ( n - 1 ) :
Line: 12
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0

Statement: if ( str [ i ] == str [ i + 1 ] ) :
Line: 13
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1

Statement: for i in range ( n - 1 ) :
Line: 12
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1

Statement: if ( str [ i ] == str [ i + 1 ] ) :
Line: 13
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2

Statement: for i in range ( n - 1 ) :
Line: 12
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2

Statement: if ( str [ i ] == str [ i + 1 ] ) :
Line: 13
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3

Statement: for i in range ( n - 1 ) :
Line: 12
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3

Statement: if ( str [ i ] == str [ i + 1 ] ) :
Line: 13
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4

Statement: for i in range ( n - 1 ) :
Line: 12
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4

Statement: if ( str [ i ] == str [ i + 1 ] ) :
Line: 13
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5

Statement: for i in range ( n - 1 ) :
Line: 12
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5

Statement: if ( str [ i ] == str [ i + 1 ] ) :
Line: 13
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6

Statement: for i in range ( n - 1 ) :
Line: 12
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6

Statement: if ( str [ i ] == str [ i + 1 ] ) :
Line: 13
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 7

Statement: for i in range ( n - 1 ) :
Line: 12
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 7

Statement: if ( str [ i ] == str [ i + 1 ] ) :
Line: 13
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 8

Statement: for i in range ( n - 1 ) :
Line: 12
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 8

Statement: if ( str [ i ] == str [ i + 1 ] ) :
Line: 13
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 9

Statement: for i in range ( n - 1 ) :
Line: 12
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 9

Statement: for gap in range ( 2 , n ) :
Line: 16
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 9

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 9
gap = 2

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 2

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 2
j = 2

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 2
j = 2

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 2
j = 2

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 2
j = 2

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 2
j = 2

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 2
j = 3

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 2
j = 3

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 2
j = 3

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 2
j = 3

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 2
j = 3

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 2
j = 4

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 2
j = 4

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 2
j = 4

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 2
j = 4

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 2
j = 4

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 2
j = 5

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 2
j = 5

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 2
j = 5

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 2
j = 5

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 2
j = 5

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 2
j = 6

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 2
j = 6

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 2
j = 6

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 2
j = 6

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 2
j = 6

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 2
j = 7

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 2
j = 7

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 2
j = 7

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 2
j = 7

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6
gap = 2
j = 7

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6
gap = 2
j = 8

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6
gap = 2
j = 8

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6
gap = 2
j = 8

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6
gap = 2
j = 8

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 7
gap = 2
j = 8

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 7
gap = 2
j = 9

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 7
gap = 2
j = 9

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 7
gap = 2
j = 9

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 7
gap = 2
j = 9

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 8
gap = 2
j = 9

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 8
gap = 2
j = 10

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 8
gap = 2
j = 10

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 8
gap = 2
j = 10

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 8
gap = 2
j = 10

Statement: for gap in range ( 2 , n ) :
Line: 16
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 8
gap = 2
j = 10

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 8
gap = 3
j = 10

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 3
j = 10

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 3
j = 3

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 3
j = 3

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 3
j = 3

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 3
j = 3

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 3
j = 3

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 3
j = 4

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 3
j = 4

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 3
j = 4

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 3
j = 4

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 3
j = 4

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 3
j = 5

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 3
j = 5

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 3
j = 5

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 3
j = 5

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 3
j = 5

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 3
j = 6

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 3
j = 6

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 3
j = 6

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 3
j = 6

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 3
j = 6

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 3
j = 7

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 3
j = 7

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 3
j = 7

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 3
j = 7

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 3
j = 7

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 3
j = 8

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 3
j = 8

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 3
j = 8

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 3
j = 8

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6
gap = 3
j = 8

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6
gap = 3
j = 9

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6
gap = 3
j = 9

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6
gap = 3
j = 9

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6
gap = 3
j = 9

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 7
gap = 3
j = 9

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 7
gap = 3
j = 10

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 7
gap = 3
j = 10

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 7
gap = 3
j = 10

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 7
gap = 3
j = 10

Statement: for gap in range ( 2 , n ) :
Line: 16
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 7
gap = 3
j = 10

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 7
gap = 4
j = 10

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 4
j = 10

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 4
j = 4

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 4
j = 4

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 4
j = 4

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 4
j = 4

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 4
j = 4

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 4
j = 5

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 4
j = 5

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 4
j = 5

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 4
j = 5

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 4
j = 5

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 4
j = 6

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 4
j = 6

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 4
j = 6

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 4
j = 6

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 4
j = 6

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 4
j = 7

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 4
j = 7

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 4
j = 7

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 4
j = 7

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 4
j = 7

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 4
j = 8

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 4
j = 8

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 4
j = 8

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 4
j = 8

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 4
j = 8

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 4
j = 9

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 4
j = 9

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 4
j = 9

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 4
j = 9

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6
gap = 4
j = 9

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6
gap = 4
j = 10

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6
gap = 4
j = 10

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6
gap = 4
j = 10

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6
gap = 4
j = 10

Statement: for gap in range ( 2 , n ) :
Line: 16
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6
gap = 4
j = 10

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 6
gap = 5
j = 10

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 5
j = 10

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 5
j = 5

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 5
j = 5

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 5
j = 5

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 5
j = 5

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 5
j = 5

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 5
j = 6

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 5
j = 6

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 5
j = 6

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 5
j = 6

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 5
j = 6

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 5
j = 7

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 5
j = 7

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 5
j = 7

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 5
j = 7

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 5
j = 7

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 5
j = 8

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 5
j = 8

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 5
j = 8

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 5
j = 8

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 5
j = 8

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 5
j = 9

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 5
j = 9

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 5
j = 9

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 5
j = 9

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 5
j = 9

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 5
j = 10

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 5
j = 10

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 5
j = 10

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 5
j = 10

Statement: for gap in range ( 2 , n ) :
Line: 16
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 5
j = 10

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 5
gap = 6
j = 10

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 6
j = 10

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 6
j = 6

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 6
j = 6

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 6
j = 6

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 6
j = 6

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 6
j = 6

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 6
j = 7

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 6
j = 7

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 6
j = 7

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 6
j = 7

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 6
j = 7

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 6
j = 8

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 6
j = 8

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 6
j = 8

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 6
j = 8

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 6
j = 8

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 6
j = 9

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 6
j = 9

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 6
j = 9

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 6
j = 9

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 6
j = 9

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 6
j = 10

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 6
j = 10

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 6
j = 10

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 6
j = 10

Statement: for gap in range ( 2 , n ) :
Line: 16
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 6
j = 10

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 4
gap = 7
j = 10

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 7
j = 10

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 7
j = 7

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 7
j = 7

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 7
j = 7

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 7
j = 7

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 7
j = 7

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 7
j = 8

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 7
j = 8

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 7
j = 8

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 7
j = 8

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 7
j = 8

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 7
j = 9

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 7
j = 9

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 7
j = 9

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 7
j = 9

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 7
j = 9

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 7
j = 10

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 7
j = 10

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 7
j = 10

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 7
j = 10

Statement: for gap in range ( 2 , n ) :
Line: 16
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 7
j = 10

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 3
gap = 8
j = 10

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 8
j = 10

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 8
j = 8

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 8
j = 8

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 8
j = 8

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 8
j = 8

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 8
j = 8

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 8
j = 9

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 8
j = 9

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 8
j = 9

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 8
j = 9

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 8
j = 9

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 8
j = 10

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 8
j = 10

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 8
j = 10

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 8
j = 10

Statement: for gap in range ( 2 , n ) :
Line: 16
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 8
j = 10

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 2
gap = 9
j = 10

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 9
j = 10

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 9
j = 9

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 9
j = 9

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 9
j = 9

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 9
j = 9

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 9
j = 9

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 9
j = 10

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 9
j = 10

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 9
j = 10

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 9
j = 10

Statement: for gap in range ( 2 , n ) :
Line: 16
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 9
j = 10

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 1
gap = 10
j = 10

Statement: j = gap + i ;
Line: 18
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 10
j = 10

Statement: if ( str [ i ] == str [ j ] and P [ i + 1 ] [ j - 1 ] ) :
Line: 19
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 10
j = 10

Statement: if ( P [ i ] [ j ] == True ) :
Line: 21
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 10
j = 10

Statement: dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i + 1 ] [ j ] - dp [ i + 1 ] [ j - 1 ] )
Line: 24
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 10
j = 10

Statement: for i in range ( n - gap ) :
Line: 17
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 10
j = 10

Statement: for gap in range ( 2 , n ) :
Line: 16
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 10
j = 10

Statement: return dp [ 0 ] [ n - 1 ]
Line: 25
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 10
j = 10

Statement: return dp [ 0 ] [ n - 1 ]
Line: 25
str = { 'E', 'E', 'J', 'P', 'T', 'U', 'X', 'Y', 'Z', 'e', 'f', 'h', 'l', 'm', 'n', 'o', 'z' }
n = 11
dp = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
P = { True, True, False, False, False, False, False, False, False, False, False }, { False, True, False, False, False, False, False, False, False, False, False }, { False, False, True, False, False, False, False, False, False, False, False }, { False, False, False, True, False, False, False, False, False, False, False }, { False, False, False, False, True, False, False, False, False, False, False }, { False, False, False, False, False, True, False, False, False, False, False }, { False, False, False, False, False, False, True, False, False, False, False }, { False, False, False, False, False, False, False, True, False, False, False }, { False, False, False, False, False, False, False, False, True, False, False }, { False, False, False, False, False, False, False, False, False, True, False }, { False, False, False, False, False, False, False, False, False, False, True }
i = 0
gap = 10
j = 10
__return__ = 1

