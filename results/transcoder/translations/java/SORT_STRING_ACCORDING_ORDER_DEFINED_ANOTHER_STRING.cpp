void sortByPattern ( char * str , char * pat ) {
  int count [ MAX_CHAR ] ;
  for ( int i = 0 ;
  i < strlen ( str ) ;
  i ++ ) count [ str [ i ] - 'a' ] ++ ;
  int index = 0 ;
  for ( int i = 0 ;
  i < strlen ( pat ) ;
  i ++ ) {
    for ( int j = 0 ;
    j < count [ pat [ i ] - 'a' ] ;
    j ++ ) str [ index ++ ] = pat [ i ] ;
  }
}
