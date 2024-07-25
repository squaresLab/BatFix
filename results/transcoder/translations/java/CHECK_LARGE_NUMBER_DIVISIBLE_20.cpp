Boolean divisibleBy20 ( char * num ) {
  int lastTwoDigits = atoi ( num + strlen ( num ) - 2 ) ;
  return ( ( lastTwoDigits % 5 == 0 ) && ( lastTwoDigits % 4 == 0 ) ) ;
}
