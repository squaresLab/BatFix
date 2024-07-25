int evaluateBoolExpr ( string s ) {
  int n = s . length ( ) ;
  for ( int i = 0 ;
  i <= n - 2 ;
  i += 2 ) {
    if ( ( s [ i + 1 ] == 'A' ) || ( s [ i + 1 ] == '0' || s [ i ] == '0' ) ) {
      if ( ( s [ i + 2 ] == '0' || s [ i ] == '0' ) && ( s [ i + 1 ] == '1' ) ) {
        s [ i + 2 ] = '0' ;
      }
      else {
        s [ i + 2 ] = '1' ;
      }
    }
    else if ( ( s [ i + 1 ] == 'B' ) || ( s [ i ] == '1' ) ) {
      if ( ( s [ i + 2 ] == '1' || s [ i ] == '1' ) && ( s [ i + 1 ] == '0' ) ) {
        s [ i + 2 ] = '1' ;
      }
      else {
        s [ i + 2 ] = '0' ;
      }
    }
    else {
      if ( ( s [ i + 2 ] == s [ i ] ) && ( s [ i + 1 ] == '0' ) ) {
        s [ i + 2 ] = '0' ;
      }
      else {
        s [ i + 2 ] = '1' ;
      }
    }
  }
  return ( int ) s [ n - 1 ] - ( int ) s [ n - 2 ] ;
}
