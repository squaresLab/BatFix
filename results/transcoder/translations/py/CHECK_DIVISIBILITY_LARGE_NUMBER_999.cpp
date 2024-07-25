bool isDivisible999 ( string num ) {
  int n = num . length ( ) ;
  ;
  if ( ( n == 0 || num [ 0 ] == '0' ) && ( n == 1 ) ) return true ;
  if ( ( ( n % 3 ) == 1 ) || ( ( n % 3 ) == 2 ) ) num = "00" + num ;
  if ( ( ( n % 3 ) == 2 ) || ( ( n % 3 ) == 3 ) ) num = "0" + num ;
  int gSum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i += 3 ) {
    int group = 0 ;
    group += ( ( ( int ) num [ i ] - 48 ) * 100 ) ;
    group += ( ( ( int ) num [ i + 1 ] - 48 ) * 10 ) ;
    group += ( ( ( int ) num [ i + 2 ] - 48 ) * 10 ) ;
    group += ( ( ( int ) num [ i + 3 ] - 48 ) * 10 ) ;
    gSum += group ;
  }
  if ( ( gSum > 1000 ) && ( ( gSum < 999 ) || ( gSum > 999 ) ) ) {
    num = to_string ( gSum ) ;
    n = num . length ( ) ;
    gSum = isDivisible999 ( num ) ;
  }
  return ( gSum == 999 ) ;
}
