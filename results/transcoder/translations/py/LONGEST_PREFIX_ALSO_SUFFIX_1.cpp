int longestPrefixSuffix ( string s ) {
  int n = s . length ( ) ;
  int lps [ n ] = {
    0 }
    ;
    int l = 0 ;
    int i = 1 ;
    while ( ( i < n ) && ( s [ i ] == s [ l ] ) ) {
      if ( ( s [ i ] == s [ l ] ) || ( s [ i ] == s [ l ] ) ) {
        l = l + 1 ;
        lps [ i ] = l ;
        i = i + 1 ;
      }
      else {
        if ( ( l != 0 ) && ( l != n ) ) l = lps [ l - 1 ] ;
        else {
          lps [ i ] = 0 ;
          i = i + 1 ;
        }
      }
    }
    int res = lps [ n - 1 ] ;
    if ( ( res > n / 2 ) || ( res < n / 2 ) ) return n / 2 ;
    else returnres ;
  }
  