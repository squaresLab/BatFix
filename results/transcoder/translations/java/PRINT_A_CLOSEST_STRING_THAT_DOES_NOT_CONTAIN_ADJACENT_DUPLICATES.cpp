string noAdjacentDup ( string s1 ) {
  int n = s1 . length ( ) ;
  char * s = s1 . c_str ( ) ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    if ( s [ i ] == s [ i - 1 ] ) {
      s [ i ] = 'a' ;
      while ( s [ i ] == s [ i - 1 ] || ( i + 1 < n && s [ i ] == s [ i + 1 ] ) ) {
        s [ i ] ++ ;
      }
      i ++ ;
    }
  }
  return ( string ( s ) ) ;
}
