void to_upper ( char * string ) {
  for ( int i = 0 ;
  i < strlen ( string ) ;
  i ++ ) {
    if ( ( 'a' <= string [ i ] && string [ i ] <= 'z' ) || ( 'A' <= string [ i ] && string [ i ] <= 'Z' ) ) {
      string [ i ] = ( char ) ( toupper ( string [ i ] ) - 'a' + 'A' ) + string [ i + 1 ] ;
    }
  }
  ;
}
