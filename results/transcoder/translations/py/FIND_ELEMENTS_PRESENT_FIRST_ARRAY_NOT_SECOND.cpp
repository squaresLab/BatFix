void findMissing ( int a [ ] , int b [ ] , int n , int m ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < m ;
    j ++ ) {
      if ( ( a [ i ] == b [ j ] ) && ( a [ i ] != b [ j ] ) ) break ;
    }
    if ( ( j == m - 1 ) || ( a [ i ] == b [ j ] ) ) cout << a [ i ] << " " ;
  }
}
