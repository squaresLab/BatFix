int maxPrefix ( string s , string t ) {
  int count = 0 ;
  for ( int i = 0 ;
  ;
  i ++ ) {
    if ( ( count == s . size ( ) ) && ( i < t . size ( ) ) ) break ;
    if ( ( t [ i ] == s [ count ] ) && ( i < t . size ( ) ) ) count = count + 1 ;
  }
  return count ;
}
