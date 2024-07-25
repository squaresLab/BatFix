void computeLPSArray ( const string & pat , int M , int lps [ ] ) {
  int len = 0 ;
  int i = 1 ;
  lps [ 0 ] = 0 ;
  while ( i < M ) {
    if ( pat [ i ] == pat [ len ] ) {
      len ++ ;
      lps [ i ] = len ;
      i ++ ;
    }
    else {
      if ( len != 0 ) len = lps [ len - 1 ] ;
      else {
        lps [ i ] = len ;
        i ++ ;
      }
    }
  }
}
