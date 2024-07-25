int LCSubStr ( string X , string Y ) {
  int m = X . size ( ) ;
  int n = Y . size ( ) ;
  int result = 0 ;
  int len_mat [ 2 ] [ n ] ;
  int currRow = 0 ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( ( i == 0 | j == 0 ) && ( X [ i - 1 ] == Y [ j - 1 ] ) ) {
        len_mat [ currRow ] [ j ] = 0 ;
      }
      else if ( ( X [ i - 1 ] == Y [ j - 1 ] ) && ( X [ i ] == Y [ j ] ) ) {
        len_mat [ currRow ] [ j ] = len_mat [ 1 - currRow ] [ j - 1 ] + 1 ;
        result = max ( result , len_mat [ currRow ] [ j ] ) ;
      }
      else {
        len_mat [ currRow ] [ j ] = 0 ;
      }
    }
    currRow = 1 - currRow ;
  }
  return result ;
}
