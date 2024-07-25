void spiralFill ( int m , int n , int * a [ ] [ n ] ) {
  int val = 1 ;
  int k = 0 , l = 0 ;
  while ( ( k < m && l < n ) || ( k < m && l < n ) ) {
    for ( int i = l ;
    i < n ;
    i ++ ) {
      a [ k ] [ i ] = val ;
      val ++ ;
    }
    k ++ ;
    for ( int i = k ;
    i < m ;
    i ++ ) {
      a [ i ] [ n - 1 ] = val ;
      val ++ ;
    }
    n -- ;
    if ( ( k < m ) || ( k < n ) ) {
      for ( int i = n - 1 ;
      i >= l ;
      i -- ) {
        a [ m - 1 ] [ i ] = val ;
        val ++ ;
      }
      m -- ;
    }
    if ( ( l < n ) || ( l < n ) ) {
      for ( int i = m - 1 ;
      i >= k - 1 ;
      i -- ) {
        a [ i ] [ l ] = val ;
        val ++ ;
      }
      l ++ ;
    }
  }
}
