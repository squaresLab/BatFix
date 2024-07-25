int eggDrop ( int n , int k ) {
  int eggFloor [ k + 1 ] [ n + 1 ] ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    eggFloor [ i ] [ 1 ] = 1 ;
    eggFloor [ i ] [ 0 ] = 0 ;
  }
  for ( int j = 1 ;
  j <= k ;
  j ++ ) {
    eggFloor [ 1 ] [ j ] = j ;
  }
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    for ( int j = 2 ;
    j <= k ;
    j ++ ) {
      eggFloor [ i ] [ j ] = INT_MAX ;
      for ( int x = 1 ;
      x <= j ;
      x ++ ) {
        int res = 1 + max ( eggFloor [ i - 1 ] [ x - 1 ] , eggFloor [ i ] [ j - x ] ) ;
        if ( res < eggFloor [ i ] [ j ] ) eggFloor [ i ] [ j ] = res ;
      }
    }
  }
  return eggFloor [ n ] [ k ] ;
}
