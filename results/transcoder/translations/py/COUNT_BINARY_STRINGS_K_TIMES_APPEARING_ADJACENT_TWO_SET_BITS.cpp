public : int countStrings ( int n , int k ) {
  vector < vector < pair < int , int >>> dp ( k + 1 , vector < pair < int , int >> ( n + 1 , 0 ) ) ;
  dp [ 1 ] [ 0 ] [ 0 ] = 1 ;
  dp [ 1 ] [ 0 ] [ 1 ] = 1 ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    for ( int j = 0 ;
    j < k + 1 ;
    j ++ ) {
      dp [ i ] [ j ] [ 0 ] = ( dp [ i - 1 ] [ j ] [ 0 ] + dp [ i - 1 ] [ j ] [ 1 ] ) ;
      dp [ i ] [ j ] [ 1 ] = dp [ i - 1 ] [ j ] [ 0 ] ;
      if ( j >= 1 ) dp [ i ] [ j ] [ 1 ] += dp [ i - 1 ] [ j - 1 ] [ 1 ] ;
    }
  }
  return dp [ n ] [ k ] [ 0 ] + dp [ n ] [ k ] [ 1 ] ;
}
