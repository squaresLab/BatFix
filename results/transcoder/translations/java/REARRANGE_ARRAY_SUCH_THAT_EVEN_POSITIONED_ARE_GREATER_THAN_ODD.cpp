void assign ( int a [ ] , int n ) {
  sort ( a , a + n ) ;
  int ans [ n ] ;
  int p = 0 , q = n - 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( i + 1 ) % 2 == 0 ) {
      ans [ i ] = a [ q -- ] ;
    }
    else {
      ans [ i ] = a [ p ++ ] ;
    }
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    cout << ans [ i ] << " " ;
  }
}
