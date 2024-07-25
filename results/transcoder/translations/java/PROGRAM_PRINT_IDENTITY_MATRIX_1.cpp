bool isIdentity ( int mat [ ] [ N ] , int N ) {
  for ( int row = 0 ;
  row < N ;
  row ++ ) {
    for ( int col = 0 ;
    col < N ;
    col ++ ) {
      if ( row == col && mat [ row ] [ col ] != 1 ) return false ;
      else if ( row != col && mat [ row ] [ col ] != 0 ) return false ;
    }
  }
  return true ;
}
