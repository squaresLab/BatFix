int numberofways ( int n , int m ) {
  int dp [ n + 2 ] [ n + 2 ] ;
  dp [ 0 ] [ n + 1 ] = 1 ;
  for ( int k = n ;
  k >= m - 1 ;
  k -- ) {
    for ( int i = 0 ;
    i < n + 1 ;
    i ++ ) {
      dp [ i ] [ k ] = dp [ i ] [ k + 1 ] ;
      if ( ( i - k >= 0 ) && ( i < n + 1 ) ) {
        dp [ i ] [ k ] = ( dp [ i ] [ k ] + dp [ i - k ] [ k ] ) ;
      }
    }
  }
  return dp [ n ] [ m ] ;
}
