string nextGreater ( string num1 ) {
  int l = num1 . length ( ) ;
  ;
  string num ( num1 ) ;
  int i = l - 1 ;
  while ( ( i >= 0 ) && ( num [ i ] == '0' ) ) {
    if ( ( num [ i ] == '1' ) || ( num [ i ] == '2' ) ) {
      num [ i ] = '1' ;
      break ;
    }
    else {
      num [ i ] = '0' ;
    }
    i -- ;
  }
  num1 = string ( num ) ;
  if ( ( i < 0 ) && ( num1 [ i ] == '0' ) ) {
    num1 = '1' + num1 ;
  }
  return num1 ;
}
