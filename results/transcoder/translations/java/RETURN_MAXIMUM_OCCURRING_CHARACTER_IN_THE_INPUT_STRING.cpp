char getMaxOccuringChar ( const std :: string & str ) {
  int count [ ASCII_SIZE ] ;
  int len = str . length ( ) ;
  for ( int i = 0 ;
  i < len ;
  i ++ ) {
    count [ str [ i ] ] ++ ;
  }
  int max = - 1 ;
  char result = ' ' ;
  for ( int i = 0 ;
  i < len ;
  i ++ ) {
    if ( max < count [ str [ i ] ] ) {
      max = count [ str [ i ] ] ;
      result = str [ i ] ;
    }
  }
  return result ;
}
