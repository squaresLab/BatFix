int countWays ( int n ) {
  int DP [ n + 1 ] ;
  DP [ 0 ] = DP [ 1 ] = DP [ 2 ] = 1 ;
  DP [ 3 ] = 2 ;
  for ( int i = 4 ;
  i <= n ;
  i ++ ) {
    DP [ i ] = DP [ i - 1 ] + DP [ i - 3 ] + DP [ i - 4 ] ;
  }
  return DP [ n ] ;
}
