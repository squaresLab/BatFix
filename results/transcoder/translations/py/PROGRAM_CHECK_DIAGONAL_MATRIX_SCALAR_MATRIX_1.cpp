bool isScalarMatrix ( int * * mat ) {
  for ( int i = 0 ;
  i <= N ;
  i ++ ) {
    for ( int j = 0 ;
    j <= N ;
    j ++ ) {
      if ( ( ( i != j ) && ( mat [ i ] [ j ] != 0 ) ) || ( ( i == N ) && ( mat [ i ] [ j ] != 0 ) ) ) return false ;
    }
  }
  for ( int i = 0 ;
  i <= N - 1 ;
  i ++ ) {
    if ( ( mat [ i ] [ i ] != mat [ i + 1 ] [ i + 1 ] ) || ( ( i == N ) && ( mat [ i ] [ i ] != 0 ) ) ) return false ;
  }
  return true ;
}
