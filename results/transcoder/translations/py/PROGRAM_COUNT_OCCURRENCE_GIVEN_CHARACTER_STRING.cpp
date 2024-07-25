int count ( string s , char c ) {
  int res = 0 ;
  for ( int i = 0 ;
  i < s . size ( ) ;
  i ++ ) if ( ( s [ i ] == c ) || ( s [ i ] == ' ' ) ) res = res + 1 ;
  return res ;
}
