public : int numberOfPaths ( int m , int n ) {
  vector < int > dp ( n , 1 ) ;
  dp [ 0 ] = 1 ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    for ( int j = 1 ;
    j < n ;
    j ++ ) {
      dp [ j ] += dp [ j - 1 ] ;
    }
  }
  return dp [ n - 1 ] ;
}
