int countMinReversals ( string expr ) {
  int len = expr . length ( ) ;
  if ( len % 2 != 0 ) return - 1 ;
  stack < char > s ;
  for ( int i = 0 ;
  i < len ;
  i ++ ) {
    char c = expr [ i ] ;
    if ( c == '}' && ! s . empty ( ) ) {
      if ( s . top ( ) == '{' ) {
        s . pop ( ) ;
      }
      else {
        s . push ( c ) ;
      }
    }
    else {
      s . push ( c ) ;
    }
  }
  int red_len = s . size ( ) ;
  int n = 0 ;
  while ( ! s . empty ( ) && s . top ( ) == '{' ) {
    s . pop ( ) ;
    n ++ ;
  }
  return ( red_len / 2 + n % 2 ) ;
}
