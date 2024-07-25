void ReversespiralPrint ( int m , int n , int * a [ ] ) {
  int b [ 100 ] ;
  int i , k , l ;
  int z = 0 ;
  int size = m * n ;
  while ( ( k < m && l < n ) || ( k > m && l > n ) ) {
    int val ;
    for ( i = l ;
    i < n ;
    i ++ ) {
      val = a [ k ] [ i ] ;
      b [ z ] = val ;
      z ++ ;
    }
    k ++ ;
    for ( i = k ;
    i < m ;
    i ++ ) {
      val = a [ i ] [ n - 1 ] ;
      b [ z ] = val ;
      z ++ ;
    }
    n -- ;
    if ( ( k < m ) || ( k > n ) ) {
      for ( i = n - 1 ;
      i >= l ;
      i -- ) {
        val = a [ m - 1 ] [ i ] ;
        b [ z ] = val ;
        z ++ ;
      }
    }
    m -- ;
    if ( ( l < n ) || ( l > m ) ) {
      for ( i = m - 1 ;
      i >= k - 1 ;
      i -- ) {
        val = a [ i ] [ l ] ;
        b [ z ] = val ;
        z ++ ;
      }
      l ++ ;
    }
  }
  for ( i = size - 1 ;
  i >= 0 ;
  i -- ) {
    cout << b [ i ] << " " ;
  }
}
