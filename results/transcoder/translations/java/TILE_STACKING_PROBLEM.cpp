int possibleWays ( int n , int m , int k ) {
  vector < vector < int >> dp ( N , vector < int > ( N , 0 ) ) ;
  vector < vector < int >> presum ( N , vector < int > ( N , 0 ) ) ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    for ( int j = 0 ;
    j < N ;
    j ++ ) {
      dp [ i ] [ j ] = 0 ;
      presum [ i ] [ j ] = 0 ;
    }
  }
  for ( int i = 1 ;
  i < n + 1 ;
  i ++ ) {
    dp [ 0 ] [ i ] = 0 ;
    presum [ 0 ] [ i ] = 1 ;
  }
  for ( int i = 0 ;
  i < m + 1 ;
  i ++ ) {
    presum [ i ] [ 0 ] = dp [ i ] [ 0 ] = 1 ;
  }
  for ( int i = 1 ;
  i < m + 1 ;
  i ++ ) {
    for ( int j = 1 ;
    j < n + 1 ;
    j ++ ) {
      dp [ i ] [ j ] = presum [ i - 1 ] [ j ] ;
      if ( j > k ) dp [ i ] [ j ] -= presum [ i - 1 ] [ j - k - 1 ] ;
    }
    for ( int j = 1 ;
    j < n + 1 ;
    j ++ ) {
      presum [ i ] [ j ] = dp [ i ] [ j ] + presum [ i ] [ j - 1 ] ;
    }
  }
  return dp [ m ] [ n ] ;
}
