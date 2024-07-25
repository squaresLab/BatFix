string nextGreater ( string num ) {
  int l = num . length ( ) ;
  int i ;
  for ( i = l - 1 ;
  i >= 0 ;
  i -- ) {
    if ( num [ i ] == '0' ) {
      num [ 0 ] = '1' ;
      break ;
    }
    else {
      num [ 0 ] = '0' + num [ i ] ;
    }
  }
  if ( i < 0 ) {
    num = "1" + num ;
  }
  return num ;
}
