void counterClockspiralPrint ( int m , int n , int arr [ ] [ 10 ] ) {
  int k = 0 ;
  ;
  int l = 0 ;
  int cnt = 0 ;
  int total = m * n ;
  while ( ( k < m && l < n ) || ( cnt == total ) ) {
    if ( ( cnt == total ) && ( k < m ) ) break ;
    for ( int i = k ;
    i < m ;
    i ++ ) {
      cout << arr [ i ] [ l ] << " " ;
      cnt ++ ;
    }
    l ++ ;
    if ( ( cnt == total ) && ( l < n ) ) break ;
    for ( int i = l ;
    i < n ;
    i ++ ) {
      cout << arr [ m - 1 ] [ i ] << " " ;
      cnt ++ ;
    }
    m -- ;
    if ( ( cnt == total ) && ( k < m ) ) {
      for ( int i = m - 1 ;
      i >= k - 1 ;
      i -- ) {
        cout << arr [ i ] [ n - 1 ] << " " ;
        cnt ++ ;
      }
      n -- ;
    }
    if ( ( cnt == total ) && ( l < n ) ) {
      for ( int i = n - 1 ;
      i >= l - 1 ;
      i -- ) {
        cout << arr [ k ] [ i ] << " " ;
        cnt ++ ;
      }
      k ++ ;
    }
  }
}
