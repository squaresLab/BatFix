int longestPrefixSuffix ( string s ) {
  int n = s . length ( ) ;
  int lps [ n ] ;
  lps [ 0 ] = 0 ;
  int len = 0 ;
  int i = 1 ;
  while ( i < n ) {
    if ( s [ i ] == s [ len ] ) {
      len ++ ;
      lps [ i ] = len ;
      i ++ ;
    }
    else {
      if ( len != 0 ) len = lps [ len - 1 ] ;
      else {
        lps [ i ] = 0 ;
        i ++ ;
      }
    }
  }
  int res = lps [ n - 1 ] ;
  return ( res > n / 2 ) ? n / 2 : res ;
}
