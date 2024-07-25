int countDivisbleby4 ( string s ) {
  int n = s . length ( ) ;
  int count = 0 ;
  for ( int i = 0 ;
  i < n ;
  ++ i ) if ( s [ i ] == '4' || s [ i ] == '8' || s [ i ] == '0' ) count ++ ;
  for ( int i = 0 ;
  i < n - 1 ;
  ++ i ) {
    int h = ( s [ i ] - '0' ) * 10 + ( s [ i + 1 ] - '0' ) ;
    if ( h % 4 == 0 ) count = count + i + 1 ;
  }
  return count ;
}
