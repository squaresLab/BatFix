bool canMakeAllSame ( string str ) {
  int zeros = 0 , ones = 0 ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    char ch = str [ i ] ;
    if ( ch == '0' ) {
      ++ zeros ;
    }
    else {
      ++ ones ;
    }
  }
  return ( zeros == 1 || ones == 1 ) ;
}
