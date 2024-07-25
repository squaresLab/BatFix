Statement: rotation = 0 ;
Line: 8
input = 71
unlock_code = 46

Statement: while ( input > 0 or unlock_code > 0 ) :
Line: 9
input = 71
unlock_code = 46
rotation = 0

Statement: input_digit = input % 10 ;
Line: 10
input = 71
unlock_code = 46
rotation = 0

Statement: code_digit = unlock_code % 10 ;
Line: 11
input = 71
unlock_code = 46
rotation = 0
input_digit = 1

Statement: rotation += min ( abs ( input_digit - code_digit ) , 10 - abs ( input_digit - code_digit ) ) ;
Line: 12
input = 71
unlock_code = 46
rotation = 0
input_digit = 1
code_digit = 6

Statement: input = int ( input / 10 ) ;
Line: 13
input = 71
unlock_code = 46
rotation = 5
input_digit = 1
code_digit = 6

Statement: unlock_code = int ( unlock_code / 10 ) ;
Line: 14
input = 7
unlock_code = 46
rotation = 5
input_digit = 1
code_digit = 6

Statement: while ( input > 0 or unlock_code > 0 ) :
Line: 9
input = 7
unlock_code = 4
rotation = 5
input_digit = 1
code_digit = 6

Statement: input_digit = input % 10 ;
Line: 10
input = 7
unlock_code = 4
rotation = 5
input_digit = 1
code_digit = 6

Statement: code_digit = unlock_code % 10 ;
Line: 11
input = 7
unlock_code = 4
rotation = 5
input_digit = 7
code_digit = 6

Statement: rotation += min ( abs ( input_digit - code_digit ) , 10 - abs ( input_digit - code_digit ) ) ;
Line: 12
input = 7
unlock_code = 4
rotation = 5
input_digit = 7
code_digit = 4

Statement: input = int ( input / 10 ) ;
Line: 13
input = 7
unlock_code = 4
rotation = 8
input_digit = 7
code_digit = 4

Statement: unlock_code = int ( unlock_code / 10 ) ;
Line: 14
input = 0
unlock_code = 4
rotation = 8
input_digit = 7
code_digit = 4

Statement: while ( input > 0 or unlock_code > 0 ) :
Line: 9
input = 0
unlock_code = 0
rotation = 8
input_digit = 7
code_digit = 4

Statement: return rotation ;
Line: 15
input = 0
unlock_code = 0
rotation = 8
input_digit = 7
code_digit = 4

Statement: return rotation ;
Line: 15
input = 0
unlock_code = 0
rotation = 8
input_digit = 7
code_digit = 4
__return__ = 8

