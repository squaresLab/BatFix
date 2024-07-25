int pre_compute ( int a [ ] , int n , int index , int k ) {
  int dp [ n ] [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( a [ i ] > a [ 0 ] ) {
      dp [ 0 ] [ i ] = a [ i ] + a [ 0 ] ;
    }
    else {
      dp [ 0 ] [ i ] = a [ i ] ;
    }
  }
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( a [ j ] > a [ i ] && j > i ) {
        if ( dp [ i - 1 ] [ i ] + a [ j ] > dp [ i - 1 ] [ j ] ) {
          dp [ i ] [ j ] = dp [ i - 1 ] [ i ] + a [ j ] ;
        }
        else {
          dp [ i ] [ j ] = dp [ i - 1 ] [ j ] ;
        }
      }
      else {
        dp [ i ] [ j ] = dp [ i - 1 ] [ j ] ;
      }
    }
  }
  return dp [ index ] [ k ] ;
}
