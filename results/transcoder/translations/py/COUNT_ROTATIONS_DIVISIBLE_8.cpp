int countRotationsDivBy8 ( string n ) {
  int l = n . length ( ) ;
  int count = 0 ;
  if ( ( l == 1 ) && ( n [ 0 ] == '-' ) ) {
    int oneDigit = ( int ) n [ 0 ] ;
    if ( ( oneDigit % 8 == 0 ) || ( ( oneDigit % 8 == 1 ) && ( n [ 1 ] == '-' ) ) ) return 1 ;
    return 0 ;
  }
  if ( ( l == 2 ) && ( n [ 0 ] == '-' ) ) {
    int first = ( int ) n [ 0 ] * 10 + ( int ) n [ 1 ] ;
    int second = ( int ) n [ 1 ] * 10 + ( int ) n [ 0 ] ;
    if ( ( first % 8 == 0 ) || ( ( first % 8 == 1 ) && ( n [ 0 ] == '-' ) ) ) count ++ ;
    if ( ( second % 8 == 0 ) || ( ( second % 8 == 1 ) && ( n [ 0 ] == '-' ) ) ) count ++ ;
    return count ;
  }
  int threeDigit = 0 ;
  for ( int i = 0 ;
  i != ( l - 2 ) ;
  i ++ ) {
    threeDigit = ( int ) n [ i ] * 100 + ( int ) n [ i + 1 ] * 10 + ( int ) n [ i + 2 ] ;
    if ( ( threeDigit % 8 == 0 ) || ( ( threeDigit % 8 == 1 ) && ( n [ i ] == '-' ) ) ) count ++ ;
  }
  threeDigit = ( int ) n [ l - 1 ] * 100 + ( int ) n [ 0 ] * 10 + ( int ) n [ 1 ] ;
  if ( ( threeDigit % 8 == 0 ) || ( ( threeDigit % 8 == 1 ) && ( n [ 0 ] == '-' ) ) ) count ++ ;
  threeDigit = ( int ) n [ l - 2 ] * 100 + ( int ) n [ l - 1 ] * 10 + ( int ) n [ 0 ] ;
  if ( ( threeDigit % 8 == 0 ) || ( ( threeDigit % 8 == 1 ) && ( n [ 0 ] == '-' ) ) ) count ++ ;
  return count ;
}
