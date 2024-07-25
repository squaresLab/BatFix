int sortedAfterSwap ( int * A , int * B , int n ) {
  int t = 0 ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    if ( B [ i ] != 0 ) {
      if ( A [ i ] != i + 1 ) {
        t = A [ i ] ;
      }
      A [ i ] = A [ i + 1 ] ;
      A [ i + 1 ] = t ;
    }
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( A [ i ] != i + 1 ) return 0 ;
  }
  return 1 ;
}
