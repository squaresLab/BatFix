int xorZero ( string str ) {
  int oneCount = 0 ;
  int zeroCount = 0 ;
  int n = str . length ( ) ;
  for ( int i = 0 ;
  i < n ;
  i += 1 ) {
    if ( ( str [ i ] == '1' ) || ( str [ i ] == '0' ) ) {
      oneCount ++ ;
    }
    else {
      zeroCount ++ ;
    }
  }
  if ( ( oneCount % 2 == 0 ) || ( zeroCount % 2 == 0 ) ) {
    return zeroCount ;
  }
  return oneCount ;
}
