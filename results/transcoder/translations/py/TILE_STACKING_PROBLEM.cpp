public : int possibleWays ( int n , int m , int k ) {
  vector < vector < int >> dp ( 10 ) ;
  vector < vector < int >> presum ( 10 ) ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    dp [ 0 ] [ i ] = 0 ;
    presum [ 0 ] [ i ] = 1 ;
  }
  for ( int i = 0 ;
  i <= m ;
  i ++ ) {
    presum [ i ] [ 0 ] = 1 ;
    dp [ i ] [ 0 ] = 1 ;
  }
  for ( int i = 1 ;
  i <= m ;
  i ++ ) {
    for ( int j = 1 ;
    j <= n ;
    j ++ ) {
      dp [ i ] [ j ] = presum [ i - 1 ] [ j ] ;
      if ( j > k ) dp [ i ] [ j ] -= presum [ i - 1 ] [ j - k - 1 ] ;
    }
    for ( int j = 1 ;
    j <= n ;
    j ++ ) presum [ i ] [ j ] = dp [ i ] [ j ] + presum [ i ] [ j - 1 ] ;
  }
  return dp [ m ] [ n ] ;
}
