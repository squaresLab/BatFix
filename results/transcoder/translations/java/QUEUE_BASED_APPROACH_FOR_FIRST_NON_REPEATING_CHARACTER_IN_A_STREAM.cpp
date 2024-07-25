void firstNonRepeating ( string str ) {
  vector < int > charCount ( MAX_CHAR , 0 ) ;
  queue < char > q ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    char ch = str [ i ] ;
    q . push ( ch ) ;
    charCount [ ch - 'a' ] ++ ;
    while ( ! q . empty ( ) ) {
      if ( charCount [ q . front ( ) - 'a' ] > 1 ) {
        q . pop ( ) ;
      }
      else {
        cout << q . front ( ) << " " ;
        break ;
      }
    }
    if ( q . empty ( ) ) {
      cout << - 1 << " " ;
    }
  }
  cout << endl ;
}
