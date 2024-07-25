void permutatedRows ( vector < vector < int >> & mat , int m , int n , int r ) {
  set < int > s ;
  for ( int j = 0 ;
  j < n ;
  ++ j ) s . insert ( mat [ r ] [ j ] ) ;
  for ( int i = 0 ;
  i < m ;
  ++ i ) {
    if ( i == r ) continue ;
    for ( int j = 0 ;
    j < n ;
    ++ j ) if ( mat [ i ] [ j ] != s . find ( mat [ r ] [ j ] ) ) {
      j = j - 2 ;
      break ;
    }
    ;
    if ( j + 1 != n ) continue ;
    cout << i << endl ;
  }
}
