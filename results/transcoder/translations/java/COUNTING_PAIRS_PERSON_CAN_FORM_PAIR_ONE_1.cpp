int numberOfWays ( int x ) {
  int dp [ x + 1 ] ;
  dp [ 0 ] = dp [ 1 ] = 1 ;
  for ( int i = 2 ;
  i <= x ;
  i ++ ) {
    dp [ i ] = dp [ i - 1 ] + ( i - 1 ) * dp [ i - 2 ] ;
  }
  return dp [ x ] ;
}
