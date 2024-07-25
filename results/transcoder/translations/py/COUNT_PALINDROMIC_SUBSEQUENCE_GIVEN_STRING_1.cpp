int countPS ( int i , int j ) {
  if ( ( i >= n || j < 0 ) && ( j >= 0 ) ) return 0 ;
  if ( ( dp [ i ] [ j ] != - 1 ) && ( dp [ i ] [ j ] != - 1 ) ) return dp [ i ] [ j ] ;
  if ( ( abs ( i - j ) == 1 ) && ( str [ i ] == str [ j ] ) ) {
    dp [ i ] [ j ] = 3 ;
    return dp [ i ] [ j ] ;
  }
  else {
    dp [ i ] [ j ] = 2 ;
    return dp [ i ] [ j ] ;
  }
  if ( ( i == j ) && ( str [ i ] == str [ j ] ) ) {
    dp [ 1 ] [ j ] = 1 ;
    return dp [ 1 ] [ j ] ;
  }
  else if ( ( str [ i ] == str [ j ] ) && ( str [ i ] == str [ j ] ) ) {
    dp [ i ] [ j ] = ( countPS ( i + 1 , j ) + countPS ( i , j - 1 ) + 1 ) ;
    return dp [ i ] [ j ] ;
  }
  else {
    dp [ i ] [ j ] = ( countPS ( i + 1 , j ) + countPS ( i , j - 1 ) - countPS ( i + 1 , j - 1 ) ) ;
    return dp [ i ] [ j ] ;
  }
}
