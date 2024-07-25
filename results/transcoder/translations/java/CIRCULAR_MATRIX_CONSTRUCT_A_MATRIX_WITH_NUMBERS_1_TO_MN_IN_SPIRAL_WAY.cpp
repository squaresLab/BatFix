void spiralFill ( int m , int n , int a [ ] [ n ] ) {
  int val = 1 ;
  int k = 0 , l = 0 ;
  while ( k < m && l < n ) {
    for ( int i = l ;
    i < n ;
    ++ i ) a [ k ] [ i ] = val ++ ;
    k ++ ;
    for ( int i = k ;
    i < m ;
    ++ i ) a [ i ] [ n - 1 ] = val ++ ;
    n -- ;
    if ( k < m ) {
      for ( int i = n - 1 ;
      i >= l ;
      -- i ) a [ m - 1 ] [ i ] = val ++ ;
      m -- ;
    }
    if ( l < n ) {
      for ( int i = m - 1 ;
      i >= k ;
      -- i ) a [ i ] [ l ] = val ++ ;
      l ++ ;
    }
  }
}
