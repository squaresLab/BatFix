String to_upper ( char * in ) {
  for ( int i = 0 ;
  i < strlen ( in ) ;
  i ++ ) {
    if ( 'a' <= in [ i ] & in [ i ] <= 'z' ) in [ i ] = ( char ) ( in [ i ] - 'a' + 'A' ) ;
  }
  return String ( in ) ;
}
