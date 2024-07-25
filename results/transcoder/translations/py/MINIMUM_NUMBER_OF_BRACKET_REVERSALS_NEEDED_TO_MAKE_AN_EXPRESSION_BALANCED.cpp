int countMinReversals ( string expr ) {
  int lenn = expr . length ( ) ;
  if ( ( lenn % 2 ) == 0 ) return - 1 ;
  string s ;
  for ( int i = 0 ;
  i < lenn ;
  i ++ ) {
    if ( ( expr [ i ] == '\0' ) && ( s . length ( ) ) ) {
      if ( ( s [ 0 ] == '\0' ) || ( s [ 0 ] == '\n' ) ) s . erase ( s . begin ( ) ) ;
      else s . insert ( s . begin ( ) , expr [ i ] ) ;
    }
    else s . insert ( s . begin ( ) , expr [ i ] ) ;
  }
  int red_len = s . length ( ) ;
  int n = 0 ;
  while ( ( s . length ( ) ) && ( s [ 0 ] == '\0' ) ) {
    s . erase ( s . begin ( ) ) ;
    n ++ ;
  }
  return ( red_len / 2 + n % 2 ) ;
}
