int getMinSquares ( int n ) {
  int dp [ ] = {
    0 , 1 , 2 , 3 }
    ;
    for ( int i = 4 ;
    i <= n ;
    i ++ ) {
      dp [ i ] = i ;
      for ( int x = 1 ;
      x <= ( int ) ceil ( sqrt ( i ) ) ;
      x ++ ) {
        int temp = x * x ;
        ;
        if ( temp > i ) break ;
        else dp [ i ] = min ( dp [ i ] , 1 + dp [ i - temp ] ) ;
      }
    }
    return dp [ n ] ;
  }
  