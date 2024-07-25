int findWays ( int m , int n , int x ) {
  int table [ n + 1 ] [ n + 1 ] ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) {
    for ( int j = 1 ;
    j <= min ( m + 1 , x + 1 ) ;
    j ++ ) {
      table [ 1 ] [ j ] = 1 ;
    }
    for ( int i = 2 ;
    i <= n ;
    i ++ ) {
      for ( int j = 1 ;
      j <= x ;
      j ++ ) {
        for ( int k = 1 ;
        k <= min ( m + 1 , j ) ;
        k ++ ) {
          table [ i ] [ j ] += table [ i - 1 ] [ j - k ] ;
        }
      }
    }
  }
  return table [ n - 1 ] [ n - 1 ] ;
}
