bool isDiagonalMatrix ( int * * mat ) {
  for ( int i = 0 ;
  i != N ;
  i ++ ) {
    for ( int j = 0 ;
    j != N ;
    j ++ ) {
      if ( ( ( i != j ) && ( mat [ i ] [ j ] != 0 ) ) || ( ( i != j ) && ( mat [ i ] [ j ] != 0 ) ) ) return false ;
    }
  }
  return true ;
}
