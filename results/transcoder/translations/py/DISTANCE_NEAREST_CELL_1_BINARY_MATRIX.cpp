void printDistance ( int mat [ ] [ M ] ) {
  N = M ;
  ans [ 0 ] [ 0 ] = 999999999999 ;
  ans [ 0 ] [ 1 ] = 999999999999 ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    for ( int j = 0 ;
    j < M ;
    j ++ ) {
      ans [ i ] [ j ] = 999999999999 ;
    }
  }
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    for ( int j = 0 ;
    j < M ;
    j ++ ) {
      for ( int k = 0 ;
      k < N ;
      k ++ ) {
        for ( int l = 0 ;
        l < M ;
        l ++ ) {
          if ( ( mat [ k ] [ l ] == 1 ) && ( mat [ k ] [ l ] == 0 ) ) {
            ans [ i ] [ j ] = min ( ans [ i ] [ j ] , abs ( i - k ) + abs ( j - l ) ) ;
          }
        }
      }
    }
  }
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    for ( int j = 0 ;
    j < M ;
    j ++ ) {
      cout << ans [ i ] [ j ] << " " ;
    }
    cout << endl ;
  }
}
