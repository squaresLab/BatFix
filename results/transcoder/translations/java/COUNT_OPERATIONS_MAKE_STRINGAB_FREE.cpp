int abFree ( char * s ) {
  int b_count = 0 ;
  int res = 0 ;
  for ( int i = 0 ;
  i < strlen ( s ) ;
  i ++ ) {
    if ( s [ strlen ( s ) - i - 1 ] == 'a' ) {
      res = ( res + b_count ) ;
      b_count = ( b_count * 2 ) ;
    }
    else {
      b_count += 1 ;
    }
  }
  return res ;
}
