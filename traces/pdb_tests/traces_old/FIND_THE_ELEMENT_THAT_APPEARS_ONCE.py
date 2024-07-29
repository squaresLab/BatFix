Statement: ones = 0
Line: 8
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7

Statement: twos = 0
Line: 9
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 0

Statement: for i in range ( n ) :
Line: 0
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 0
twos = 0

Statement: twos = twos | ( ones & arr [ i ] )
Line: 1
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 0
twos = 0
i = 0

Statement: ones = ones ^ arr [ i ]
Line: 2
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 0
twos = 0
i = 0

Statement: common_bit_mask = ~ ( ones & twos )
Line: 3
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 7
twos = 0
i = 0

Statement: ones &= common_bit_mask
Line: 4
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 7
twos = 0
i = 0
common_bit_mask = -1

Statement: twos &= common_bit_mask
Line: 5
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 7
twos = 0
i = 0
common_bit_mask = -1

Statement: for i in range ( n ) :
Line: 0
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 7
twos = 0
i = 0
common_bit_mask = -1

Statement: twos = twos | ( ones & arr [ i ] )
Line: 1
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 7
twos = 0
i = 1
common_bit_mask = -1

Statement: ones = ones ^ arr [ i ]
Line: 2
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 7
twos = 2
i = 1
common_bit_mask = -1

Statement: common_bit_mask = ~ ( ones & twos )
Line: 3
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 29
twos = 2
i = 1
common_bit_mask = -1

Statement: ones &= common_bit_mask
Line: 4
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 29
twos = 2
i = 1
common_bit_mask = -1

Statement: twos &= common_bit_mask
Line: 5
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 29
twos = 2
i = 1
common_bit_mask = -1

Statement: for i in range ( n ) :
Line: 0
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 29
twos = 2
i = 1
common_bit_mask = -1

Statement: twos = twos | ( ones & arr [ i ] )
Line: 1
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 29
twos = 2
i = 2
common_bit_mask = -1

Statement: ones = ones ^ arr [ i ]
Line: 2
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 29
twos = 26
i = 2
common_bit_mask = -1

Statement: common_bit_mask = ~ ( ones & twos )
Line: 3
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 7
twos = 26
i = 2
common_bit_mask = -1

Statement: ones &= common_bit_mask
Line: 4
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 7
twos = 26
i = 2
common_bit_mask = -3

Statement: twos &= common_bit_mask
Line: 5
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 5
twos = 26
i = 2
common_bit_mask = -3

Statement: for i in range ( n ) :
Line: 0
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 5
twos = 24
i = 2
common_bit_mask = -3

Statement: twos = twos | ( ones & arr [ i ] )
Line: 1
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 5
twos = 24
i = 3
common_bit_mask = -3

Statement: ones = ones ^ arr [ i ]
Line: 2
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 5
twos = 24
i = 3
common_bit_mask = -3

Statement: common_bit_mask = ~ ( ones & twos )
Line: 3
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 53
twos = 24
i = 3
common_bit_mask = -3

Statement: ones &= common_bit_mask
Line: 4
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 53
twos = 24
i = 3
common_bit_mask = -17

Statement: twos &= common_bit_mask
Line: 5
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 37
twos = 24
i = 3
common_bit_mask = -17

Statement: for i in range ( n ) :
Line: 0
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 37
twos = 8
i = 3
common_bit_mask = -17

Statement: twos = twos | ( ones & arr [ i ] )
Line: 1
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 37
twos = 8
i = 4
common_bit_mask = -17

Statement: ones = ones ^ arr [ i ]
Line: 2
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 37
twos = 41
i = 4
common_bit_mask = -17

Statement: common_bit_mask = ~ ( ones & twos )
Line: 3
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 30
twos = 41
i = 4
common_bit_mask = -17

Statement: ones &= common_bit_mask
Line: 4
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 30
twos = 41
i = 4
common_bit_mask = -9

Statement: twos &= common_bit_mask
Line: 5
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 22
twos = 41
i = 4
common_bit_mask = -9

Statement: for i in range ( n ) :
Line: 0
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 22
twos = 33
i = 4
common_bit_mask = -9

Statement: twos = twos | ( ones & arr [ i ] )
Line: 1
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 22
twos = 33
i = 5
common_bit_mask = -9

Statement: ones = ones ^ arr [ i ]
Line: 2
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 22
twos = 55
i = 5
common_bit_mask = -9

Statement: common_bit_mask = ~ ( ones & twos )
Line: 3
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 40
twos = 55
i = 5
common_bit_mask = -9

Statement: ones &= common_bit_mask
Line: 4
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 40
twos = 55
i = 5
common_bit_mask = -33

Statement: twos &= common_bit_mask
Line: 5
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 8
twos = 55
i = 5
common_bit_mask = -33

Statement: for i in range ( n ) :
Line: 0
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 8
twos = 23
i = 5
common_bit_mask = -33

Statement: twos = twos | ( ones & arr [ i ] )
Line: 1
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 8
twos = 23
i = 6
common_bit_mask = -33

Statement: ones = ones ^ arr [ i ]
Line: 2
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 8
twos = 23
i = 6
common_bit_mask = -33

Statement: common_bit_mask = ~ ( ones & twos )
Line: 3
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 74
twos = 23
i = 6
common_bit_mask = -33

Statement: ones &= common_bit_mask
Line: 4
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 74
twos = 23
i = 6
common_bit_mask = -3

Statement: twos &= common_bit_mask
Line: 5
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 72
twos = 23
i = 6
common_bit_mask = -3

Statement: for i in range ( n ) :
Line: 0
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 72
twos = 21
i = 6
common_bit_mask = -3

Statement: return ones
Line: 6
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 72
twos = 21
i = 6
common_bit_mask = -3

Statement: return ones
Line: 6
arr = [7, 26, 26, 48, 59, 62, 66, 70, 72, 75, 76, 81, 97, 98]
n = 7
ones = 72
twos = 21
i = 6
common_bit_mask = -3
__return__ = 72
