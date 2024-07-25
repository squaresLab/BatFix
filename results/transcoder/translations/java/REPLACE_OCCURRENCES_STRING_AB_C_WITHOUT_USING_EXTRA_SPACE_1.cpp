void translate ( char * str ) {
  int len = strlen ( str ) ;
  if ( len < 2 ) return ;
  int i = 0 ;
  int j = 0 ;
  while ( j < len - 1 ) {
    if ( str [ j ] == 'A' && str [ j + 1 ] == 'B' ) {
      j = j + 2 ;
      str [ i ++ ] = 'C' ;
      continue ;
    }
    str [ i ++ ] = str [ j ++ ] ;
  }
  if ( j == len - 1 ) str [ i ++ ] = str [ j ] ;
  str [ i ] = ' ' ;
  str [ len - 1 ] = ' ' ;
}
