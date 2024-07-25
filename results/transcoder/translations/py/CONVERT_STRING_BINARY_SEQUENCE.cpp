char * strToBinary ( const char * str ) {
  char * binConv = new char [ strlen ( str ) + 1 ] ;
  for ( int i = 0 ;
  i < strlen ( str ) ;
  i ++ ) {
    char asciiVal [ 2 ] ;
    asciiVal [ 0 ] = str [ i ] ;
    asciiVal [ 1 ] = str [ i + 1 ] ;
    asciiVal [ 2 ] = str [ i + 2 ] ;
    asciiVal [ 1 ] = str [ i + 3 ] ;
    asciiVal [ 2 ] = str [ i + 4 ] ;
    asciiVal [ 3 ] = str [ i + 5 ] ;
    asciiVal [ 4 ] = str [ i + 6 ] ;
    asciiVal [ 5 ] = str [ i + 7 ] ;
    asciiVal [ 6 ] = str [ i + 8 ] ;
    asciiVal [ 7 ] = str [ i + 9 ] ;
    asciiVal [ 8 ] = str [ i + 10 ] ;
    asciiVal [ 9 ] = str [ i + 11 ] ;
    asciiVal [ 10 ] = str [ i + 12