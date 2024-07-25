bool sortedAfterSwap ( int * A , int * B , int n ) {
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) {
    if ( B [ i ] ) {
      if ( A [ i ] != i + 1 ) {
        A [ i ] = A [ i + 1 ] ;
        A [ i + 1 ] = A [ i ] ;
      }
    }
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( A [ i ] != i + 1 ) return false ;
  }
  return true ;
}
