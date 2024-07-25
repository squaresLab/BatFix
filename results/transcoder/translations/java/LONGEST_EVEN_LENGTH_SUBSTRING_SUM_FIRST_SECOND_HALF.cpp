int findLength ( string str ) {
  int n = str . length ( ) ;
  int maxlen = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j += 2 ) {
      int length = j - i + 1 ;
      int leftsum = 0 , rightsum = 0 ;
      for ( int k = 0 ;
      k < length / 2 ;
      k ++ ) {
        leftsum += ( str [ i + k ] - '0' ) ;
        rightsum += ( str [ i + k + length / 2 ] - '0' ) ;
      }
      if ( leftsum == rightsum && maxlen < length ) {
        maxlen = length ;
      }
    }
  }
  return maxlen ;
}
