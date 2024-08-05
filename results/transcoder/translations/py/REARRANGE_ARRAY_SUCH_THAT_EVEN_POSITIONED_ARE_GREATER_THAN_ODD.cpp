void assign ( int a [ ] , int n ) {
  sort ( a , a + n ) ;
  int ans [ n ] = {
    0 }
    ;
    int p = 0 ;
    int q = n - 1 ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      if ( ( i + 1 ) % 2 == 0 ) {
        ans [ i ] = a [ q ] ;
        q = q - 1 ;
      }
      else {
        ans [ i ] = a [ p ] ;
        p = p + 1 ;
      }
    }
    for ( int i = 0 ;
    i < n ;
    i ++ ) cout << ans [ i ] << " " ;
  }
