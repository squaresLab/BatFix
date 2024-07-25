void convertOpposite ( char * str ) {
  int ln = strlen ( str ) ;
  for ( int i = 0 ;
  i < ln ;
  i ++ ) {
    char c = str [ i ] ;
    if ( islower ( c ) ) {
      str [ i ] = toupper ( c ) + "" ;
    }
    else {
      str [ i ] = tolower ( c ) + "" ;
    }
  }
}
