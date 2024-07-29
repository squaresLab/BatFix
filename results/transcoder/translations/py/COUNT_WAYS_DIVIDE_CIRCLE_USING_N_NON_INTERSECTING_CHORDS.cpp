int chordCnt ( int A ) {
  int n = 2 * A ;
  int dpArray [ n + 1 ] = {
    0 }
    ;
    dpArray [ 0 ] = 1 ;
    dpArray [ 2 ] = 1 ;
    for ( int i = 4 ;
    i <= n + 1 ;
    i += 2 ) {
      for ( int j = 0 ;
      j <= i - 1 ;
      j += 2 ) {
        dpArray [ i ] += ( dpArray [ j ] * dpArray [ i - 2 - j ] ) ;
      }
    }
    return ( int ) dpArray [ n ] ;
  }

