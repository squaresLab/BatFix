void bonacci_series ( int n , int m ) {
  int a [ m ] ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    a [ i ] = 0 ;
  }
  a [ n - 1 ] = 1 ;
  a [ n ] = 1 ;
  for ( int i = n + 1 ;
  i < m ;
  i ++ ) {
    a [ i ] = 2 * a [ i - 1 ] - a [ i - n - 1 ] ;
  }
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    cout << a [ i ] << " " ;
  }
}
