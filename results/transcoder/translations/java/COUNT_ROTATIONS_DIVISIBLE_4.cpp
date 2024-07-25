int countRotations ( string n ) {
  int len = n . length ( ) ;
  if ( len == 1 ) {
    int one_digit = n [ 0 ] - '0' ;
    if ( one_digit % 4 == 0 ) return 1 ;
    return 0 ;
  }
  int two_digit , count = 0 ;
  for ( int i = 0 ;
  i < ( len - 1 ) ;
  i ++ ) {
    two_digit = ( n [ i ] - '0' ) * 10 + ( n [ i + 1 ] - '0' ) ;
    if ( two_digit % 4 == 0 ) count ++ ;
  }
  two_digit = ( n [ len - 1 ] - '0' ) * 10 + ( n [ 0 ] - '0' ) ;
  if ( two_digit % 4 == 0 ) count ++ ;
  return count ;
}
