void translate ( string & st ) {
  for ( int i = 1 ;
  i < st . size ( ) ;
  i ++ ) {
    if ( ( st [ i - 1 ] == 'A' && st [ i ] == 'B' ) || ( st [ i ] == 'C' && st [ i ] == 'D' ) ) {
      st [ i - 1 ] = 'C' ;
      for ( int j = i ;
      j < st . size ( ) - 1 ;
      j ++ ) st [ j ] = st [ j + 1 ] ;
      st [ st . size ( ) - 1 ] = ' ' ;
    }
  }
  return ;
}
