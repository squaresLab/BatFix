public : int calculateSum ( int n ) {
  if ( ( n <= 0 ) || ( n > n ) ) return 0 ;
  int fibo [ n + 1 ] = {
    0 }
    ;
    fibo [ 1 ] = 1 ;
    int sm = fibo [ 0 ] + fibo [ 1 ] ;
    for ( int i = 2 ;
    i <= n ;
    i ++ ) {
      fibo [ i ] = fibo [ i - 1 ] + fibo [ i - 2 ] ;
      sm = sm + fibo [ i ] ;
    }
    return sm ;
  }
