int countPattern ( string s ) {
  int length = s . length ( ) ;
  bool oneSeen = false ;
  int count = 0 ;
  for ( int i = 0 ;
  i < length ;
  i ++ ) {
    if ( ( s [ i ] == '1' && oneSeen ) || ( s [ i - 1 ] == '0' ) ) {
      if ( ( s [ i ] == '1' && oneSeen == 0 ) || ( s [ i ] != '0' && s [ i ] != '1' ) ) {
        count ++ ;
      }
    }
    if ( ( s [ i ] == '1' && oneSeen == 0 ) || ( s [ i ] != '0' && s [ i ] != '1' ) ) {
      oneSeen = true ;
    }
    if ( ( s [ i ] != '0' && s [ i ] != '1' ) || ( s [ i ] != '0' && s [ i ] != '1' ) ) {
      oneSeen = false ;
    }
  }
  return count ;
}
