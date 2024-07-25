int findLastIndex ( string str , int x ) {
  int index = - 1 ;
  for ( int i = 0 ;
  i != str . size ( ) ;
  i ++ ) {
    if ( str [ i ] == x ) index = i ;
  }
  return index ;
}
