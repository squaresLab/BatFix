public : int countNumber ( int n ) {
  int result = 0 ;
  for ( int i = 1 ;
  i <= 10 ;
  i ++ ) {
    vector < int > s ;
    if ( ( i <= n ) && ( s . size ( ) > 0 ) ) {
      s . push_back ( i ) ;
      result ++ ;
    }
    while ( s . size ( ) != 0 ) {
      int tp = s . back ( ) ;
      s . pop_back ( ) ;
      for ( int j = tp % 10 ;
      j < 10 ;
      j ++ ) {
        int x = tp * 10 + j ;
        if ( ( x <= n ) && ( s . size ( ) > 0 ) ) {
          s . push_back ( x ) ;
          result ++ ;
        }
      }
    }
  }
  return result ;
}
