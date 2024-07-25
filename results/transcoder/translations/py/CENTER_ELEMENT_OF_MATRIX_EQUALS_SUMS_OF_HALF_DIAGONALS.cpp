bool HalfDiagonalSums ( int * * mat , int n ) {
  int diag1Left = 0 ;
  int diag1Right = 0 ;
  int diag2Left = 0 ;
  int diag2Right = 0 ;
  int i = 0 ;
  int j = n - 1 ;
  while ( i < n ) {
    if ( ( i < n / 2 ) && ( j < n / 2 ) ) {
      diag1Left += mat [ i ] [ i ] ;
      diag2Left += mat [ j ] [ i ] ;
    }
    else if ( ( i > n / 2 ) && ( j > n / 2 ) ) {
      diag1Right += mat [ i ] [ i ] ;
      diag2Right += mat [ j ] [ i ] ;
    }
    i ++ ;
    j -- ;
  }
  return ( diag1Left == diag2Rightanddiag2Right && diag2Leftanddiag1Right == diag2Leftanddiag2Right && diag2Rightanddiag1Right == mat [ n / 2 ] [ n / 2 ] ) ;
}
