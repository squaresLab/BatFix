char * replace_spaces ( char * str ) {
  int space_count = 0 , i = 0 ;
  for ( i = 0 ;
  i < strlen ( str ) ;
  i ++ ) if ( str [ i ] == ' ' ) space_count ++ ;
  while ( str [ i - 1 ] == ' ' ) {
    space_count -- ;
    i -- ;
  }
  int new_length = i + space_count * 2 ;
  if ( new_length > MAX ) return str ;
  int index = new_length - 1 ;
  char * new_str = str ;
  str [ new_length ] = '\0' ;
  for ( int j = i - 1 ;
  j >= 0 ;
  j -- ) {
    if ( new_str [ j ] == ' ' ) {
      str [ index ] = '0' ;
      str [ index - 1 ] = '2' ;
      str [ index - 2 ] = '%' ;
      index = index - 3 ;
    }
    else {
      str [ index ] = new_str [ j ] ;
      index -- ;
    }
  }
  return str ;
}
