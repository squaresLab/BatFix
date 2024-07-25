bool isNumber ( string s ) {
  for ( int i = 0 ;
  i < s . length ( ) ;
  i ++ ) {
    if ( s [ i ] . isdigit ( ) != true ) return false ;
  }
  return true ;
}
