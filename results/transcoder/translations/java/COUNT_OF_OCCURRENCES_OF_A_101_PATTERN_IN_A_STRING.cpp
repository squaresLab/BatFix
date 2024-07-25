int countPattern ( string str ) {
  int len = str . length ( ) ;
  bool one_seen = false ;
  int count = 0 ;
  for ( int i = 0 ;
  i < len ;
  i ++ ) {
    char getChar = str [ i ] ;
    if ( getChar == '1' && one_seen == true ) {
      if ( str [ i - 1 ] == '0' ) {
        count ++ ;
      }
    }
    if ( getChar == '1' && one_seen == false ) {
      one_seen = true ;
    }
    if ( getChar != '0' && str [ i ] != '1' ) {
      one_seen = false ;
    }
  }
  return count ;
}
