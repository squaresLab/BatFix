bool isSparse ( int * * array , int m , int n ) {
  int counter = 0 ;
  for ( int i = 0 ;
  i <= m ;
  i ++ ) {
    for ( int j = 0 ;
    j <= n ;
    j ++ ) {
      if ( ( array [ i ] [ j ] == 0 ) && ( array [ i ] [ j ] != 0 ) ) {
        counter = counter + 1 ;
      }
    }
  }
  return ( counter > ( ( m * n ) / 2 ) ) ;
}
