char getSecondMostFreq ( const std :: string & str ) {
  const int NO_OF_CHARS = 256 ;
  std :: vector < int > count ( NO_OF_CHARS ) ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  ++ i ) {
    count [ ( unsigned char ) str [ i ] ] ++ ;
  }
  int first = 0 , second = 0 ;
  for ( int i = 0 ;
  i < NO_OF_CHARS ;
  ++ i ) {
    if ( count [ i ] > count [ first ] ) {
      second = first ;
      first = i ;
    }
    else if ( ( count [ i ] > count [ second ] && count [ i ] != count [ first ] ) || ( count [ i ] > count [ second ] && count [ i ] != count [ first ] ) ) {
      second = i ;
    }
  }
  return ( char ) second ;
}
