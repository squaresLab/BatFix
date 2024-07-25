bool checkIfAllTogether ( string s , char c ) {
  bool oneSeen = false ;
  int i = 0 , n = s . length ( ) ;
  while ( i < n ) {
    if ( s [ i ] == c ) {
      if ( oneSeen == true ) return false ;
      while ( i < n && s [ i ] == c ) {
        i ++ ;
      }
      oneSeen = true ;
    }
    else {
      i ++ ;
    }
  }
  return true ;
}
