bool isDivisible7 ( string num ) {
  int n = num . length ( ) ;
  if ( n == 0 && num [ 0 ] == '0' ) return true ;
  if ( n % 3 == 1 ) num = "00" + num ;
  if ( n % 3 == 2 ) num = "0" + num ;
  n = num . length ( ) ;
  int gSum = 0 , p = 1 ;
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    int group = 0 ;
    group += num [ i -- ] - '0' ;
    group += ( num [ i -- ] - '0' ) * 10 ;
    group += ( num [ i ] - '0' ) * 100 ;
    gSum = gSum + group * p ;
    p = p * - 1 ;
  }
  return ( gSum % 7 == 0 ) ;
}
