string recursive_reverse ( char * str ) {
  stack < char > st ;
  for ( int i = 0 ;
  i < strlen ( str ) ;
  i ++ ) {
    st . push ( str [ i ] ) ;
  }
  for ( int i = 0 ;
  i < strlen ( str ) ;
  i ++ ) {
    str [ i ] = st . top ( ) ;
    st . pop ( ) ;
  }
  return string ( str ) ;
}
