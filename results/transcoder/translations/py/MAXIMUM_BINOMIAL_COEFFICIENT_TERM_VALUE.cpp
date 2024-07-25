int maxcoefficientvalue ( int n ) {
  int C [ n + 1 ] [ n + 1 ] ;
  for ( int y = 0 ;
  y < n + 1 ;
  y ++ ) {
    for ( int i = 0 ;
    i < n + 1 ;
    i ++ ) {
      for ( int j = 0 ;
      j < min ( i , n ) + 1 ;
      j ++ ) {
        if ( ( j == 0 || j == i ) && ( C [ i ] [ j ] == 0 ) ) C [ i ] [ j ] = 1 ;
        ;
      }
      else C [ i ] [ j ] = ( C [ i - 1 ] [ j - 1 ] + C [ i - 1 ] [ j ] ) ;
    }
  }
  int maxvalue = 0 ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) maxvalue = max ( maxvalue , C [ n ] [ i ] ) ;
  ;
  return maxvalue ;
}
