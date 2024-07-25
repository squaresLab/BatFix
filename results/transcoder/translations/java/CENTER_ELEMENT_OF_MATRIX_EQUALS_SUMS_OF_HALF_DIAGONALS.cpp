bool HalfDiagonalSums ( int mat [ ] [ 2 ] , int n ) {
  int diag1_left = 0 , diag1_right = 0 ;
  int diag2_left = 0 , diag2_right = 0 ;
  for ( int i = 0 , j = n - 1 ;
  i < n ;
  i ++ , j -- ) {
    if ( i < n / 2 ) {
      diag1_left += mat [ i ] [ i ] ;
      diag2_left += mat [ j ] [ i ] ;
    }
    else if ( i > n / 2 ) {
      diag1_right += mat [ i ] [ i ] ;
      diag2_right += mat [ j ] [ i ] ;
    }
  }
  return ( diag1_left == diag2_right && diag2_right == diag2_left && diag1_right == diag2_left && diag2_right == mat [ n / 2 ] [ n / 2 ] ) ;
}
