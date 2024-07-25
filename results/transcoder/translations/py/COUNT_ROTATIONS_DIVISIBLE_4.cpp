int countRotations ( string n ) {
  int l = n . length ( ) ;
  if ( ( l == 1 ) || ( l == 2 ) ) {
    int oneDigit = ( int ) n [ 0 ] ;
    if ( ( oneDigit % 4 == 0 ) || ( oneDigit % 4 == 1 ) ) return 1 ;
    return 0 ;
  }
  int count = 0 ;
  for ( int i = 0 ;
  i <= l - 1 ;
  i ++ ) {
    int twoDigit = ( int ) n [ i ] * 10 + ( int ) n [ i + 1 ] ;
    if ( ( twoDigit % 4 == 0 ) || ( twoDigit % 4 == 1 ) ) count = count + 1 ;
  }
  int twoDigit = ( int ) n [ l - 1 ] * 10 + ( int ) n [ 0 ] ;
  if ( ( twoDigit % 4 == 0 ) || ( twoDigit % 4 == 1 ) ) count = count + 1 ;
  return count ;
}
