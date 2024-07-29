Statement: res = list ( )
Line: 8
n = 3

Statement: res.append ( 0 )
Line: 9
n = 3
res = []

Statement: res.append ( 1 )
Line: 0
n = 3
res = [0]

Statement: i = 2
Line: 1
n = 3
res = [0, 1]

Statement: while i < n + 1 :
Line: 2
n = 3
res = [0, 1]
i = 2

Statement: res.append ( max ( i , ( res [ int ( i / 2 ) ] + res [ int ( i / 3 ) ] + res [ int ( i / 4 ) ] + res [ int ( i / 5 ) ] ) ) )
Line: 3
n = 3
res = [0, 1]
i = 2

Statement: i = i + 1
Line: 4
n = 3
res = [0, 1, 2]
i = 2

Statement: while i < n + 1 :
Line: 2
n = 3
res = [0, 1, 2]
i = 3

Statement: res.append ( max ( i , ( res [ int ( i / 2 ) ] + res [ int ( i / 3 ) ] + res [ int ( i / 4 ) ] + res [ int ( i / 5 ) ] ) ) )
Line: 3
n = 3
res = [0, 1, 2]
i = 3

Statement: i = i + 1
Line: 4
n = 3
res = [0, 1, 2, 3]
i = 3

Statement: while i < n + 1 :
Line: 2
n = 3
res = [0, 1, 2, 3]
i = 4

Statement: return res [ n ]
Line: 5
n = 3
res = [0, 1, 2, 3]
i = 4

Statement: return res [ n ]
Line: 5
n = 3
res = [0, 1, 2, 3]
i = 4
__return__ = 3
