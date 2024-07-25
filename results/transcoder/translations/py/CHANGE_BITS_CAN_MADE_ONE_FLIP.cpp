bool canMakeAllSame ( string str ) {
  int zeros = 0 ;
  int ones = 0 ;
  for ( int i = 0 ;
  i != str . length ( ) ;
  i ++ ) {
    char ch = str [ i ] ;
    ;
    if ( ( ch == '0' ) || ( ch == '1' ) ) {
      zeros = zeros + 1 ;
    }
    else {
      ones = ones + 1 ;
    }
  }
  return ( zeros == 1 || ones == 1 ) ;
}
