void findMissing ( int a [ ] , int b [ ] , int n , int m ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int j ;
    for ( j = 0 ;
    j < m ;
    j ++ ) if ( a [ i ] == b [ j ] ) break ;
    if ( j == m ) cout << a [ i ] << " " ;
  }
}
