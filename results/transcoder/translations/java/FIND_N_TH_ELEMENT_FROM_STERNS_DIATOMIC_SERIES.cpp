int findSDSFunc ( int n ) {
  int DP [ n + 1 ] ;
  DP [ 0 ] = 0 ;
  DP [ 1 ] = 1 ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    if ( i % 2 == 0 ) {
      DP [ i ] = DP [ i / 2 ] ;
    }
    else {
      DP [ i ] = DP [ ( i - 1 ) / 2 ] + DP [ ( i + 1 ) / 2 ] ;
    }
  }
  return DP [ n ] ;
}
