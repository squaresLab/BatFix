int optimalStrategyOfGame ( int arr [ ] , int n ) {
  int table [ n ] [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = gap ;
    j < n ;
    j ++ ) {
      int i = j - gap ;
      int x = 0 ;
      if ( ( ( i + 2 ) <= j ) && ( ( i + 1 ) <= ( j - 1 ) ) ) x = table [ i + 2 ] [ j ] ;
      int y = 0 ;
      if ( ( ( i + 1 ) <= ( j - 1 ) ) && ( ( i + 2 ) <= ( j - 2 ) ) ) y = table [ i + 1 ] [ j - 1 ] ;
      int z = 0 ;
      if ( ( i <= ( j - 2 ) ) && ( ( i + 2 ) <= ( j - 2 ) ) ) z = table [ i ] [ j - 2 ] ;
      table [ i ] [ j ] = max ( arr [ i ] + min ( x , y ) , arr [ j ] + min ( y , z ) ) ;
    }
  }
  return table [ 0 ] [ n - 1 ] ;
}
