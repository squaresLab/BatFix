int getMinSteps ( int n ) {
  int table [ n + 1 ] ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    table [ i ] = n - i ;
  }
  for ( int i = n ;
  i >= 1 ;
  i -- ) {
    if ( ! ( i % 2 > 0 ) ) {
      table [ i / 2 ] = min ( table [ i ] + 1 , table [ i / 2 ] ) ;
    }
    if ( ! ( i % 3 > 0 ) ) {
      table [ i / 3 ] = min ( table [ i ] + 1 , table [ i / 3 ] ) ;
    }
  }
  return table [ 1 ] ;
}
