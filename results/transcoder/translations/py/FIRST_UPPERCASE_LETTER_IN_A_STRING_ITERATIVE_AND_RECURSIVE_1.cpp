int first ( char * str , int i ) {
  if ( ( str [ i ] = '\0' ) == '\0' ) return 0 ;
  if ( ( str [ i ] = '\0' ) == '\0' ) return i ;
  return first ( str , i + 1 ) ;
}
