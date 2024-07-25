StringBuffer encrypt ( const char * text , int s ) {
  StringBuffer result ;
  for ( int i = 0 ;
  i < strlen ( text ) ;
  i ++ ) {
    if ( isupper ( text [ i ] ) ) {
      char ch = ( char ) ( ( ( int ) text [ i ] + s - 65 ) % 26 + 65 ) ;
      result . append ( ch ) ;
    }
    else {
      char ch = ( char ) ( ( ( int ) text [ i ] + s - 97 ) % 26 + 97 ) ;
      result . append ( ch ) ;
    }
  }
  return result ;
}
