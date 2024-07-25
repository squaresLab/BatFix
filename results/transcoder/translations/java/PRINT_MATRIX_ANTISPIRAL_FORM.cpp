void antiSpiralTraversal ( int m , int n , int a [ ] [ ] ) {
  int i , k = 0 , l = 0 ;
  stack < int > stk ;
  while ( k <= m && l <= n ) {
    for ( i = l ;
    i <= n ;
    ++ i ) {
      stk . push ( a [ k ] [ i ] ) ;
    }
    k ++ ;
    for ( i = k ;
    i <= m ;
    ++ i ) {
      stk . push ( a [ i ] [ n ] ) ;
    }
    n -- ;
    if ( k <= m ) {
      for ( i = n ;
      i >= l ;
      -- i ) {
        stk . push ( a [ m ] [ i ] ) ;
      }
      m -- ;
    }
    if ( l <= n ) {
      for ( i = m ;
      i >= k ;
      -- i ) {
        stk . push ( a [ i ] [ l ] ) ;
      }
      l ++ ;
    }
  }
  while ( ! stk . empty ( ) ) {
    cout << stk . top ( ) << " " ;
    stk . pop ( ) ;
  }
}
