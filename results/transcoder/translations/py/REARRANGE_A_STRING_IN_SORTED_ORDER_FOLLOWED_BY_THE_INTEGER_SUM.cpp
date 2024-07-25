string arrangeString ( string string ) {
  vector < int > char_count ( MAX_CHAR , 0 ) ;
  int s = 0 ;
  for ( int i = 0 ;
  i < string . length ( ) ;
  i ++ ) {
    if ( string [ i ] >= 'A' && string [ i ] <= 'Z' ) char_count [ ( unsigned char ) string [ i ] - 'A' ] ++ ;
    else s += ( unsigned char ) string [ i ] - ( unsigned char ) '0' ;
  }
  string res ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    char ch = ( char ) ( ( char ) 'A' + i ) ;
    while ( char_count [ i ] ) {
      res += ch ;
      char_count [ i ] -- ;
    }
  }
  if ( s > 0 ) res += to_string ( s ) ;
  return res ;
}
