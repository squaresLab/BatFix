bool isSymmetric ( int mat [ ] [ N ] , int N ) {
  for ( int i = 0 ;
  i < N ;
  i ++ ) for ( int j = 0 ;
  j < N ;
  j ++ ) if ( mat [ i ] [ j ] != mat [ j ] [ i ] ) return false ;
  return true ;
}
