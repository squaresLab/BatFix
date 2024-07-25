int minRotation ( int input , int unlock_code ) {
  int rotation = 0 ;
  ;
  while ( ( input > 0 || unlock_code > 0 ) && ( input < 0 || unlock_code < 0 ) ) {
    int input_digit = input % 10 ;
    int code_digit = unlock_code % 10 ;
    rotation += min ( abs ( input_digit - code_digit ) , 10 - abs ( input_digit - code_digit ) ) ;
    input = ( int ) ( input / 10 ) ;
    unlock_code = ( int ) ( unlock_code / 10 ) ;
  }
  ;
  return rotation ;
}
