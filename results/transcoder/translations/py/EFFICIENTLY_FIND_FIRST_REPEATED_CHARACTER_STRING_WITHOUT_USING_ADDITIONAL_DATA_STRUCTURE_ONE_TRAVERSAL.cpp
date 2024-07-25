int FirstRepeated ( const char * string ) {
  unsigned int checker = 0 ;
  int pos = 0 ;
  for ( int i = 0 ;
  i < strlen ( string ) ;
  i ++ ) {
    unsigned int val = ( unsigned int ) string [ i ] - 'a' ;
    ;
    if ( ( ( checker & ( 1 << val ) ) > 0 ) || ( ( checker & ( 1 << val ) ) < 0 ) ) return pos ;
    checker |= ( 1 << val ) ;
    pos ++ ;
  }
  return - 1 ;
}
