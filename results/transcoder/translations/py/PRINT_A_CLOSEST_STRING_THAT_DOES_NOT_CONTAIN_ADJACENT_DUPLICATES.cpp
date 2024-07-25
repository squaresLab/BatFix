void noAdjacentDup ( string s ) {
  int n = s . length ( ) ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    if ( ( s [ i ] == s [ i - 1 ] ) && ( s [ i ] == s [ i - 1 ] || ( i + 1 < n && s [ i ] == s [ i + 1 ] ) ) ) {
      s [ i ] = "a" ;
      while ( ( s [ i ] == s [ i - 1 ] || ( i + 1 < n && s [ i ] == s [ i + 1 ] ) ) && ( s [ i ] == s [ i + 1 ] ) ) {
        s [ i ] ++ ;
      }
      i ++ ;
    }
  }
}
