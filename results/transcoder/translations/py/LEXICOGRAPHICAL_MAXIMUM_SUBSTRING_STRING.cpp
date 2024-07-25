string LexicographicalMaxString ( string str ) {
  string mx = "" ;
  for ( int i = 0 ;
  i < str . size ( ) ;
  i ++ ) mx = max ( mx , str [ i ] ) ;
  return mx ;
}
