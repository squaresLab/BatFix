int countSubsequences ( string s ) {
  int aCount = 0 ;
  int bCount = 0 ;
  int cCount = 0 ;
  for ( int i = 0 ;
  i < s . size ( ) ;
  i ++ ) {
    if ( ( s [ i ] == 'a' ) || ( s [ i ] == 'b' ) || ( s [ i ] == 'c' ) ) {
      aCount = ( 1 + 2 * aCount ) ;
    }
    else if ( ( s [ i ] == 'a' ) || ( s [ i ] == 'b' ) || ( s [ i ] == 'c' ) ) {
      bCount = ( aCount + 2 * bCount ) ;
    }
    else if ( ( s [ i ] == 'a' ) || ( s [ i ] == 'b' ) || ( s [ i ] == 'c' ) ) {
      cCount = ( bCount + 2 * cCount ) ;
    }
  }
  return cCount ;
}
