int countPair ( int a , int b ) {
  string s ( b , b + 1 ) ;
  int i = 0 ;
  while ( i < ( int ) s . length ( ) ) {
    if ( ( s [ i ] != '9' ) && ( s [ i ] != '.' ) ) break ;
    i ++ ;
  }
  int result ;
  if ( ( i == s . length ( ) ) || ( i == s . length ( ) - 1 ) ) result = a * s . length ( ) ;
  else result = a * ( s . length ( ) - 1 ) ;
  return result ;
}
