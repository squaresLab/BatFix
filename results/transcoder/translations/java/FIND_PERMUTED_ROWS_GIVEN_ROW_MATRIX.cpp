void permutatedRows ( int mat [ ] [ 2 ] , int m , int n , int r ) {
  LinkedHashSet < int > s ;
  for ( int j = 0 ;
  j < n ;
  j ++ ) {
    s . insert ( mat [ r ] [ j ] ) ;
  }
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    if ( i == r ) continue ;
    int j ;
    for ( j = 0 ;
    j < n ;
    j ++ ) if ( ! s . count ( mat [ i ] [ j ] ) ) break ;
    if ( j != n ) continue ;
    cout << i << ", " ;
  }
}
