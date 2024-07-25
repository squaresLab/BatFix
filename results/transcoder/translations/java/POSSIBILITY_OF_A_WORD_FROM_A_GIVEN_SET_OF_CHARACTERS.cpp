bool isPresent ( string s , string q ) {
  vector < int > freq ( MAX_CHAR , 0 ) ;
  for ( int i = 0 ;
  i < s . size ( ) ;
  i ++ ) {
    freq [ s [ i ] ] ++ ;
  }
  for ( int i = 0 ;
  i < q . size ( ) ;
  i ++ ) {
    freq [ q [ i ] ] -- ;
    if ( freq [ q [ i ] ] < 0 ) return false ;
  }
  return true ;
}
