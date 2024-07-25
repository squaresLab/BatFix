void SieveOfEratosthenes ( int n , bool isPrime [ ] ) {
  isPrime [ 0 ] = isPrime [ 1 ] = false ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    isPrime [ i ] = true ;
  }
  for ( int p = 2 ;
  p * p <= n ;
  p ++ ) {
    if ( isPrime [ p ] == true ) {
      for ( int i = p * 2 ;
      i <= n ;
      i += p ) {
        isPrime [ i ] = false ;
      }
    }
  }
}
