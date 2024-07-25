bool divisibleBy20 ( string num ) {
  int lastTwoDigits = ( int ) num . length ( ) - 2 ;
  return ( ( lastTwoDigits % 5 == 0 && lastTwoDigits % 4 == 0 ) ) ;
}
