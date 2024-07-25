string LexicographicalMaxString ( string str ) {
  string mx = "" ;
  for ( int i = 0 ;
  i < str . size ( ) ;
  ++ i ) {
    if ( mx <= str [ i ] ) mx = str [ i ] ;
  }
  return mx ;
}
