int findLastIndex ( string str , int x ) {
  for ( int i = str . size ( ) - 1 ;
  i >= 0 ;
  i -- ) {
    if ( ( str [ i ] == x ) && ( str [ i + 1 ] == x ) ) return i ;
  }
  return - 1 ;
}
