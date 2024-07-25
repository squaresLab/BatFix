public : int maxHamming ( int arr [ ] , int n ) {
  int brr [ 2 * n + 1 ] = {
    0 }
    ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) brr [ i ] = arr [ i ] ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) brr [ n + i ] = arr [ i ] ;
    int maxHam = 0 ;
    for ( int i = 1 ;
    i < n ;
    i ++ ) {
      int currHam = 0 ;
      int k = 0 ;
      for ( int j = i ;
      j < i + n ;
      j ++ ) {
        if ( brr [ j ] != arr [ k ] ) {
          currHam ++ ;
          k = k + 1 ;
        }
      }
      if ( currHam == n ) return n ;
      maxHam = max ( maxHam , currHam ) ;
    }
    return maxHam ;
  }
  