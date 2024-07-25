void counterClockspiralPrint ( int m , int n , int arr [ ] [ 10 ] ) {
  int i , k = 0 , l = 0 ;
  int cnt = 0 ;
  int total = m * n ;
  while ( k < m && l < n ) {
    if ( cnt == total ) break ;
    for ( i = k ;
    i < m ;
    ++ i ) {
      cout << arr [ i ] [ l ] << " " ;
      ++ cnt ;
    }
    l ++ ;
    if ( cnt == total ) break ;
    for ( i = l ;
    i < n ;
    ++ i ) {
      cout << arr [ m - 1 ] [ i ] << " " ;
      ++ cnt ;
    }
    m -- ;
    if ( cnt == total ) break ;
    if ( k < m ) {
      for ( i = m - 1 ;
      i >= k ;
      -- i ) {
        cout << arr [ i ] [ n - 1 ] << " " ;
        ++ cnt ;
      }
      n -- ;
    }
    if ( cnt == total ) break ;
    if ( l < n ) {
      for ( i = n - 1 ;
      i >= l ;
      -- i ) {
        cout << arr [ k ] [ i ] << " " ;
        ++ cnt ;
      }
      k ++ ;
    }
  }
}
