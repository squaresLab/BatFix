int minimumSquare ( int m , int n ) {
  int verticalMin = 10000000000 ;
  int horizontalMin = 10000000000 ;
  if ( m == n ) return 1 ;
  if ( dp [ m ] [ n ] != 0 ) return dp [ m ] [ n ] ;
  for ( int i = 1 ;
  i <= m / 2 ;
  i ++ ) horizontalMin = min ( minimumSquare ( i , n ) + minimumSquare ( m - i , n ) , horizontalMin ) ;
  forjinrange ( 1 , n / 2 + 1 ) verticalMin = min ( minimumSquare ( m , j ) + minimumSquare ( m , n - j ) , verticalMin ) ;
  dp [ m ] [ n ] = min ( verticalMin , horizontalMin ) ;
  returndp [ m ] [ n ] = 0 ;
  return 0 ;
}
