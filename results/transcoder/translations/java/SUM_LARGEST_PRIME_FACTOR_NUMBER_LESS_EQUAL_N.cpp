int sum_of_large_prime_factor ( int n ) {
  int prime [ n + 1 ] , sum = 0 ;
  memset ( prime , 0 , sizeof ( prime ) ) ;
  int max = n / 2 ;
  for ( int p = 2 ;
  p <= max ;
  p ++ ) {
    if ( prime [ p ] == 0 ) {
      for ( int i = p * 2 ;
      i <= n ;
      i += p ) {
        prime [ i ] = p ;
      }
    }
  }
  for ( int p = 2 ;
  p <= n ;
  p ++ ) {
    if ( prime [ p ] != 0 ) {
      sum += prime [ p ] ;
    }
    else {
      sum += p ;
    }
  }
  return sum ;
}
