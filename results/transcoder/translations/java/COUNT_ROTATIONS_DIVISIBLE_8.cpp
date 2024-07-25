int countRotationsDivBy8 ( string n ) {
  int len = n . length ( ) ;
  int count = 0 ;
  if ( len == 1 ) {
    int oneDigit = n [ 0 ] - '0' ;
    if ( oneDigit % 8 == 0 ) return 1 ;
    return 0 ;
  }
  if ( len == 2 ) {
    int first = ( n [ 0 ] - '0' ) * 10 + ( n [ 1 ] - '0' ) ;
    int second = ( n [ 1 ] - '0' ) * 10 + ( n [ 0 ] - '0' ) ;
    if ( first % 8 == 0 ) count ++ ;
    if ( second % 8 == 0 ) count ++ ;
    return count ;
  }
  int threeDigit ;
  for ( int i = 0 ;
  i < ( len - 2 ) ;
  i ++ ) {
    threeDigit = ( n [ i ] - '0' ) * 100 + ( n [ i + 1 ] - '0' ) * 10 + ( n [ i + 2 ] - '0' ) ;
    if ( threeDigit % 8 == 0 ) count ++ ;
  }
  threeDigit = ( n [ len - 1 ] - '0' ) * 100 + ( n [ 0 ] - '0' ) * 10 + ( n [ 1 ] - '0' ) ;
  if ( threeDigit % 8 == 0 ) count ++ ;
  threeDigit = ( n [ len - 2 ] - '0' ) * 100 + ( n [ len - 1 ] - '0' ) * 10 + ( n [ 0 ] - '0' ) ;
  if ( threeDigit % 8 == 0 ) count ++ ;
  return count ;
}
