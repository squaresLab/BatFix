Statement: num = n ;
Line: 8
n = 37

Statement: dec_value = 0 ;
Line: 9
n = 37
num = 37

Statement: base = 1 ;
Line: 0
n = 37
num = 37
dec_value = 0

Statement: temp = num ;
Line: 1
n = 37
num = 37
dec_value = 0
base = 1

Statement: while ( temp ) :
Line: 2
n = 37
num = 37
dec_value = 0
base = 1
temp = 37

Statement: last_digit = temp % 10 ;
Line: 3
n = 37
num = 37
dec_value = 0
base = 1
temp = 37

Statement: temp = int ( temp / 10 ) ;
Line: 4
n = 37
num = 37
dec_value = 0
base = 1
temp = 37
last_digit = 7

Statement: dec_value += last_digit * base ;
Line: 5
n = 37
num = 37
dec_value = 0
base = 1
temp = 3
last_digit = 7

Statement: base = base * 8 ;
Line: 6
n = 37
num = 37
dec_value = 7
base = 1
temp = 3
last_digit = 7

Statement: while ( temp ) :
Line: 2
n = 37
num = 37
dec_value = 7
base = 8
temp = 3
last_digit = 7

Statement: last_digit = temp % 10 ;
Line: 3
n = 37
num = 37
dec_value = 7
base = 8
temp = 3
last_digit = 7

Statement: temp = int ( temp / 10 ) ;
Line: 4
n = 37
num = 37
dec_value = 7
base = 8
temp = 3
last_digit = 3

Statement: dec_value += last_digit * base ;
Line: 5
n = 37
num = 37
dec_value = 7
base = 8
temp = 0
last_digit = 3

Statement: base = base * 8 ;
Line: 6
n = 37
num = 37
dec_value = 31
base = 8
temp = 0
last_digit = 3

Statement: while ( temp ) :
Line: 2
n = 37
num = 37
dec_value = 31
base = 64
temp = 0
last_digit = 3

Statement: return dec_value ;
Line: 7
n = 37
num = 37
dec_value = 31
base = 64
temp = 0
last_digit = 3

Statement: return dec_value ;
Line: 7
n = 37
num = 37
dec_value = 31
base = 64
temp = 0
last_digit = 3
__return__ = 31

