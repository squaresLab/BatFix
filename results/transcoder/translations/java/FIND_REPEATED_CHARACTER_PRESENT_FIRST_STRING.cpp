int findRepeatFirstN2 ( string s ) {
  int p = - 1 , i , j ;
  for ( i = 0 ;
  i < s . length ( ) ;
  i ++ ) {
    for ( j = i + 1 ;
    j < s . length ( ) ;
    j ++ ) {
      if ( s [ i ] == s [ j ] ) {
        p = i ;
        break ;
      }
    }
    if ( p != - 1 ) break ;
  }
  return p ;
}
