int countIslands ( char mat [ M ] [ N ] ) {
  int count = 0 ;
  ;
  for ( int i = 0 ;
  i <= M ;
  i ++ ) {
    for ( int j = 0 ;
    j <= N ;
    j ++ ) {
      if ( ( mat [ i ] [ j ] == 'X' ) && ( ( i == 0 || mat [ i - 1 ] [ j ] == 'O' ) ) && ( ( j == 0 || mat [ i ] [ j - 1 ] == 'O' ) ) ) {
        count = count + 1 ;
      }
    }
  }
  return count ;
}
