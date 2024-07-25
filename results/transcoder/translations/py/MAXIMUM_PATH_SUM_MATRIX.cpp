int findMaxPath ( int mat [ M ] [ M ] ) {
  int res = - 1 ;
  for ( int i = 0 ;
  i < M ;
  i ++ ) res = max ( res , mat [ 0 ] [ i ] ) ;
  for ( int i = 1 ;
  i < N ;
  i ++ ) {
    res = - 1 ;
    for ( int j = 0 ;
    j < M ;
    j ++ ) {
      if ( ( j > 0 && j < M - 1 ) || ( j > 0 && j < M - 1 ) ) mat [ i ] [ j ] += max ( mat [ i - 1 ] [ j ] , max ( mat [ i - 1 ] [ j - 1 ] , mat [ i - 1 ] [ j + 1 ] ) ) ;
      else if ( ( j > 0 ) || ( j < M - 1 ) ) mat [ i ] [ j ] += max ( mat [ i - 1 ] [ j ] , mat [ i - 1 ] [ j - 1 ] ) ;
      else if ( ( j < M - 1 ) || ( j < M - 1 ) ) mat [ i ] [ j ] += max ( mat [ i - 1 ] [ j ] , mat [ i - 1 ] [ j + 1 ] ) ;
      res = max ( mat [ i ] [ j ] , res ) ;
    }
  }
  return res ;
}
