void firstnonrepeating ( string Str ) {
  static int MAX_CHAR = 256 ;
  queue < int > q ;
  int charCount [ MAX_CHAR ] = {
    0 }
    ;
    for ( int i = 0 ;
    i < Str . size ( ) ;
    i ++ ) {
      q . push ( Str [ i ] ) ;
      charCount [ ( int ) Str [ i ] - ( int ) 'a' ] ++ ;
      while ( ( ! q . empty ( ) ) && ( charCount [ ( int ) q . front ( ) - ( int ) 'a' ] > 1 ) ) {
        if ( ( charCount [ ( int ) q . front ( ) - ( int ) 'a' ] > 1 ) || ( charCount [ ( int ) q . front ( ) - ( int ) 'a' ] < 1 ) ) q . pop ( ) ;
        else {
          cout << q . front ( ) << " " ;
          break ;
        }
      }
      if ( ( q . empty ( ) ) || ( charCount [ ( int ) q . front ( ) - ( int ) 'a' ] < 1 ) ) cout << - 1 << " " ;
    }
    cout << endl ;
  }
  