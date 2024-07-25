Statement: vis = dict ( )
Line: 8
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5

Statement: for i in range ( n ) :
Line: 9
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {}

Statement: vis [ arr [ i ] ] = 1
Line: 10
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {}
i = 0

Statement: for i in range ( n ) :
Line: 9
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1}
i = 0

Statement: vis [ arr [ i ] ] = 1
Line: 10
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1}
i = 1

Statement: for i in range ( n ) :
Line: 9
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1}
i = 1

Statement: vis [ arr [ i ] ] = 1
Line: 10
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1}
i = 2

Statement: for i in range ( n ) :
Line: 9
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1}
i = 2

Statement: vis [ arr [ i ] ] = 1
Line: 10
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1}
i = 3

Statement: for i in range ( n ) :
Line: 9
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1}
i = 3

Statement: vis [ arr [ i ] ] = 1
Line: 10
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1}
i = 4

Statement: for i in range ( n ) :
Line: 9
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4

Statement: k = len ( vis )
Line: 11
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4

Statement: vid = dict ( )
Line: 12
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5

Statement: ans = 0
Line: 13
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {}

Statement: right = 0
Line: 14
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {}
ans = 0

Statement: window = 0
Line: 15
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {}
ans = 0
right = 0

Statement: for left in range ( n ) :
Line: 16
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {}
ans = 0
right = 0
window = 0

Statement: while ( right < n and window < k ) :
Line: 17
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {}
ans = 0
right = 0
window = 0
left = 0

Statement: if arr [ right ] in vid.keys ( ) :
Line: 18
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {}
ans = 0
right = 0
window = 0
left = 0

Statement: vid [ arr [ right ] ] = 1
Line: 21
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {}
ans = 0
right = 0
window = 0
left = 0

Statement: if ( vid [ arr [ right ] ] == 1 ) :
Line: 22
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1}
ans = 0
right = 0
window = 0
left = 0

Statement: window += 1
Line: 23
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1}
ans = 0
right = 0
window = 0
left = 0

Statement: right += 1
Line: 24
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1}
ans = 0
right = 0
window = 1
left = 0

Statement: while ( right < n and window < k ) :
Line: 17
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1}
ans = 0
right = 1
window = 1
left = 0

Statement: if arr [ right ] in vid.keys ( ) :
Line: 18
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1}
ans = 0
right = 1
window = 1
left = 0

Statement: vid [ arr [ right ] ] = 1
Line: 21
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1}
ans = 0
right = 1
window = 1
left = 0

Statement: if ( vid [ arr [ right ] ] == 1 ) :
Line: 22
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1}
ans = 0
right = 1
window = 1
left = 0

Statement: window += 1
Line: 23
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1}
ans = 0
right = 1
window = 1
left = 0

Statement: right += 1
Line: 24
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1}
ans = 0
right = 1
window = 2
left = 0

Statement: while ( right < n and window < k ) :
Line: 17
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1}
ans = 0
right = 2
window = 2
left = 0

Statement: if arr [ right ] in vid.keys ( ) :
Line: 18
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1}
ans = 0
right = 2
window = 2
left = 0

Statement: vid [ arr [ right ] ] = 1
Line: 21
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1}
ans = 0
right = 2
window = 2
left = 0

Statement: if ( vid [ arr [ right ] ] == 1 ) :
Line: 22
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1}
ans = 0
right = 2
window = 2
left = 0

Statement: window += 1
Line: 23
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1}
ans = 0
right = 2
window = 2
left = 0

Statement: right += 1
Line: 24
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1}
ans = 0
right = 2
window = 3
left = 0

Statement: while ( right < n and window < k ) :
Line: 17
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1}
ans = 0
right = 3
window = 3
left = 0

Statement: if arr [ right ] in vid.keys ( ) :
Line: 18
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1}
ans = 0
right = 3
window = 3
left = 0

Statement: vid [ arr [ right ] ] = 1
Line: 21
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1}
ans = 0
right = 3
window = 3
left = 0

Statement: if ( vid [ arr [ right ] ] == 1 ) :
Line: 22
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1, 52: 1}
ans = 0
right = 3
window = 3
left = 0

Statement: window += 1
Line: 23
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1, 52: 1}
ans = 0
right = 3
window = 3
left = 0

Statement: right += 1
Line: 24
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1, 52: 1}
ans = 0
right = 3
window = 4
left = 0

Statement: while ( right < n and window < k ) :
Line: 17
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1, 52: 1}
ans = 0
right = 4
window = 4
left = 0

Statement: if arr [ right ] in vid.keys ( ) :
Line: 18
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1, 52: 1}
ans = 0
right = 4
window = 4
left = 0

Statement: vid [ arr [ right ] ] = 1
Line: 21
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1, 52: 1}
ans = 0
right = 4
window = 4
left = 0

Statement: if ( vid [ arr [ right ] ] == 1 ) :
Line: 22
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
ans = 0
right = 4
window = 4
left = 0

Statement: window += 1
Line: 23
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
ans = 0
right = 4
window = 4
left = 0

Statement: right += 1
Line: 24
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
ans = 0
right = 4
window = 5
left = 0

Statement: while ( right < n and window < k ) :
Line: 17
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
ans = 0
right = 5
window = 5
left = 0

Statement: if ( window == k ) :
Line: 25
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
ans = 0
right = 5
window = 5
left = 0

Statement: ans += ( n - right + 1 )
Line: 26
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
ans = 0
right = 5
window = 5
left = 0

Statement: vid [ arr [ left ] ] -= 1
Line: 27
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
ans = 1
right = 5
window = 5
left = 0

Statement: if ( vid [ arr [ left ] ] == 0 ) :
Line: 28
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 1, 49: 1, 52: 1, 53: 1}
ans = 1
right = 5
window = 5
left = 0

Statement: window -= 1
Line: 29
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 1, 49: 1, 52: 1, 53: 1}
ans = 1
right = 5
window = 5
left = 0

Statement: for left in range ( n ) :
Line: 16
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 1, 49: 1, 52: 1, 53: 1}
ans = 1
right = 5
window = 4
left = 0

Statement: while ( right < n and window < k ) :
Line: 17
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 1, 49: 1, 52: 1, 53: 1}
ans = 1
right = 5
window = 4
left = 1

Statement: if ( window == k ) :
Line: 25
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 1, 49: 1, 52: 1, 53: 1}
ans = 1
right = 5
window = 4
left = 1

Statement: vid [ arr [ left ] ] -= 1
Line: 27
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 1, 49: 1, 52: 1, 53: 1}
ans = 1
right = 5
window = 4
left = 1

Statement: if ( vid [ arr [ left ] ] == 0 ) :
Line: 28
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 1, 52: 1, 53: 1}
ans = 1
right = 5
window = 4
left = 1

Statement: window -= 1
Line: 29
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 1, 52: 1, 53: 1}
ans = 1
right = 5
window = 4
left = 1

Statement: for left in range ( n ) :
Line: 16
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 1, 52: 1, 53: 1}
ans = 1
right = 5
window = 3
left = 1

Statement: while ( right < n and window < k ) :
Line: 17
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 1, 52: 1, 53: 1}
ans = 1
right = 5
window = 3
left = 2

Statement: if ( window == k ) :
Line: 25
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 1, 52: 1, 53: 1}
ans = 1
right = 5
window = 3
left = 2

Statement: vid [ arr [ left ] ] -= 1
Line: 27
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 1, 52: 1, 53: 1}
ans = 1
right = 5
window = 3
left = 2

Statement: if ( vid [ arr [ left ] ] == 0 ) :
Line: 28
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 0, 52: 1, 53: 1}
ans = 1
right = 5
window = 3
left = 2

Statement: window -= 1
Line: 29
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 0, 52: 1, 53: 1}
ans = 1
right = 5
window = 3
left = 2

Statement: for left in range ( n ) :
Line: 16
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 0, 52: 1, 53: 1}
ans = 1
right = 5
window = 2
left = 2

Statement: while ( right < n and window < k ) :
Line: 17
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 0, 52: 1, 53: 1}
ans = 1
right = 5
window = 2
left = 3

Statement: if ( window == k ) :
Line: 25
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 0, 52: 1, 53: 1}
ans = 1
right = 5
window = 2
left = 3

Statement: vid [ arr [ left ] ] -= 1
Line: 27
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 0, 52: 1, 53: 1}
ans = 1
right = 5
window = 2
left = 3

Statement: if ( vid [ arr [ left ] ] == 0 ) :
Line: 28
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 0, 52: 0, 53: 1}
ans = 1
right = 5
window = 2
left = 3

Statement: window -= 1
Line: 29
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 0, 52: 0, 53: 1}
ans = 1
right = 5
window = 2
left = 3

Statement: for left in range ( n ) :
Line: 16
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 0, 52: 0, 53: 1}
ans = 1
right = 5
window = 1
left = 3

Statement: while ( right < n and window < k ) :
Line: 17
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 0, 52: 0, 53: 1}
ans = 1
right = 5
window = 1
left = 4

Statement: if ( window == k ) :
Line: 25
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 0, 52: 0, 53: 1}
ans = 1
right = 5
window = 1
left = 4

Statement: vid [ arr [ left ] ] -= 1
Line: 27
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 0, 52: 0, 53: 1}
ans = 1
right = 5
window = 1
left = 4

Statement: if ( vid [ arr [ left ] ] == 0 ) :
Line: 28
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 0, 52: 0, 53: 0}
ans = 1
right = 5
window = 1
left = 4

Statement: window -= 1
Line: 29
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 0, 52: 0, 53: 0}
ans = 1
right = 5
window = 1
left = 4

Statement: for left in range ( n ) :
Line: 16
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 0, 52: 0, 53: 0}
ans = 1
right = 5
window = 0
left = 4

Statement: return ans
Line: 30
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 0, 52: 0, 53: 0}
ans = 1
right = 5
window = 0
left = 4

Statement: return ans
Line: 30
arr = { 13, 39, 49, 52, 53, 69, 72, 79, 83, 96 }
n = 5
vis = {13: 1, 39: 1, 49: 1, 52: 1, 53: 1}
i = 4
k = 5
vid = {13: 0, 39: 0, 49: 0, 52: 0, 53: 0}
ans = 1
right = 5
window = 0
left = 4
__return__ = 1

