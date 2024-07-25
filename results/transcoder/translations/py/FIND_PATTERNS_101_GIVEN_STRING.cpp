int patternCount ( string str ) {
  char last = str [ 0 ] ;
  int i = 1 ;
  ;
  int counter = 0 ;
  while ( ( i < str . length ( ) ) && ( last == '1' ) ) {
    if ( ( str [ i ] == '0' && last == '1' ) || ( str [ i ] == '0' ) || ( str [ i ] == '1' ) ) {
      while ( ( str [ i ] == '0' ) && ( last == '1' ) ) {
        i ++ ;
        if ( ( str [ i ] == '1' ) && ( last == '1' ) ) counter ++ ;
      }
    }
    last = str [ i ] ;
    i ++ ;
  }
  return counter ;
}
