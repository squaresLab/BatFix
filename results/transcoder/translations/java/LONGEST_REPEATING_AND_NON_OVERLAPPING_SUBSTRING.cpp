string longestRepeatedSubstring ( string str ) {
  int n = str . length ( ) ;
  int LCSRe [ n + 1 ] [ n + 1 ] ;
  string res = "" ;
  int res_length = 0 ;
  int i , index = 0 ;
  for ( i = 1 ;
  i <= n ;
  i ++ ) {
    for ( int j = i + 1 ;
    j <= n ;
    j ++ ) {
      if ( str [ i - 1 ] == str [ j - 1 ] && LCSRe [ i - 1 ] [ j - 1 ] < ( j - i ) ) {
        LCSRe [ i ] [ j ] = LCSRe [ i - 1 ] [ j - 1 ] + 1 ;
        if ( LCSRe [ i ] [ j ] > res_length ) {
          res_length = LCSRe [ i ] [ j ] ;
          index = max ( i , index ) ;
        }
      }
      else {
        LCSRe [ i ] [ j ] = 0 ;
      }
    }
  }
  if ( res_length > 0 ) {
    for ( i = index - res_length + 1 ;
    i <= index ;
    i ++ ) {
      res += str [ i - 1 ] ;
    }
  }
  return res ;
}
