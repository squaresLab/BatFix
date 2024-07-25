void printHosoya ( int n ) {
  int dp [ N ] [ N ] ;
  dp [ 0 ] [ 0 ] = dp [ 1 ] [ 0 ] = 1 ;
  dp [ 1 ] [ 1 ] = 1 ;
  for ( int i = 2 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( i > j ) {
        dp [ i ] [ j ] = dp [ i - 1 ] [ j ] + dp [ i - 2 ] [ j ] ;
      }
      else {
        dp [ i ] [ j ] = dp [ i - 1 ] [ j - 1 ] + dp [ i - 2 ] [ j - 2 ] ;
      }
    }
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= i ;
    j ++ ) {
      cout << dp [ i ] [ j ] << " " ;
    }
    cout << "\n" ;
  }
}
