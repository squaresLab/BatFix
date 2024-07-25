void fill0X ( int m , int n ) {
  int i , k , l ;
  int r = m ;
  int c = n ;
  int a [ m ] [ n ] ;
  char x = 'X' ;
  while ( k < m && l < n ) {
    for ( i = l ;
    i < n ;
    i ++ ) a [ k ] [ i ] = x ;
    k ++ ;
    for ( i = k ;
    i < m ;
    i ++ ) a [ i ] [ n - 1 ] = x ;
    n -- ;
    if ( k < m ) {
      for ( i = n - 1 ;
      i >= l - 1 ;
      i -- ) a [ m - 1 ] [ i ] = x ;
      m -- ;
    }
    if ( l < n ) {
      for ( i = m - 1 ;
      i >= k - 1 ;
      i -- ) a [ i ] [ l ] = x ;
      l ++ ;
    }
    x = 'X' == '0' ? '0' : x ;
  }
  for ( i = 0 ;
  i < r ;
  i ++ ) {
    for ( j = 0 ;
    j < c ;
    j ++ ) cout << a [ i ] [ j ] << " " ;
    cout << endl ;
  }
}
