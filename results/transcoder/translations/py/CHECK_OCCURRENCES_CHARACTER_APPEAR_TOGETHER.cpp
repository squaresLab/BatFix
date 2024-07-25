bool checkIfAllTogether ( string s , char c ) {
  bool oneSeen = false ;
  int i = 0 ;
  int n = s . length ( ) ;
  while ( ( i < n ) && ( s [ i ] == c ) ) {
    if ( ( s [ i ] == ' ' ) || ( s [ i ] == '\t' ) ) {
      if ( ( oneSeen == true ) || ( s [ i ] == '\n' ) ) return false ;
      while ( ( i < n && s [ i ] == c ) || ( s [ i ] == '\t' ) ) i = i + 1 ;
      oneSeen = true ;
    }
    else i = i + 1 ;
  }
  return true ;
}
