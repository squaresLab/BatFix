void printDistance ( int mat [ N ] [ M ] ) {
  int ans [ N ] [ M ] ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) for ( int j = 0 ;
  j < M ;
  j ++ ) ans [ i ] [ j ] = INT_MAX ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) for ( int j = 0 ;
  j < M ;
  j ++ ) {
    for ( int k = 0 ;
    k < N ;
    k ++ ) for ( int l = 0 ;
    l < M ;
    l ++ ) {
      if ( mat [ k ] [ l ] == 1 ) ans [ i ] [ j ] = min ( ans [ i ] [ j ] , abs ( i - k ) + abs ( j - l ) ) ;
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
