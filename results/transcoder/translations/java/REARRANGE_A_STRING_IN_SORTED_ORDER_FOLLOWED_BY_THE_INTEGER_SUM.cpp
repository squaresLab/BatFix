string arrangeString ( string str ) {
  int char_count [ MAX_CHAR ] ;
  int sum = 0 ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    if ( isupper ( str [ i ] ) ) {
      char_count [ str [ i ] - 'A' ] ++ ;
    }
    else {
      sum = sum + ( str [ i ] - '0' ) ;
    }
  }
  string res = "" ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    char ch = ( char ) ( 'A' + i ) ;
    while ( char_count [ i ] -- != 0 ) {
      res = res + ch ;
    }
  }
  if ( sum > 0 ) {
    res = res + sum ;
  }
  return res ;
}
