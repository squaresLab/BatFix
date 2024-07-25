int findCommon ( int mat [ M ] [ M ] ) {
  int column [ M ] ;
  int min_row ;
  int i ;
  for ( i = 0 ;
  i < M ;
  i ++ ) {
    column [ i ] = N - 1 ;
  }
  min_row = 0 ;
  while ( column [ min_row ] >= 0 ) {
    for ( i = 0 ;
    i < M ;
    i ++ ) {
      if ( mat [ i ] [ column [ i ] ] < mat [ min_row ] [ column [ min_row ] ] ) {
        min_row = i ;
      }
    }
    int eq_count = 0 ;
    for ( i = 0 ;
    i < M ;
    i ++ ) {
      if ( mat [ i ] [ column [ i ] ] > mat [ min_row ] [ column [ min_row ] ] ) {
        if ( column [ i ] == 0 ) {
          return - 1 ;
        }
        column [ i ] -= 1 ;
      }
      else {
        eq_count ++ ;
      }
    }
    if ( eq_count == M ) {
      return mat [ min_row ] [ column [ min_row ] ] ;
    }
  }
  return - 1 ;
}
