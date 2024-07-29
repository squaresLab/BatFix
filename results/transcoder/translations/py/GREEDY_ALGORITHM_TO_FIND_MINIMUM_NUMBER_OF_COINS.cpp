void findMin ( int V ) {
  int deno [ ] = {
    1 , 2 , 5 , 10 , 20 , 50 , 100 , 500 , 1000 }
    ;
    int n = sizeof ( deno ) / sizeof ( int ) ;
    int ans [ n ] ;
    int i = n - 1 ;
    while ( ( i >= 0 ) && ( V >= deno [ i ] ) ) {
      while ( ( V >= deno [ i ] ) && ( V <= deno [ i + 1 ] ) ) {
        V -= deno [ i ] ;
        ans [ i ] = deno [ i ] ;
      }
      i -- ;
    }
    for ( int i = 0 ;
    i < ans [ 0 ] ;
    i ++ ) cout << ans [ i ] << " " ;
  }

