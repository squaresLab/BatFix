int minRotation ( int input , int unlock_code ) {
  int rotation = 0 ;
  int input_digit , code_digit ;
  while ( input > 0 || unlock_code > 0 ) {
    input_digit = input % 10 ;
    code_digit = unlock_code % 10 ;
    rotation += min ( abs ( input_digit - code_digit ) , 10 - abs ( input_digit - code_digit ) ) ;
    input /= 10 ;
    unlock_code /= 10 ;
  }
  return rotation ;
}
