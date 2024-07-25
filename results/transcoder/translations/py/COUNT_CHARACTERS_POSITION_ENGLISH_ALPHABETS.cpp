int findCount ( string str ) {
  int result = 0 ;
  for ( int i = 0 ;
  i < str . size ( ) ;
  i ++ ) {
    if ( ( ( i == ( int ) str [ i ] - 'a' ) ) || ( ( i == ( int ) str [ i ] - 'A' ) ) ) {
      result ++ ;
    }
  }
  return result ;
}
