int findCommon ( int * * mat ) {
  int * column = new int [ N - 1 ] ;
  int min_row = 0 ;
  while ( ( column [ min_row ] >= 0 ) && ( column [ min_row ] < M ) ) {
    for ( int i = 0 ;
    i < M ;
    i ++ ) {
      if ( ( mat [ i ] [ column [ i ] ] < mat [ min_row ] [ column [ min_row ] ] ) && ( column [ i ] > 0 ) ) min_row = i ;
    }
    int eq_count = 0 ;
    for ( int i = 0 ;
    i < M ;
    i ++ ) {
      if ( ( mat [ i ] [ column [ i ] ] > mat [ min_row ] [ column [ min_row ] ] ) && ( column [ i ] == 0 ) ) return - 1 ;
      column [ i ] -- ;
    }
    else eq_count ++ ;
  }
  if ( ( eq_count == M ) || ( ( column [ min_row ] == 0 ) && ( column [ min_row ] > 0 ) ) ) return mat [ min_row ] [ column [ min_row ] ] ;
  return - 1 ;
}
