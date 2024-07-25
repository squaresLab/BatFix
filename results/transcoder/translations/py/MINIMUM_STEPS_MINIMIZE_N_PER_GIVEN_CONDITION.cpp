int getMinSteps ( int n ) {
  int table [ n + 1 ] = {
    0 }
    ;
    for ( int i = 0 ;
    i < n + 1 ;
    i ++ ) table [ i ] = n - i ;
    for ( int i = n ;
    i > 0 ;
    i -- ) {
      if ( ( ! ( i % 2 ) ) && ( table [ i ] == 0 ) ) table [ i / 2 ] = min ( table [ i ] + 1 , table [ i / 2 ] ) ;
      if ( ( ! ( i % 3 ) ) && ( table [ i ] == 0 ) ) table [ i / 3 ] = min ( table [ i ] + 1 , table [ i / 3 ] ) ;
    }
    int returntable [ 1 ] ;
    COUNT_POSSIBLE_DECODINGS_GIVEN_DIGIT_SEQUENCE_1 | def ;
    int count [ n + 1 ] ;
    count [ 0 ] = 1 ;
    count [ 1 ] = 1 ;
    for ( int i = 2 ;
    i <= n ;
    i ++ ) {
      count [ i ] = 0 ;
      if ( ( digits [ i - 1 ] > '0' ) && ( digits [ i - 1 ] < '7' ) ) count [ i ] = count [ i - 1 ] ;
      if ( ( digits [ i - 2 ] == '1' || ( digits [ i - 2 ] == '2' && digits [ i - 1 ] < '7' ) ) && ( count [ i ] += count [ i - 2 ] ) ) count [ i ] = count [ i - 2 ] ;
    }
    return count [ n ] ;
  }
  