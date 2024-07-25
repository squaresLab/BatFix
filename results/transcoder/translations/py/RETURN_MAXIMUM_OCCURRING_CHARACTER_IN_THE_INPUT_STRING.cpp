char getMaxOccuringChar ( const std :: string & str ) {
  std :: vector < int > count ( ASCII_SIZE ) ;
  int max = - 1 ;
  char c = '\0' ;
  for ( std :: string :: const_iterator i = str . begin ( ) ;
  i != str . end ( ) ;
  ++ i ) {
    count [ ( * i ) ] ++ ;
  }
  ;
  for ( std :: string :: const_iterator i = str . begin ( ) ;
  i != str . end ( ) ;
  ++ i ) {
    if ( max < count [ ( * i ) ] ) {
      max = count [ ( * i ) ] ;
      c = * i ;
    }
  }
  return c ;
}
