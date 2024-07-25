void sortString ( string str ) {
  int charCount [ MAX_CHAR ] = {
    0 }
    ;
    ;
    for ( int i = 0 ;
    i < str . length ( ) ;
    i ++ ) {
      charCount [ ( int ) str [ i ] - ( int ) 'a' ] ++ ;
    }
    ;
    for ( int i = MAX_CHAR - 1 ;
    i >= 0 ;
    i -- ) {
      for ( int j = 0 ;
      j < charCount [ i ] ;
      j ++ ) {
        cout << ( char ) ( 97 + i ) << " " ;
      }
      ;
    }
    ;
  }
  