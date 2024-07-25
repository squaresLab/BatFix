int first ( string str ) {
  for ( int i = 0 ;
  i != str . size ( ) ;
  i ++ ) {
    if ( ( str [ i ] . istitle ( ) ) && ( str [ i ] . isalpha ( ) ) ) return str [ i ] ;
  }
  return 0 ;
}
