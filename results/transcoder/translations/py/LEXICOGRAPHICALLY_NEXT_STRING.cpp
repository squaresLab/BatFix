char nextWord ( char * str ) {
  if ( ( * str == ' ' ) || ( * str == '\t' ) ) return 'a' ;
  int i = strlen ( str ) - 1 ;
  while ( ( * str == 'z' ) && i >= 0 ) -- i ;
  if ( ( i == - 1 ) || ( * str == 'a' ) || ( * str == 'z' ) ) return 'a' ;
  else str ++ ;
  return * str ;
}
