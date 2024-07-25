int countWays ( string s ) {
  int count [ 26 ] ;
  for ( int i = 0 ;
  i < s . length ( ) ;
  i ++ ) {
    count [ s [ i ] - 'a' ] ++ ;
  }
  count [ s [ 0 ] - 'a' ] = 1 ;
  int ans = 1 ;
  for ( int i = 0 ;
  i < 26 ;
  ++ i ) if ( count [ i ] != 0 ) ans *= count [ i ] ;
  return ans ;
}
