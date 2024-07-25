Statement: len1 = len ( num1 )
Line: 8
num1 = "OaITtzE"
num2 = "RnYlJUqzk"

Statement: len2 = len ( num2 )
Line: 9
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7

Statement: if len1 == 0 or len2 == 0 :
Line: 10
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9

Statement: result = [ 0 ] * ( len1 + len2 )
Line: 12
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9

Statement: i_n1 = 0
Line: 13
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }

Statement: i_n2 = 0
Line: 14
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0

Statement: for i in range ( len1 - 1 , - 1 , - 1 ) :
Line: 15
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 0

Statement: carry = 0
Line: 16
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 0
i = 6

Statement: n1 = ord ( num1 [ i ] ) - 48
Line: 17
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 0
i = 6
carry = 0

Statement: i_n2 = 0
Line: 18
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 0
i = 6
carry = 0
n1 = 21

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 0
i = 6
carry = 0
n1 = 21

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 0
i = 6
carry = 0
n1 = 21
j = 8

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 0
i = 6
carry = 0
n1 = 21
j = 8
n2 = 59

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 0
i = 6
carry = 0
n1 = 21
j = 8
n2 = 59
summ = 1239

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 0
i = 6
carry = 123
n1 = 21
j = 8
n2 = 59
summ = 1239

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 0
i = 6
carry = 123
n1 = 21
j = 8
n2 = 59
summ = 1239

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 1
i = 6
carry = 123
n1 = 21
j = 8
n2 = 59
summ = 1239

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 1
i = 6
carry = 123
n1 = 21
j = 7
n2 = 59
summ = 1239

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 1
i = 6
carry = 123
n1 = 21
j = 7
n2 = 74
summ = 1239

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 1
i = 6
carry = 123
n1 = 21
j = 7
n2 = 74
summ = 1677

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 1
i = 6
carry = 167
n1 = 21
j = 7
n2 = 74
summ = 1677

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 1
i = 6
carry = 167
n1 = 21
j = 7
n2 = 74
summ = 1677

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 2
i = 6
carry = 167
n1 = 21
j = 7
n2 = 74
summ = 1677

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 2
i = 6
carry = 167
n1 = 21
j = 6
n2 = 74
summ = 1677

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 2
i = 6
carry = 167
n1 = 21
j = 6
n2 = 65
summ = 1677

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 2
i = 6
carry = 167
n1 = 21
j = 6
n2 = 65
summ = 1532

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 2
i = 6
carry = 153
n1 = 21
j = 6
n2 = 65
summ = 1532

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 2
i = 6
carry = 153
n1 = 21
j = 6
n2 = 65
summ = 1532

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 3
i = 6
carry = 153
n1 = 21
j = 6
n2 = 65
summ = 1532

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 3
i = 6
carry = 153
n1 = 21
j = 5
n2 = 65
summ = 1532

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 3
i = 6
carry = 153
n1 = 21
j = 5
n2 = 37
summ = 1532

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 3
i = 6
carry = 153
n1 = 21
j = 5
n2 = 37
summ = 930

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 3
i = 6
carry = 93
n1 = 21
j = 5
n2 = 37
summ = 930

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 3
i = 6
carry = 93
n1 = 21
j = 5
n2 = 37
summ = 930

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 4
i = 6
carry = 93
n1 = 21
j = 5
n2 = 37
summ = 930

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 4
i = 6
carry = 93
n1 = 21
j = 4
n2 = 37
summ = 930

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 4
i = 6
carry = 93
n1 = 21
j = 4
n2 = 26
summ = 930

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 4
i = 6
carry = 93
n1 = 21
j = 4
n2 = 26
summ = 639

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 4
i = 6
carry = 63
n1 = 21
j = 4
n2 = 26
summ = 639

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 4
i = 6
carry = 63
n1 = 21
j = 4
n2 = 26
summ = 639

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 5
i = 6
carry = 63
n1 = 21
j = 4
n2 = 26
summ = 639

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 5
i = 6
carry = 63
n1 = 21
j = 3
n2 = 26
summ = 639

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 5
i = 6
carry = 63
n1 = 21
j = 3
n2 = 60
summ = 639

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 5
i = 6
carry = 63
n1 = 21
j = 3
n2 = 60
summ = 1323

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 5
i = 6
carry = 132
n1 = 21
j = 3
n2 = 60
summ = 1323

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 5
i = 6
carry = 132
n1 = 21
j = 3
n2 = 60
summ = 1323

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 6
i = 6
carry = 132
n1 = 21
j = 3
n2 = 60
summ = 1323

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 6
i = 6
carry = 132
n1 = 21
j = 2
n2 = 60
summ = 1323

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 6
i = 6
carry = 132
n1 = 21
j = 2
n2 = 41
summ = 1323

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 6
i = 6
carry = 132
n1 = 21
j = 2
n2 = 41
summ = 993

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 6
i = 6
carry = 99
n1 = 21
j = 2
n2 = 41
summ = 993

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 6
i = 6
carry = 99
n1 = 21
j = 2
n2 = 41
summ = 993

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 7
i = 6
carry = 99
n1 = 21
j = 2
n2 = 41
summ = 993

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 7
i = 6
carry = 99
n1 = 21
j = 1
n2 = 41
summ = 993

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 7
i = 6
carry = 99
n1 = 21
j = 1
n2 = 62
summ = 993

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 7
i = 6
carry = 99
n1 = 21
j = 1
n2 = 62
summ = 1401

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 7
i = 6
carry = 140
n1 = 21
j = 1
n2 = 62
summ = 1401

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 7
i = 6
carry = 140
n1 = 21
j = 1
n2 = 62
summ = 1401

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 8
i = 6
carry = 140
n1 = 21
j = 1
n2 = 62
summ = 1401

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 8
i = 6
carry = 140
n1 = 21
j = 0
n2 = 62
summ = 1401

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 8
i = 6
carry = 140
n1 = 21
j = 0
n2 = 34
summ = 1401

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 8
i = 6
carry = 140
n1 = 21
j = 0
n2 = 34
summ = 854

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 8
i = 6
carry = 85
n1 = 21
j = 0
n2 = 34
summ = 854

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 4, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 8
i = 6
carry = 85
n1 = 21
j = 0
n2 = 34
summ = 854

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 4, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 9
i = 6
carry = 85
n1 = 21
j = 0
n2 = 34
summ = 854

Statement: if ( carry > 0 ) :
Line: 25
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 4, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 9
i = 6
carry = 85
n1 = 21
j = 0
n2 = 34
summ = 854

Statement: result [ i_n1 + i_n2 ] += carry
Line: 26
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 4, 0, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 9
i = 6
carry = 85
n1 = 21
j = 0
n2 = 34
summ = 854

Statement: i_n1 += 1
Line: 27
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 0
i_n2 = 9
i = 6
carry = 85
n1 = 21
j = 0
n2 = 34
summ = 854

Statement: for i in range ( len1 - 1 , - 1 , - 1 ) :
Line: 15
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 9
i = 6
carry = 85
n1 = 21
j = 0
n2 = 34
summ = 854

Statement: carry = 0
Line: 16
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 9
i = 5
carry = 85
n1 = 21
j = 0
n2 = 34
summ = 854

Statement: n1 = ord ( num1 [ i ] ) - 48
Line: 17
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 9
i = 5
carry = 0
n1 = 21
j = 0
n2 = 34
summ = 854

Statement: i_n2 = 0
Line: 18
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 9
i = 5
carry = 0
n1 = 74
j = 0
n2 = 34
summ = 854

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 0
i = 5
carry = 0
n1 = 74
j = 0
n2 = 34
summ = 854

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 0
i = 5
carry = 0
n1 = 74
j = 8
n2 = 34
summ = 854

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 0
i = 5
carry = 0
n1 = 74
j = 8
n2 = 59
summ = 854

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 0
i = 5
carry = 0
n1 = 74
j = 8
n2 = 59
summ = 4373

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 7, 2, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 0
i = 5
carry = 437
n1 = 74
j = 8
n2 = 59
summ = 4373

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 2, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 0
i = 5
carry = 437
n1 = 74
j = 8
n2 = 59
summ = 4373

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 2, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 1
i = 5
carry = 437
n1 = 74
j = 8
n2 = 59
summ = 4373

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 2, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 1
i = 5
carry = 437
n1 = 74
j = 7
n2 = 59
summ = 4373

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 2, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 1
i = 5
carry = 437
n1 = 74
j = 7
n2 = 74
summ = 4373

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 2, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 1
i = 5
carry = 437
n1 = 74
j = 7
n2 = 74
summ = 5915

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 2, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 1
i = 5
carry = 591
n1 = 74
j = 7
n2 = 74
summ = 5915

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 1
i = 5
carry = 591
n1 = 74
j = 7
n2 = 74
summ = 5915

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 2
i = 5
carry = 591
n1 = 74
j = 7
n2 = 74
summ = 5915

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 2
i = 5
carry = 591
n1 = 74
j = 6
n2 = 74
summ = 5915

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 2
i = 5
carry = 591
n1 = 74
j = 6
n2 = 65
summ = 5915

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 2
i = 5
carry = 591
n1 = 74
j = 6
n2 = 65
summ = 5401

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 0, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 2
i = 5
carry = 540
n1 = 74
j = 6
n2 = 65
summ = 5401

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 2
i = 5
carry = 540
n1 = 74
j = 6
n2 = 65
summ = 5401

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 3
i = 5
carry = 540
n1 = 74
j = 6
n2 = 65
summ = 5401

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 3
i = 5
carry = 540
n1 = 74
j = 5
n2 = 65
summ = 5401

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 3
i = 5
carry = 540
n1 = 74
j = 5
n2 = 37
summ = 5401

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 3
i = 5
carry = 540
n1 = 74
j = 5
n2 = 37
summ = 3287

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 9, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 3
i = 5
carry = 328
n1 = 74
j = 5
n2 = 37
summ = 3287

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 3
i = 5
carry = 328
n1 = 74
j = 5
n2 = 37
summ = 3287

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 4
i = 5
carry = 328
n1 = 74
j = 5
n2 = 37
summ = 3287

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 4
i = 5
carry = 328
n1 = 74
j = 4
n2 = 37
summ = 3287

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 4
i = 5
carry = 328
n1 = 74
j = 4
n2 = 26
summ = 3287

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 4
i = 5
carry = 328
n1 = 74
j = 4
n2 = 26
summ = 2255

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 3, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 4
i = 5
carry = 225
n1 = 74
j = 4
n2 = 26
summ = 2255

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 4
i = 5
carry = 225
n1 = 74
j = 4
n2 = 26
summ = 2255

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 5
i = 5
carry = 225
n1 = 74
j = 4
n2 = 26
summ = 2255

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 5
i = 5
carry = 225
n1 = 74
j = 3
n2 = 26
summ = 2255

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 5
i = 5
carry = 225
n1 = 74
j = 3
n2 = 60
summ = 2255

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 5
i = 5
carry = 225
n1 = 74
j = 3
n2 = 60
summ = 4668

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 3, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 5
i = 5
carry = 466
n1 = 74
j = 3
n2 = 60
summ = 4668

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 5
i = 5
carry = 466
n1 = 74
j = 3
n2 = 60
summ = 4668

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 6
i = 5
carry = 466
n1 = 74
j = 3
n2 = 60
summ = 4668

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 6
i = 5
carry = 466
n1 = 74
j = 2
n2 = 60
summ = 4668

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 6
i = 5
carry = 466
n1 = 74
j = 2
n2 = 41
summ = 4668

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 6
i = 5
carry = 466
n1 = 74
j = 2
n2 = 41
summ = 3501

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 6
i = 5
carry = 350
n1 = 74
j = 2
n2 = 41
summ = 3501

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 6
i = 5
carry = 350
n1 = 74
j = 2
n2 = 41
summ = 3501

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 7
i = 5
carry = 350
n1 = 74
j = 2
n2 = 41
summ = 3501

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 7
i = 5
carry = 350
n1 = 74
j = 1
n2 = 41
summ = 3501

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 7
i = 5
carry = 350
n1 = 74
j = 1
n2 = 62
summ = 3501

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 7
i = 5
carry = 350
n1 = 74
j = 1
n2 = 62
summ = 4942

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 4, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 7
i = 5
carry = 494
n1 = 74
j = 1
n2 = 62
summ = 4942

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 7
i = 5
carry = 494
n1 = 74
j = 1
n2 = 62
summ = 4942

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 8
i = 5
carry = 494
n1 = 74
j = 1
n2 = 62
summ = 4942

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 8
i = 5
carry = 494
n1 = 74
j = 0
n2 = 62
summ = 4942

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 8
i = 5
carry = 494
n1 = 74
j = 0
n2 = 34
summ = 4942

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 8
i = 5
carry = 494
n1 = 74
j = 0
n2 = 34
summ = 3095

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 85, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 8
i = 5
carry = 309
n1 = 74
j = 0
n2 = 34
summ = 3095

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 5, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 8
i = 5
carry = 309
n1 = 74
j = 0
n2 = 34
summ = 3095

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 5, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 9
i = 5
carry = 309
n1 = 74
j = 0
n2 = 34
summ = 3095

Statement: if ( carry > 0 ) :
Line: 25
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 5, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 9
i = 5
carry = 309
n1 = 74
j = 0
n2 = 34
summ = 3095

Statement: result [ i_n1 + i_n2 ] += carry
Line: 26
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 5, 0, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 9
i = 5
carry = 309
n1 = 74
j = 0
n2 = 34
summ = 3095

Statement: i_n1 += 1
Line: 27
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 1
i_n2 = 9
i = 5
carry = 309
n1 = 74
j = 0
n2 = 34
summ = 3095

Statement: for i in range ( len1 - 1 , - 1 , - 1 ) :
Line: 15
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 9
i = 5
carry = 309
n1 = 74
j = 0
n2 = 34
summ = 3095

Statement: carry = 0
Line: 16
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 9
i = 4
carry = 309
n1 = 74
j = 0
n2 = 34
summ = 3095

Statement: n1 = ord ( num1 [ i ] ) - 48
Line: 17
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 9
i = 4
carry = 0
n1 = 74
j = 0
n2 = 34
summ = 3095

Statement: i_n2 = 0
Line: 18
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 9
i = 4
carry = 0
n1 = 68
j = 0
n2 = 34
summ = 3095

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 0
i = 4
carry = 0
n1 = 68
j = 0
n2 = 34
summ = 3095

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 0
i = 4
carry = 0
n1 = 68
j = 8
n2 = 34
summ = 3095

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 0
i = 4
carry = 0
n1 = 68
j = 8
n2 = 59
summ = 3095

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 0
i = 4
carry = 0
n1 = 68
j = 8
n2 = 59
summ = 4017

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 5, 1, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 0
i = 4
carry = 401
n1 = 68
j = 8
n2 = 59
summ = 4017

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 1, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 0
i = 4
carry = 401
n1 = 68
j = 8
n2 = 59
summ = 4017

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 1, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 1
i = 4
carry = 401
n1 = 68
j = 8
n2 = 59
summ = 4017

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 1, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 1
i = 4
carry = 401
n1 = 68
j = 7
n2 = 59
summ = 4017

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 1, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 1
i = 4
carry = 401
n1 = 68
j = 7
n2 = 74
summ = 4017

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 1, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 1
i = 4
carry = 401
n1 = 68
j = 7
n2 = 74
summ = 5434

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 1, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 1
i = 4
carry = 543
n1 = 68
j = 7
n2 = 74
summ = 5434

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 1
i = 4
carry = 543
n1 = 68
j = 7
n2 = 74
summ = 5434

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 2
i = 4
carry = 543
n1 = 68
j = 7
n2 = 74
summ = 5434

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 2
i = 4
carry = 543
n1 = 68
j = 6
n2 = 74
summ = 5434

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 2
i = 4
carry = 543
n1 = 68
j = 6
n2 = 65
summ = 5434

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 2
i = 4
carry = 543
n1 = 68
j = 6
n2 = 65
summ = 4970

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 7, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 2
i = 4
carry = 497
n1 = 68
j = 6
n2 = 65
summ = 4970

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 2
i = 4
carry = 497
n1 = 68
j = 6
n2 = 65
summ = 4970

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 3
i = 4
carry = 497
n1 = 68
j = 6
n2 = 65
summ = 4970

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 3
i = 4
carry = 497
n1 = 68
j = 5
n2 = 65
summ = 4970

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 3
i = 4
carry = 497
n1 = 68
j = 5
n2 = 37
summ = 4970

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 3
i = 4
carry = 497
n1 = 68
j = 5
n2 = 37
summ = 3018

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 5, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 3
i = 4
carry = 301
n1 = 68
j = 5
n2 = 37
summ = 3018

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 3
i = 4
carry = 301
n1 = 68
j = 5
n2 = 37
summ = 3018

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 4
i = 4
carry = 301
n1 = 68
j = 5
n2 = 37
summ = 3018

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 4
i = 4
carry = 301
n1 = 68
j = 4
n2 = 37
summ = 3018

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 4
i = 4
carry = 301
n1 = 68
j = 4
n2 = 26
summ = 3018

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 4
i = 4
carry = 301
n1 = 68
j = 4
n2 = 26
summ = 2077

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 8, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 4
i = 4
carry = 207
n1 = 68
j = 4
n2 = 26
summ = 2077

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 4
i = 4
carry = 207
n1 = 68
j = 4
n2 = 26
summ = 2077

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 5
i = 4
carry = 207
n1 = 68
j = 4
n2 = 26
summ = 2077

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 5
i = 4
carry = 207
n1 = 68
j = 3
n2 = 26
summ = 2077

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 5
i = 4
carry = 207
n1 = 68
j = 3
n2 = 60
summ = 2077

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 5
i = 4
carry = 207
n1 = 68
j = 3
n2 = 60
summ = 4288

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 1, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 5
i = 4
carry = 428
n1 = 68
j = 3
n2 = 60
summ = 4288

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 5
i = 4
carry = 428
n1 = 68
j = 3
n2 = 60
summ = 4288

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 6
i = 4
carry = 428
n1 = 68
j = 3
n2 = 60
summ = 4288

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 6
i = 4
carry = 428
n1 = 68
j = 2
n2 = 60
summ = 4288

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 6
i = 4
carry = 428
n1 = 68
j = 2
n2 = 41
summ = 4288

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 6
i = 4
carry = 428
n1 = 68
j = 2
n2 = 41
summ = 3218

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 2, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 6
i = 4
carry = 321
n1 = 68
j = 2
n2 = 41
summ = 3218

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 6
i = 4
carry = 321
n1 = 68
j = 2
n2 = 41
summ = 3218

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 7
i = 4
carry = 321
n1 = 68
j = 2
n2 = 41
summ = 3218

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 7
i = 4
carry = 321
n1 = 68
j = 1
n2 = 41
summ = 3218

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 7
i = 4
carry = 321
n1 = 68
j = 1
n2 = 62
summ = 3218

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 7
i = 4
carry = 321
n1 = 68
j = 1
n2 = 62
summ = 4542

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 5, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 7
i = 4
carry = 454
n1 = 68
j = 1
n2 = 62
summ = 4542

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 7
i = 4
carry = 454
n1 = 68
j = 1
n2 = 62
summ = 4542

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 8
i = 4
carry = 454
n1 = 68
j = 1
n2 = 62
summ = 4542

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 8
i = 4
carry = 454
n1 = 68
j = 0
n2 = 62
summ = 4542

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 8
i = 4
carry = 454
n1 = 68
j = 0
n2 = 34
summ = 4542

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 8
i = 4
carry = 454
n1 = 68
j = 0
n2 = 34
summ = 3075

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 309, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 8
i = 4
carry = 307
n1 = 68
j = 0
n2 = 34
summ = 3075

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 5, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 8
i = 4
carry = 307
n1 = 68
j = 0
n2 = 34
summ = 3075

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 5, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 9
i = 4
carry = 307
n1 = 68
j = 0
n2 = 34
summ = 3075

Statement: if ( carry > 0 ) :
Line: 25
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 5, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 9
i = 4
carry = 307
n1 = 68
j = 0
n2 = 34
summ = 3075

Statement: result [ i_n1 + i_n2 ] += carry
Line: 26
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 5, 0, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 9
i = 4
carry = 307
n1 = 68
j = 0
n2 = 34
summ = 3075

Statement: i_n1 += 1
Line: 27
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 2
i_n2 = 9
i = 4
carry = 307
n1 = 68
j = 0
n2 = 34
summ = 3075

Statement: for i in range ( len1 - 1 , - 1 , - 1 ) :
Line: 15
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 9
i = 4
carry = 307
n1 = 68
j = 0
n2 = 34
summ = 3075

Statement: carry = 0
Line: 16
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 9
i = 3
carry = 307
n1 = 68
j = 0
n2 = 34
summ = 3075

Statement: n1 = ord ( num1 [ i ] ) - 48
Line: 17
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 9
i = 3
carry = 0
n1 = 68
j = 0
n2 = 34
summ = 3075

Statement: i_n2 = 0
Line: 18
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 9
i = 3
carry = 0
n1 = 36
j = 0
n2 = 34
summ = 3075

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 0
i = 3
carry = 0
n1 = 36
j = 0
n2 = 34
summ = 3075

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 0
i = 3
carry = 0
n1 = 36
j = 8
n2 = 34
summ = 3075

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 0
i = 3
carry = 0
n1 = 36
j = 8
n2 = 59
summ = 3075

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 0
i = 3
carry = 0
n1 = 36
j = 8
n2 = 59
summ = 2128

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 4, 0, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 0
i = 3
carry = 212
n1 = 36
j = 8
n2 = 59
summ = 2128

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 0, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 0
i = 3
carry = 212
n1 = 36
j = 8
n2 = 59
summ = 2128

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 0, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 1
i = 3
carry = 212
n1 = 36
j = 8
n2 = 59
summ = 2128

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 0, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 1
i = 3
carry = 212
n1 = 36
j = 7
n2 = 59
summ = 2128

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 0, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 1
i = 3
carry = 212
n1 = 36
j = 7
n2 = 74
summ = 2128

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 0, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 1
i = 3
carry = 212
n1 = 36
j = 7
n2 = 74
summ = 2876

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 0, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 1
i = 3
carry = 287
n1 = 36
j = 7
n2 = 74
summ = 2876

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 1
i = 3
carry = 287
n1 = 36
j = 7
n2 = 74
summ = 2876

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 2
i = 3
carry = 287
n1 = 36
j = 7
n2 = 74
summ = 2876

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 2
i = 3
carry = 287
n1 = 36
j = 6
n2 = 74
summ = 2876

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 2
i = 3
carry = 287
n1 = 36
j = 6
n2 = 65
summ = 2876

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 2
i = 3
carry = 287
n1 = 36
j = 6
n2 = 65
summ = 2635

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 8, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 2
i = 3
carry = 263
n1 = 36
j = 6
n2 = 65
summ = 2635

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 2
i = 3
carry = 263
n1 = 36
j = 6
n2 = 65
summ = 2635

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 3
i = 3
carry = 263
n1 = 36
j = 6
n2 = 65
summ = 2635

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 3
i = 3
carry = 263
n1 = 36
j = 5
n2 = 65
summ = 2635

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 3
i = 3
carry = 263
n1 = 36
j = 5
n2 = 37
summ = 2635

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 3
i = 3
carry = 263
n1 = 36
j = 5
n2 = 37
summ = 1602

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 7, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 3
i = 3
carry = 160
n1 = 36
j = 5
n2 = 37
summ = 1602

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 3
i = 3
carry = 160
n1 = 36
j = 5
n2 = 37
summ = 1602

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 4
i = 3
carry = 160
n1 = 36
j = 5
n2 = 37
summ = 1602

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 4
i = 3
carry = 160
n1 = 36
j = 4
n2 = 37
summ = 1602

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 4
i = 3
carry = 160
n1 = 36
j = 4
n2 = 26
summ = 1602

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 4
i = 3
carry = 160
n1 = 36
j = 4
n2 = 26
summ = 1104

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 8, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 4
i = 3
carry = 110
n1 = 36
j = 4
n2 = 26
summ = 1104

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 4
i = 3
carry = 110
n1 = 36
j = 4
n2 = 26
summ = 1104

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 5
i = 3
carry = 110
n1 = 36
j = 4
n2 = 26
summ = 1104

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 5
i = 3
carry = 110
n1 = 36
j = 3
n2 = 26
summ = 1104

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 5
i = 3
carry = 110
n1 = 36
j = 3
n2 = 60
summ = 1104

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 5
i = 3
carry = 110
n1 = 36
j = 3
n2 = 60
summ = 2278

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 5
i = 3
carry = 227
n1 = 36
j = 3
n2 = 60
summ = 2278

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 5
i = 3
carry = 227
n1 = 36
j = 3
n2 = 60
summ = 2278

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 6
i = 3
carry = 227
n1 = 36
j = 3
n2 = 60
summ = 2278

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 6
i = 3
carry = 227
n1 = 36
j = 2
n2 = 60
summ = 2278

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 6
i = 3
carry = 227
n1 = 36
j = 2
n2 = 41
summ = 2278

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 6
i = 3
carry = 227
n1 = 36
j = 2
n2 = 41
summ = 1705

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 2, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 6
i = 3
carry = 170
n1 = 36
j = 2
n2 = 41
summ = 1705

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 6
i = 3
carry = 170
n1 = 36
j = 2
n2 = 41
summ = 1705

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 7
i = 3
carry = 170
n1 = 36
j = 2
n2 = 41
summ = 1705

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 7
i = 3
carry = 170
n1 = 36
j = 1
n2 = 41
summ = 1705

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 7
i = 3
carry = 170
n1 = 36
j = 1
n2 = 62
summ = 1705

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 7
i = 3
carry = 170
n1 = 36
j = 1
n2 = 62
summ = 2407

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 5, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 7
i = 3
carry = 240
n1 = 36
j = 1
n2 = 62
summ = 2407

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 7
i = 3
carry = 240
n1 = 36
j = 1
n2 = 62
summ = 2407

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 8
i = 3
carry = 240
n1 = 36
j = 1
n2 = 62
summ = 2407

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 8
i = 3
carry = 240
n1 = 36
j = 0
n2 = 62
summ = 2407

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 8
i = 3
carry = 240
n1 = 36
j = 0
n2 = 34
summ = 2407

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 8
i = 3
carry = 240
n1 = 36
j = 0
n2 = 34
summ = 1771

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 307, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 8
i = 3
carry = 177
n1 = 36
j = 0
n2 = 34
summ = 1771

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 1, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 8
i = 3
carry = 177
n1 = 36
j = 0
n2 = 34
summ = 1771

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 1, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 9
i = 3
carry = 177
n1 = 36
j = 0
n2 = 34
summ = 1771

Statement: if ( carry > 0 ) :
Line: 25
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 1, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 9
i = 3
carry = 177
n1 = 36
j = 0
n2 = 34
summ = 1771

Statement: result [ i_n1 + i_n2 ] += carry
Line: 26
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 1, 0, 0, 0, 0 }
i_n1 = 3
i_n2 = 9
i = 3
carry = 177
n1 = 36
j = 0
n2 = 34
summ = 1771

Statement: i_n1 += 1
Line: 27
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 3
i_n2 = 9
i = 3
carry = 177
n1 = 36
j = 0
n2 = 34
summ = 1771

Statement: for i in range ( len1 - 1 , - 1 , - 1 ) :
Line: 15
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 9
i = 3
carry = 177
n1 = 36
j = 0
n2 = 34
summ = 1771

Statement: carry = 0
Line: 16
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 9
i = 2
carry = 177
n1 = 36
j = 0
n2 = 34
summ = 1771

Statement: n1 = ord ( num1 [ i ] ) - 48
Line: 17
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 9
i = 2
carry = 0
n1 = 36
j = 0
n2 = 34
summ = 1771

Statement: i_n2 = 0
Line: 18
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 9
i = 2
carry = 0
n1 = 25
j = 0
n2 = 34
summ = 1771

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 0
i = 2
carry = 0
n1 = 25
j = 0
n2 = 34
summ = 1771

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 0
i = 2
carry = 0
n1 = 25
j = 8
n2 = 34
summ = 1771

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 0
i = 2
carry = 0
n1 = 25
j = 8
n2 = 59
summ = 1771

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 0
i = 2
carry = 0
n1 = 25
j = 8
n2 = 59
summ = 1481

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 6, 5, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 0
i = 2
carry = 148
n1 = 25
j = 8
n2 = 59
summ = 1481

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 5, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 0
i = 2
carry = 148
n1 = 25
j = 8
n2 = 59
summ = 1481

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 5, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 1
i = 2
carry = 148
n1 = 25
j = 8
n2 = 59
summ = 1481

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 5, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 1
i = 2
carry = 148
n1 = 25
j = 7
n2 = 59
summ = 1481

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 5, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 1
i = 2
carry = 148
n1 = 25
j = 7
n2 = 74
summ = 1481

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 5, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 1
i = 2
carry = 148
n1 = 25
j = 7
n2 = 74
summ = 2003

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 5, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 1
i = 2
carry = 200
n1 = 25
j = 7
n2 = 74
summ = 2003

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 1
i = 2
carry = 200
n1 = 25
j = 7
n2 = 74
summ = 2003

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 2
i = 2
carry = 200
n1 = 25
j = 7
n2 = 74
summ = 2003

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 2
i = 2
carry = 200
n1 = 25
j = 6
n2 = 74
summ = 2003

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 2
i = 2
carry = 200
n1 = 25
j = 6
n2 = 65
summ = 2003

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 2
i = 2
carry = 200
n1 = 25
j = 6
n2 = 65
summ = 1827

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 2, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 2
i = 2
carry = 182
n1 = 25
j = 6
n2 = 65
summ = 1827

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 2
i = 2
carry = 182
n1 = 25
j = 6
n2 = 65
summ = 1827

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 3
i = 2
carry = 182
n1 = 25
j = 6
n2 = 65
summ = 1827

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 3
i = 2
carry = 182
n1 = 25
j = 5
n2 = 65
summ = 1827

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 3
i = 2
carry = 182
n1 = 25
j = 5
n2 = 37
summ = 1827

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 3
i = 2
carry = 182
n1 = 25
j = 5
n2 = 37
summ = 1111

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 4, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 3
i = 2
carry = 111
n1 = 25
j = 5
n2 = 37
summ = 1111

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 3
i = 2
carry = 111
n1 = 25
j = 5
n2 = 37
summ = 1111

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 4
i = 2
carry = 111
n1 = 25
j = 5
n2 = 37
summ = 1111

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 4
i = 2
carry = 111
n1 = 25
j = 4
n2 = 37
summ = 1111

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 4
i = 2
carry = 111
n1 = 25
j = 4
n2 = 26
summ = 1111

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 4
i = 2
carry = 111
n1 = 25
j = 4
n2 = 26
summ = 769

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 8, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 4
i = 2
carry = 76
n1 = 25
j = 4
n2 = 26
summ = 769

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 4
i = 2
carry = 76
n1 = 25
j = 4
n2 = 26
summ = 769

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 5
i = 2
carry = 76
n1 = 25
j = 4
n2 = 26
summ = 769

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 5
i = 2
carry = 76
n1 = 25
j = 3
n2 = 26
summ = 769

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 5
i = 2
carry = 76
n1 = 25
j = 3
n2 = 60
summ = 769

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 5
i = 2
carry = 76
n1 = 25
j = 3
n2 = 60
summ = 1581

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 5, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 5
i = 2
carry = 158
n1 = 25
j = 3
n2 = 60
summ = 1581

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 5
i = 2
carry = 158
n1 = 25
j = 3
n2 = 60
summ = 1581

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 6
i = 2
carry = 158
n1 = 25
j = 3
n2 = 60
summ = 1581

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 6
i = 2
carry = 158
n1 = 25
j = 2
n2 = 60
summ = 1581

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 6
i = 2
carry = 158
n1 = 25
j = 2
n2 = 41
summ = 1581

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 6
i = 2
carry = 158
n1 = 25
j = 2
n2 = 41
summ = 1190

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 7, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 6
i = 2
carry = 119
n1 = 25
j = 2
n2 = 41
summ = 1190

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 6
i = 2
carry = 119
n1 = 25
j = 2
n2 = 41
summ = 1190

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 7
i = 2
carry = 119
n1 = 25
j = 2
n2 = 41
summ = 1190

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 7
i = 2
carry = 119
n1 = 25
j = 1
n2 = 41
summ = 1190

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 7
i = 2
carry = 119
n1 = 25
j = 1
n2 = 62
summ = 1190

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 7
i = 2
carry = 119
n1 = 25
j = 1
n2 = 62
summ = 1670

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 1, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 7
i = 2
carry = 167
n1 = 25
j = 1
n2 = 62
summ = 1670

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 7
i = 2
carry = 167
n1 = 25
j = 1
n2 = 62
summ = 1670

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 8
i = 2
carry = 167
n1 = 25
j = 1
n2 = 62
summ = 1670

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 8
i = 2
carry = 167
n1 = 25
j = 0
n2 = 62
summ = 1670

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 8
i = 2
carry = 167
n1 = 25
j = 0
n2 = 34
summ = 1670

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 8
i = 2
carry = 167
n1 = 25
j = 0
n2 = 34
summ = 1194

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 177, 0, 0, 0 }
i_n1 = 4
i_n2 = 8
i = 2
carry = 119
n1 = 25
j = 0
n2 = 34
summ = 1194

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 4, 0, 0, 0 }
i_n1 = 4
i_n2 = 8
i = 2
carry = 119
n1 = 25
j = 0
n2 = 34
summ = 1194

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 4, 0, 0, 0 }
i_n1 = 4
i_n2 = 9
i = 2
carry = 119
n1 = 25
j = 0
n2 = 34
summ = 1194

Statement: if ( carry > 0 ) :
Line: 25
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 4, 0, 0, 0 }
i_n1 = 4
i_n2 = 9
i = 2
carry = 119
n1 = 25
j = 0
n2 = 34
summ = 1194

Statement: result [ i_n1 + i_n2 ] += carry
Line: 26
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 4, 0, 0, 0 }
i_n1 = 4
i_n2 = 9
i = 2
carry = 119
n1 = 25
j = 0
n2 = 34
summ = 1194

Statement: i_n1 += 1
Line: 27
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 4
i_n2 = 9
i = 2
carry = 119
n1 = 25
j = 0
n2 = 34
summ = 1194

Statement: for i in range ( len1 - 1 , - 1 , - 1 ) :
Line: 15
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 9
i = 2
carry = 119
n1 = 25
j = 0
n2 = 34
summ = 1194

Statement: carry = 0
Line: 16
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 9
i = 1
carry = 119
n1 = 25
j = 0
n2 = 34
summ = 1194

Statement: n1 = ord ( num1 [ i ] ) - 48
Line: 17
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 9
i = 1
carry = 0
n1 = 25
j = 0
n2 = 34
summ = 1194

Statement: i_n2 = 0
Line: 18
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 9
i = 1
carry = 0
n1 = 49
j = 0
n2 = 34
summ = 1194

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 0
i = 1
carry = 0
n1 = 49
j = 0
n2 = 34
summ = 1194

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 0
i = 1
carry = 0
n1 = 49
j = 8
n2 = 34
summ = 1194

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 0
i = 1
carry = 0
n1 = 49
j = 8
n2 = 59
summ = 1194

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 0
i = 1
carry = 0
n1 = 49
j = 8
n2 = 59
summ = 2894

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 3, 7, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 0
i = 1
carry = 289
n1 = 49
j = 8
n2 = 59
summ = 2894

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 7, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 0
i = 1
carry = 289
n1 = 49
j = 8
n2 = 59
summ = 2894

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 7, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 1
i = 1
carry = 289
n1 = 49
j = 8
n2 = 59
summ = 2894

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 7, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 1
i = 1
carry = 289
n1 = 49
j = 7
n2 = 59
summ = 2894

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 7, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 1
i = 1
carry = 289
n1 = 49
j = 7
n2 = 74
summ = 2894

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 7, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 1
i = 1
carry = 289
n1 = 49
j = 7
n2 = 74
summ = 3922

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 7, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 1
i = 1
carry = 392
n1 = 49
j = 7
n2 = 74
summ = 3922

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 1
i = 1
carry = 392
n1 = 49
j = 7
n2 = 74
summ = 3922

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 2
i = 1
carry = 392
n1 = 49
j = 7
n2 = 74
summ = 3922

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 2
i = 1
carry = 392
n1 = 49
j = 6
n2 = 74
summ = 3922

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 2
i = 1
carry = 392
n1 = 49
j = 6
n2 = 65
summ = 3922

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 2
i = 1
carry = 392
n1 = 49
j = 6
n2 = 65
summ = 3578

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 1, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 2
i = 1
carry = 357
n1 = 49
j = 6
n2 = 65
summ = 3578

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 2
i = 1
carry = 357
n1 = 49
j = 6
n2 = 65
summ = 3578

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 3
i = 1
carry = 357
n1 = 49
j = 6
n2 = 65
summ = 3578

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 3
i = 1
carry = 357
n1 = 49
j = 5
n2 = 65
summ = 3578

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 3
i = 1
carry = 357
n1 = 49
j = 5
n2 = 37
summ = 3578

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 3
i = 1
carry = 357
n1 = 49
j = 5
n2 = 37
summ = 2179

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 3
i = 1
carry = 217
n1 = 49
j = 5
n2 = 37
summ = 2179

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 3
i = 1
carry = 217
n1 = 49
j = 5
n2 = 37
summ = 2179

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 4
i = 1
carry = 217
n1 = 49
j = 5
n2 = 37
summ = 2179

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 4
i = 1
carry = 217
n1 = 49
j = 4
n2 = 37
summ = 2179

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 4
i = 1
carry = 217
n1 = 49
j = 4
n2 = 26
summ = 2179

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 4
i = 1
carry = 217
n1 = 49
j = 4
n2 = 26
summ = 1492

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 1, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 4
i = 1
carry = 149
n1 = 49
j = 4
n2 = 26
summ = 1492

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 4
i = 1
carry = 149
n1 = 49
j = 4
n2 = 26
summ = 1492

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 5
i = 1
carry = 149
n1 = 49
j = 4
n2 = 26
summ = 1492

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 5
i = 1
carry = 149
n1 = 49
j = 3
n2 = 26
summ = 1492

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 5
i = 1
carry = 149
n1 = 49
j = 3
n2 = 60
summ = 1492

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 5
i = 1
carry = 149
n1 = 49
j = 3
n2 = 60
summ = 3089

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 0, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 5
i = 1
carry = 308
n1 = 49
j = 3
n2 = 60
summ = 3089

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 5
i = 1
carry = 308
n1 = 49
j = 3
n2 = 60
summ = 3089

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 6
i = 1
carry = 308
n1 = 49
j = 3
n2 = 60
summ = 3089

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 6
i = 1
carry = 308
n1 = 49
j = 2
n2 = 60
summ = 3089

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 6
i = 1
carry = 308
n1 = 49
j = 2
n2 = 41
summ = 3089

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 6
i = 1
carry = 308
n1 = 49
j = 2
n2 = 41
summ = 2317

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 0, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 6
i = 1
carry = 231
n1 = 49
j = 2
n2 = 41
summ = 2317

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 6
i = 1
carry = 231
n1 = 49
j = 2
n2 = 41
summ = 2317

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 7
i = 1
carry = 231
n1 = 49
j = 2
n2 = 41
summ = 2317

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 7
i = 1
carry = 231
n1 = 49
j = 1
n2 = 41
summ = 2317

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 7
i = 1
carry = 231
n1 = 49
j = 1
n2 = 62
summ = 2317

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 7
i = 1
carry = 231
n1 = 49
j = 1
n2 = 62
summ = 3273

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 4, 119, 0, 0 }
i_n1 = 5
i_n2 = 7
i = 1
carry = 327
n1 = 49
j = 1
n2 = 62
summ = 3273

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 119, 0, 0 }
i_n1 = 5
i_n2 = 7
i = 1
carry = 327
n1 = 49
j = 1
n2 = 62
summ = 3273

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 119, 0, 0 }
i_n1 = 5
i_n2 = 8
i = 1
carry = 327
n1 = 49
j = 1
n2 = 62
summ = 3273

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 119, 0, 0 }
i_n1 = 5
i_n2 = 8
i = 1
carry = 327
n1 = 49
j = 0
n2 = 62
summ = 3273

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 119, 0, 0 }
i_n1 = 5
i_n2 = 8
i = 1
carry = 327
n1 = 49
j = 0
n2 = 34
summ = 3273

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 119, 0, 0 }
i_n1 = 5
i_n2 = 8
i = 1
carry = 327
n1 = 49
j = 0
n2 = 34
summ = 2112

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 119, 0, 0 }
i_n1 = 5
i_n2 = 8
i = 1
carry = 211
n1 = 49
j = 0
n2 = 34
summ = 2112

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 2, 0, 0 }
i_n1 = 5
i_n2 = 8
i = 1
carry = 211
n1 = 49
j = 0
n2 = 34
summ = 2112

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 2, 0, 0 }
i_n1 = 5
i_n2 = 9
i = 1
carry = 211
n1 = 49
j = 0
n2 = 34
summ = 2112

Statement: if ( carry > 0 ) :
Line: 25
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 2, 0, 0 }
i_n1 = 5
i_n2 = 9
i = 1
carry = 211
n1 = 49
j = 0
n2 = 34
summ = 2112

Statement: result [ i_n1 + i_n2 ] += carry
Line: 26
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 2, 0, 0 }
i_n1 = 5
i_n2 = 9
i = 1
carry = 211
n1 = 49
j = 0
n2 = 34
summ = 2112

Statement: i_n1 += 1
Line: 27
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 5
i_n2 = 9
i = 1
carry = 211
n1 = 49
j = 0
n2 = 34
summ = 2112

Statement: for i in range ( len1 - 1 , - 1 , - 1 ) :
Line: 15
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 9
i = 1
carry = 211
n1 = 49
j = 0
n2 = 34
summ = 2112

Statement: carry = 0
Line: 16
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 9
i = 0
carry = 211
n1 = 49
j = 0
n2 = 34
summ = 2112

Statement: n1 = ord ( num1 [ i ] ) - 48
Line: 17
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 9
i = 0
carry = 0
n1 = 49
j = 0
n2 = 34
summ = 2112

Statement: i_n2 = 0
Line: 18
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 9
i = 0
carry = 0
n1 = 31
j = 0
n2 = 34
summ = 2112

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 0
i = 0
carry = 0
n1 = 31
j = 0
n2 = 34
summ = 2112

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 0
i = 0
carry = 0
n1 = 31
j = 8
n2 = 34
summ = 2112

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 0
i = 0
carry = 0
n1 = 31
j = 8
n2 = 59
summ = 2112

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 0
i = 0
carry = 0
n1 = 31
j = 8
n2 = 59
summ = 1831

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 2, 8, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 0
i = 0
carry = 183
n1 = 31
j = 8
n2 = 59
summ = 1831

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 8, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 0
i = 0
carry = 183
n1 = 31
j = 8
n2 = 59
summ = 1831

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 8, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 1
i = 0
carry = 183
n1 = 31
j = 8
n2 = 59
summ = 1831

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 8, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 1
i = 0
carry = 183
n1 = 31
j = 7
n2 = 59
summ = 1831

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 8, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 1
i = 0
carry = 183
n1 = 31
j = 7
n2 = 74
summ = 1831

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 8, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 1
i = 0
carry = 183
n1 = 31
j = 7
n2 = 74
summ = 2485

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 8, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 1
i = 0
carry = 248
n1 = 31
j = 7
n2 = 74
summ = 2485

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 1
i = 0
carry = 248
n1 = 31
j = 7
n2 = 74
summ = 2485

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 2
i = 0
carry = 248
n1 = 31
j = 7
n2 = 74
summ = 2485

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 2
i = 0
carry = 248
n1 = 31
j = 6
n2 = 74
summ = 2485

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 2
i = 0
carry = 248
n1 = 31
j = 6
n2 = 65
summ = 2485

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 2
i = 0
carry = 248
n1 = 31
j = 6
n2 = 65
summ = 2272

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 9, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 2
i = 0
carry = 227
n1 = 31
j = 6
n2 = 65
summ = 2272

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 2
i = 0
carry = 227
n1 = 31
j = 6
n2 = 65
summ = 2272

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 3
i = 0
carry = 227
n1 = 31
j = 6
n2 = 65
summ = 2272

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 3
i = 0
carry = 227
n1 = 31
j = 5
n2 = 65
summ = 2272

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 3
i = 0
carry = 227
n1 = 31
j = 5
n2 = 37
summ = 2272

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 3
i = 0
carry = 227
n1 = 31
j = 5
n2 = 37
summ = 1376

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 2, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 3
i = 0
carry = 137
n1 = 31
j = 5
n2 = 37
summ = 1376

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 3
i = 0
carry = 137
n1 = 31
j = 5
n2 = 37
summ = 1376

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 4
i = 0
carry = 137
n1 = 31
j = 5
n2 = 37
summ = 1376

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 4
i = 0
carry = 137
n1 = 31
j = 4
n2 = 37
summ = 1376

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 4
i = 0
carry = 137
n1 = 31
j = 4
n2 = 26
summ = 1376

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 4
i = 0
carry = 137
n1 = 31
j = 4
n2 = 26
summ = 952

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 9, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 4
i = 0
carry = 95
n1 = 31
j = 4
n2 = 26
summ = 952

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 4
i = 0
carry = 95
n1 = 31
j = 4
n2 = 26
summ = 952

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 5
i = 0
carry = 95
n1 = 31
j = 4
n2 = 26
summ = 952

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 5
i = 0
carry = 95
n1 = 31
j = 3
n2 = 26
summ = 952

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 5
i = 0
carry = 95
n1 = 31
j = 3
n2 = 60
summ = 952

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 5
i = 0
carry = 95
n1 = 31
j = 3
n2 = 60
summ = 1962

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 7, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 5
i = 0
carry = 196
n1 = 31
j = 3
n2 = 60
summ = 1962

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 5
i = 0
carry = 196
n1 = 31
j = 3
n2 = 60
summ = 1962

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 6
i = 0
carry = 196
n1 = 31
j = 3
n2 = 60
summ = 1962

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 6
i = 0
carry = 196
n1 = 31
j = 2
n2 = 60
summ = 1962

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 6
i = 0
carry = 196
n1 = 31
j = 2
n2 = 41
summ = 1962

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 6
i = 0
carry = 196
n1 = 31
j = 2
n2 = 41
summ = 1470

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 3, 2, 211, 0 }
i_n1 = 6
i_n2 = 6
i = 0
carry = 147
n1 = 31
j = 2
n2 = 41
summ = 1470

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 2, 211, 0 }
i_n1 = 6
i_n2 = 6
i = 0
carry = 147
n1 = 31
j = 2
n2 = 41
summ = 1470

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 2, 211, 0 }
i_n1 = 6
i_n2 = 7
i = 0
carry = 147
n1 = 31
j = 2
n2 = 41
summ = 1470

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 2, 211, 0 }
i_n1 = 6
i_n2 = 7
i = 0
carry = 147
n1 = 31
j = 1
n2 = 41
summ = 1470

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 2, 211, 0 }
i_n1 = 6
i_n2 = 7
i = 0
carry = 147
n1 = 31
j = 1
n2 = 62
summ = 1470

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 2, 211, 0 }
i_n1 = 6
i_n2 = 7
i = 0
carry = 147
n1 = 31
j = 1
n2 = 62
summ = 2071

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 2, 211, 0 }
i_n1 = 6
i_n2 = 7
i = 0
carry = 207
n1 = 31
j = 1
n2 = 62
summ = 2071

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 211, 0 }
i_n1 = 6
i_n2 = 7
i = 0
carry = 207
n1 = 31
j = 1
n2 = 62
summ = 2071

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 211, 0 }
i_n1 = 6
i_n2 = 8
i = 0
carry = 207
n1 = 31
j = 1
n2 = 62
summ = 2071

Statement: n2 = ord ( num2 [ j ] ) - 48
Line: 20
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 211, 0 }
i_n1 = 6
i_n2 = 8
i = 0
carry = 207
n1 = 31
j = 0
n2 = 62
summ = 2071

Statement: summ = n1 * n2 + result [ i_n1 + i_n2 ] + carry
Line: 21
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 211, 0 }
i_n1 = 6
i_n2 = 8
i = 0
carry = 207
n1 = 31
j = 0
n2 = 34
summ = 2071

Statement: carry = summ // 10
Line: 22
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 211, 0 }
i_n1 = 6
i_n2 = 8
i = 0
carry = 207
n1 = 31
j = 0
n2 = 34
summ = 1472

Statement: result [ i_n1 + i_n2 ] = summ % 10
Line: 23
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 211, 0 }
i_n1 = 6
i_n2 = 8
i = 0
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472

Statement: i_n2 += 1
Line: 24
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 0 }
i_n1 = 6
i_n2 = 8
i = 0
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472

Statement: for j in range ( len2 - 1 , - 1 , - 1 ) :
Line: 19
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 0 }
i_n1 = 6
i_n2 = 9
i = 0
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472

Statement: if ( carry > 0 ) :
Line: 25
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 0 }
i_n1 = 6
i_n2 = 9
i = 0
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472

Statement: result [ i_n1 + i_n2 ] += carry
Line: 26
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 0 }
i_n1 = 6
i_n2 = 9
i = 0
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472

Statement: i_n1 += 1
Line: 27
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 6
i_n2 = 9
i = 0
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472

Statement: for i in range ( len1 - 1 , - 1 , - 1 ) :
Line: 15
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 0
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472

Statement: i = len ( result ) - 1
Line: 28
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 0
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472

Statement: while ( i >= 0 and result [ i ] == 0 ) :
Line: 29
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 15
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472

Statement: if ( i == - 1 ) :
Line: 31
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 15
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472

Statement: s = ""
Line: 33
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 15
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472

Statement: while ( i >= 0 ) :
Line: 34
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 15
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = ""

Statement: s += chr ( result [ i ] + 48 )
Line: 35
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 15
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = ""

Statement: i -= 1
Line: 36
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 15
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã"

Statement: while ( i >= 0 ) :
Line: 34
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 14
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã"

Statement: s += chr ( result [ i ] + 48 )
Line: 35
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 14
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã"

Statement: i -= 1
Line: 36
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 14
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã2"

Statement: while ( i >= 0 ) :
Line: 34
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 13
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã2"

Statement: s += chr ( result [ i ] + 48 )
Line: 35
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 13
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã2"

Statement: i -= 1
Line: 36
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 13
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã21"

Statement: while ( i >= 0 ) :
Line: 34
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 12
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã21"

Statement: s += chr ( result [ i ] + 48 )
Line: 35
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 12
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã21"

Statement: i -= 1
Line: 36
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 12
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã210"

Statement: while ( i >= 0 ) :
Line: 34
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 11
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã210"

Statement: s += chr ( result [ i ] + 48 )
Line: 35
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 11
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã210"

Statement: i -= 1
Line: 36
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 11
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã2102"

Statement: while ( i >= 0 ) :
Line: 34
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 10
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã2102"

Statement: s += chr ( result [ i ] + 48 )
Line: 35
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 10
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã2102"

Statement: i -= 1
Line: 36
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 10
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã21022"

Statement: while ( i >= 0 ) :
Line: 34
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 9
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã21022"

Statement: s += chr ( result [ i ] + 48 )
Line: 35
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 9
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã21022"

Statement: i -= 1
Line: 36
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 9
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã210226"

Statement: while ( i >= 0 ) :
Line: 34
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 8
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã210226"

Statement: s += chr ( result [ i ] + 48 )
Line: 35
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 8
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã210226"

Statement: i -= 1
Line: 36
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 8
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã2102262"

Statement: while ( i >= 0 ) :
Line: 34
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 7
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã2102262"

Statement: s += chr ( result [ i ] + 48 )
Line: 35
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 7
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã2102262"

Statement: i -= 1
Line: 36
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 7
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã21022625"

Statement: while ( i >= 0 ) :
Line: 34
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 6
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã21022625"

Statement: s += chr ( result [ i ] + 48 )
Line: 35
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 6
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã21022625"

Statement: i -= 1
Line: 36
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 6
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã210226251"

Statement: while ( i >= 0 ) :
Line: 34
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 5
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã210226251"

Statement: s += chr ( result [ i ] + 48 )
Line: 35
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 5
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã210226251"

Statement: i -= 1
Line: 36
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 5
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã2102262514"

Statement: while ( i >= 0 ) :
Line: 34
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 4
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã2102262514"

Statement: s += chr ( result [ i ] + 48 )
Line: 35
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 4
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã2102262514"

Statement: i -= 1
Line: 36
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 4
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã21022625141"

Statement: while ( i >= 0 ) :
Line: 34
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 3
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã21022625141"

Statement: s += chr ( result [ i ] + 48 )
Line: 35
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 3
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã21022625141"

Statement: i -= 1
Line: 36
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 3
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã210226251418"

Statement: while ( i >= 0 ) :
Line: 34
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 2
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã210226251418"

Statement: s += chr ( result [ i ] + 48 )
Line: 35
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 2
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã210226251418"

Statement: i -= 1
Line: 36
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 2
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã2102262514187"

Statement: while ( i >= 0 ) :
Line: 34
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 1
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã2102262514187"

Statement: s += chr ( result [ i ] + 48 )
Line: 35
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 1
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã2102262514187"

Statement: i -= 1
Line: 36
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 1
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã21022625141873"

Statement: while ( i >= 0 ) :
Line: 34
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 0
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã21022625141873"

Statement: s += chr ( result [ i ] + 48 )
Line: 35
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 0
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã21022625141873"

Statement: i -= 1
Line: 36
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = 0
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã210226251418739"

Statement: while ( i >= 0 ) :
Line: 34
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = -1
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã210226251418739"

Statement: return s
Line: 37
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = -1
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã210226251418739"

Statement: return s
Line: 37
num1 = "OaITtzE"
num2 = "RnYlJUqzk"
len1 = 7
len2 = 9
result = { 9, 3, 7, 8, 1, 4, 1, 5, 2, 6, 2, 2, 0, 1, 2, 147 }
i_n1 = 7
i_n2 = 9
i = -1
carry = 147
n1 = 31
j = 0
n2 = 34
summ = 1472
s = "Ã210226251418739"
__return__ = "Ã210226251418739"

