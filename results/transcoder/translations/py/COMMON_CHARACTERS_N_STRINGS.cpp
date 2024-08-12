void commonCharacters ( string strings [ ] , int n ) {
  bool prim [ MAX_CHAR ] = {
    true }
    ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      bool sec [ MAX_CHAR ] = {
        false }
        ;
        for ( int j = 0 ;
        j < strings [ i ] . length ( ) ;
        j ++ ) {
          if ( ( prim [ ( int ) strings [ i ] [ j ] - 'a' ] ) && ( prim [ ( int ) strings [ i ] [ j ] - 'a' ] ) ) {
            sec [ ( int ) strings [ i ] [ j ] - 'a' ] = true ;
          }
        }
        for ( int i = 0 ;
        i < MAX_CHAR ;
        i ++ ) {
          prim [ i ] = sec [ i ] ;
        }
      }
      for ( int i = 0 ;
      i < 26 ;
      i ++ ) {
        if ( ( prim [ i ] ) ) {
          cout << i + ( char ) prim [ i ] << " " ;
        }
      }
    }
