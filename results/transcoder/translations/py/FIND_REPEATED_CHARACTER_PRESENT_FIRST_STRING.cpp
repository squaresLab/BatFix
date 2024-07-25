int findRepeatFirstN2 ( string s ) {
  int p = - 1 ;
  for ( int i = 0 ;
  i < s . size ( ) ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < s . size ( ) ;
    j ++ ) {
      if ( ( s [ i ] == s [ j ] ) && ( s [ i ] != s [ j ] ) ) {
        p = i ;
        break ;
      }
    }
    if ( ( p != - 1 ) || ( s [ i ] == s [ j ] ) ) break ;
  }
  return p ;
}
