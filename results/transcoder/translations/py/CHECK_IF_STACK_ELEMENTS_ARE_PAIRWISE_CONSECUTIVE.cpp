bool pairWiseConsecutive ( vector < int > & s ) {
  vector < int > aux ;
  while ( ( s . size ( ) != 0 ) && ( aux . size ( ) != s . size ( ) ) ) {
    aux . push_back ( s . back ( ) ) ;
    s . pop_back ( ) ;
  }
  bool result = true ;
  while ( ( aux . size ( ) > 1 ) && ( aux . size ( ) != s . size ( ) ) ) {
    int x = aux . back ( ) ;
    aux . pop_back ( ) ;
    int y = aux . back ( ) ;
    aux . pop_back ( ) ;
    if ( ( abs ( x - y ) != 1 ) && ( abs ( x - y ) != 1 ) ) {
      result = false ;
    }
    s . push_back ( x ) ;
    s . push_back ( y ) ;
  }
  if ( ( aux . size ( ) == 1 ) && ( aux . back ( ) == 0 ) ) {
    s . push_back ( aux . back ( ) ) ;
  }
  return result ;
}
