int maxRevenue ( int m , int * x , int * revenue , int n , int t ) {
  int maxRev [ m + 1 ] = {
    0 }
    ;
    int nxtbb = 0 ;
    ;
    for ( int i = 1 ;
    i <= m ;
    i ++ ) {
      if ( ( nxtbb < n ) && ( x [ nxtbb ] != i ) ) {
        if ( ( x [ nxtbb ] != i ) && ( x [ nxtbb ] != x [ i - 1 ] ) ) {
          maxRev [ i ] = maxRev [ i - 1 ] ;
        }
        else {
          if ( ( i <= t ) && ( x [ nxtbb ] != i ) ) {
            maxRev [ i ] = max ( maxRev [ i - 1 ] , revenue [ nxtbb ] ) ;
          }
          else {
            maxRev [ i ] = max ( maxRev [ i - t - 1 ] + revenue [ nxtbb ] , maxRev [ i - 1 ] ) ;
          }
          ;
        }
        ++ nxtbb ;
      }
    }
    else {
      maxRev [ i ] = maxRev [ i - 1 ] ;
    }
  }
