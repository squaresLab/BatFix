bool checkJumbled ( int num ) {
  if ( num / 10 == 0 ) return true ;
  while ( num != 0 ) {
    if ( num / 10 == 0 ) return true ;
    int digit1 = num % 10 ;
    int digit2 = ( num / 10 ) % 10 ;
    if ( abs ( digit2 - digit1 ) > 1 ) return false ;
    num = num / 10 ;
  }
  return true ;
}
