void sortByPattern ( string & str , string pat ) {
  static int MAX_CHAR = 256 ;
  int count [ MAX_CHAR ] = {
    0 }
    ;
    for ( int i = 0 ;
    i < str . length ( ) ;
    i ++ ) count [ ( unsigned char ) str [ i ] - 97 ] ++ ;
    int index = 0 ;
    ;
    str . clear ( ) ;
    for ( int i = 0 ;
    i < pat . length ( ) ;
    i ++ ) {
      int j = 0 ;
      while ( ( j < count [ ( unsigned char ) pat [ i ] - ( unsigned char ) 'a' ] ) && ( j < MAX_CHAR ) ) {
        str += pat [ i ] ;
        j = j + 1 ;
        index ++ ;
      }
    }
  }
