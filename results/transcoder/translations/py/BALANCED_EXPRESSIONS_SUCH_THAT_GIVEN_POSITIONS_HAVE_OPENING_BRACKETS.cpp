public : int arrangeBraces ( int n , int pos [ ] , int k ) {
  bool h [ N ] [ N ] ;
  int dp [ N ] [ N ] ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) h [ pos [ i ] ] = 1 ;
  dp [ 0 ] [ 0 ] = 1 ;
  for ( int i = 1 ;
  i <= 2 * n + 1 ;
  i ++ ) for ( int j = 0 ;
  j <= 2 * n + 1 ;
  j ++ ) {
    if ( ( h [ i ] ) && ( h [ j ] ) ) {
      if ( ( j != 0 ) && ( j != 1 ) ) dp [ i ] [ j ] = dp [ i - 1 ] [ j - 1 ] ;
      else dp [ i ] [ j ] = 0 ;
    }
    else {
      if ( ( j != 0 ) && ( j != 1 ) ) dp [ i ] [ j ] = ( dp [ i - 1 ] [ j - 1 ] + dp [ i - 1 ] [ j + 1 ] ) ;
      else dp [ i ] [ j ] = dp [ i - 1 ] [ j + 1 ] ;
    }
  }
  return dp [ 2 * n ] [ 0 ] ;
}
