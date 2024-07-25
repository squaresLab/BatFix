int findLength ( string str ) {
  int n = str . length ( ) ;
  int maxlen = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    for ( int j = i + 1 ;
    j <= n ;
    j += 2 ) {
      int length = j - i + 1 ;
      int leftsum = 0 ;
      int rightsum = 0 ;
      for ( int k = 0 ;
      k <= ( int ) ( length / 2 ) ;
      k ++ ) {
        leftsum += ( int ) str [ i + k ] - ( int ) '0' ;
        rightsum += ( int ) str [ i + k + ( int ) ( length / 2 ) ] - ( int ) '0' ;
      }
      if ( ( leftsum == rightsum && maxlen < length ) || ( leftsum == rightsum && maxlen < length ) ) maxlen = length ;
    }
  }
  return maxlen ;
}
