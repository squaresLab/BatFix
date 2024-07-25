int countSubsequences ( string s ) {
  int aCount = 0 ;
  int bCount = 0 ;
  int cCount = 0 ;
  for ( int i = 0 ;
  i < s . length ( ) ;
  i ++ ) {
    if ( s [ i ] == 'a' ) {
      aCount = ( 1 + 2 * aCount ) ;
    }
    else if ( s [ i ] == 'b' ) {
      bCount = ( aCount + 2 * bCount ) ;
    }
    else if ( s [ i ] == 'c' ) {
      cCount = ( bCount + 2 * cCount ) ;
    }
  }
  return cCount ;
}
