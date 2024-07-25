void antiSpiralTraversal ( int m , int n , int a [ ] [ ] ) {
  int k = 0 ;
  int l = 0 ;
  vector < int > stk ;
  while ( ( k <= m && l <= n ) || ( k > n && l > m ) ) {
    for ( int i = l ;
    i <= n ;
    i ++ ) stk . push_back ( a [ k ] [ i ] ) ;
    k ++ ;
    for ( int i = k ;
    i <= m ;
    i ++ ) stk . push_back ( a [ i ] [ n ] ) ;
    n -- ;
    if ( ( k <= m ) || ( k < n && l > n ) ) stk . push_back ( a [ m ] [ i ] ) ;
    m -- ;
  }
  if ( ( l <= n ) || ( l < n && m > m ) ) stk . push_back ( a [ m ] [ l ] ) ;
  l ++ ;
}
