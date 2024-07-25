int sortedCount ( int mat [ ] [ 2 ] , int r , int c ) {
  int result = 0 ;
  for ( int i = 0 ;
  i < r ;
  i ++ ) {
    int j ;
    for ( j = 0 ;
    j < c - 1 ;
    j ++ ) if ( mat [ i ] [ j + 1 ] <= mat [ i ] [ j ] ) break ;
    if ( j == c - 1 ) result ++ ;
  }
  for ( int i = 0 ;
  i < r ;
  i ++ ) {
    int j ;
    for ( j = c - 1 ;
    j > 0 ;
    j -- ) if ( mat [ i ] [ j - 1 ] <= mat [ i ] [ j ] ) break ;
    if ( c > 1 && j == 0 ) result ++ ;
  }
  return result ;
}
