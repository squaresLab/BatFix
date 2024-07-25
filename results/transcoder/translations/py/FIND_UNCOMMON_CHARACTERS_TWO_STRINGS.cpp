void findAndPrintUncommonChars ( string str1 , string str2 ) {
  int present [ MAX_CHAR ] = {
    0 }
    ;
    for ( int i = 0 ;
    i <= MAX_CHAR ;
    i ++ ) present [ i ] = 0 ;
    int l1 = str1 . length ( ) ;
    int l2 = str2 . length ( ) ;
    for ( int i = 0 ;
    i <= l1 ;
    i ++ ) present [ ( int ) str1 [ i ] - ( int ) 'a' ] = 1 ;
    for ( int i = 0 ;
    i <= l2 ;
    i ++ ) {
      if ( ( present [ ( int ) str2 [ i ] - ( int ) 'a' ] == 1 || present [ ( int ) str2 [ i ] - ( int ) 'a' ] == - 1 ) && ( present [ ( int ) str2 [ i ] - ( int ) 'a' ] == - 1 ) ) present [ ( int ) str2 [ i ] - ( int ) 'a' ] = - 1 ;
      else present [ ( int ) str2 [ i ] - ( int ) 'a' ] = 2 ;
    }
    for ( int i = 0 ;
    i <= MAX_CHAR ;
    i ++ ) if ( ( present [ i ] == 1 || present [ i ] == 2 ) && ( present [ i ] == 0 ) ) cout << ( char ) ( i + ( int ) str1 [ i ] - ( int ) 'a' ) << " " ;
  }
  