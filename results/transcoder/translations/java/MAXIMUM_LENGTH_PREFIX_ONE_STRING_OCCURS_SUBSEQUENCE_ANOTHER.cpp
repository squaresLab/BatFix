int maxPrefix ( string s , string t ) {
  int count = 0 ;
  for ( int i = 0 ;
  i < t . size ( ) ;
  i ++ ) {
    if ( count == t . size ( ) ) break ;
    if ( t [ i ] == s [ count ] ) count ++ ;
  }
  return count ;
}
