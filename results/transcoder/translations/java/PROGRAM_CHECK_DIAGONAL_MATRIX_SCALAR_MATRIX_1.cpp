bool isScalarMatrix ( int mat [ N ] [ N ] ) {
  for ( int i = 0 ;
  i < N ;
  i ++ ) for ( int j = 0 ;
  j < N ;
  j ++ ) if ( ( i != j ) && ( mat [ i ] [ j ] != 0 ) ) return false ;
  for ( int i = 0 ;
  i < N - 1 ;
  i ++ ) if ( mat [ i ] [ i ] != mat [ i + 1 ] [ i + 1 ] ) return false ;
  return true ;
}
