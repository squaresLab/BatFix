bool sortedAfterSwap ( int * A , int * B , int n ) {
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) {
    if ( ( * B ) == 1 ) {
      int j = i ;
      while ( ( * B ) == 1 ) {
        j = j + 1 ;
      }
      A [ 0 ] = A [ i ] + std :: min ( A [ i ] , A [ j + 1 ] ) + A [ j + 1 ] ;
      A [ i ] = j ;
    }
  }
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( * A ) != ( * B ) ) {
      return false ;
    }
  }
  return true ;
}
