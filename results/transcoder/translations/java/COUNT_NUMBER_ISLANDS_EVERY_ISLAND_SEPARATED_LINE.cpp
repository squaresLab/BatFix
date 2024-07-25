int countIslands ( int mat [ ] [ 2 ] , int m , int n ) {
  int count = 0 ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( mat [ i ] [ j ] == 'X' ) {
        if ( ( i == 0 || mat [ i - 1 ] [ j ] == 'O' ) && ( j == 0 || mat [ i ] [ j - 1 ] == 'O' ) ) {
          count ++ ;
        }
      }
    }
  }
  return count ;
}
