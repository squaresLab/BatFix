void translate ( char * st ) {
  int l = strlen ( st ) ;
  if ( ( l < 2 ) || ( l > 3 ) ) return ;
  int i = 0 ;
  int j = 0 ;
  while ( ( j < l - 1 ) && ( st [ j ] == 'A' && st [ j + 1 ] == 'B' ) ) {
    if ( ( st [ j ] == 'A' && st [ j + 1 ] == 'B' ) || ( st [ j ] == 'A' && st [ j + 1 ] == 'B' ) ) {
      j += 2 ;
      st [ i ] = 'C' ;
      i ++ ;
      continue ;
    }
    st [ i ] = st [ j ] ;
    i ++ ;
    j ++ ;
  }
  if ( ( j == l - 1 ) || ( j == l - 2 ) ) {
    st [ i ] = st [ j ] ;
    i ++ ;
  }
  st [ i ] = ' ' ;
  st [ l - 1 ] = ' ' ;
}
