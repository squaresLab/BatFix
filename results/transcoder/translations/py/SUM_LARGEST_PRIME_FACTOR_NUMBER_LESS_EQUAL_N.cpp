public : int sumOfLargePrimeFactor ( int n ) {
  vector < int > prime ( n + 1 , 0 ) ;
  int sum = 0 ;
  int max = ( int ) ( n / 2 ) ;
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
    if ( prime [ p ] ) {
      sum += prime [ p ] ;
    }
    else {
      sum += p ;
    }
  }
  return sum ;
}
