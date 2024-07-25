int countPS ( int i , int j ) {
  if ( i >= n || j < 0 ) return 0 ;
  if ( dp [ i ] [ j ] != - 1 ) return dp [ i ] [ j ] ;
  if ( ( i - j == 1 ) || ( i - j == - 1 ) ) {
    if ( str [ i ] == str [ j ] ) return dp [ i ] [ j ] = 3 ;
    else return dp [ i ] [ j ] = 2 ;
  }
  if ( i == j ) return dp [ 1 ] [ j ] = 1 ;
  else if ( str [ i ] == str [ j ] ) return dp [ i ] [ j ] = countPS ( i + 1 , j ) + countPS ( i , j - 1 ) + 1 ;
  else return dp [ i ] [ j ] = countPS ( i + 1 , j ) + countPS ( i , j - 1 ) - countPS ( i + 1 , j - 1 ) ;
}
