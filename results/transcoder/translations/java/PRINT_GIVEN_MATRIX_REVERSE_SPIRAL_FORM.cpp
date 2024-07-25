void ReversespiralPrint ( int m , int n , int a [ ] [ 100 ] ) {
  long long b [ 100 ] ;
  int i , k = 0 , l = 0 ;
  int z = 0 ;
  int size = m * n ;
  while ( k < m && l < n ) {
    int val ;
    for ( i = l ;
    i < n ;
    ++ i ) {
      val = a [ k ] [ i ] ;
      b [ z ] = val ;
      ++ z ;
    }
    k ++ ;
    for ( i = k ;
    i < m ;
    ++ i ) {
      val = a [ i ] [ n - 1 ] ;
      b [ z ] = val ;
      ++ z ;
    }
    n -- ;
    if ( k < m ) {
      for ( i = n - 1 ;
      i >= l ;
      -- i ) {
        val = a [ m - 1 ] [ i ] ;
        b [ z ] = val ;
        ++ z ;
      }
      m -- ;
    }
    if ( l < n ) {
      for ( i = m - 1 ;
      i >= k ;
      -- i ) {
        val = a [ i ] [ l ] ;
        b [ z ] = val ;
        ++ z ;
      }
      l ++ ;
    }
  }
  for ( int x = size - 1 ;
  x >= 0 ;
  -- x ) {
    cout << b [ x ] << " " ;
  }
}
