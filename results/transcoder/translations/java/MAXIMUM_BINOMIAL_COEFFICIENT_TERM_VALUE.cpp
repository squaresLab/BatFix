int maxcoefficientvalue ( int n ) {
  vector < vector < int >> C ( n + 1 , vector < int > ( n + 1 , 0 ) ) ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= min ( i , n ) ;
    j ++ ) {
      if ( j == 0 || j == i ) {
        C [ i ] [ j ] = 1 ;
      }
      else {
        C [ i ] [ j ] = C [ i - 1 ] [ j - 1 ] + C [ i - 1 ] [ j ] ;
      }
    }
  }
  int maxvalue = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    maxvalue = max ( maxvalue , C [ n ] [ i ] ) ;
  }
  return maxvalue ;
}
