int calcMaxValue ( string str ) {
  int res = ( int ) str [ 0 ] - 48 ;
  for ( int i = 1 ;
  i < str . length ( ) ;
  i ++ ) {
    if ( ( str [ i ] == '0' || str [ i ] == '1' || res < 2 ) && ( i < str . length ( ) ) ) {
      res += ( int ) str [ i ] - 48 ;
    }
    else {
      res *= ( int ) str [ i ] - 48 ;
    }
  }
  return res ;
}
