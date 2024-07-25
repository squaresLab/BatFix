int findCount ( string str ) {
  int result = 0 ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    if ( i == ( str [ i ] - 'a' ) || i == ( str [ i ] - 'A' ) ) result ++ ;
  }
  return result ;
}
