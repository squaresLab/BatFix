bool isSparse ( int array [ ] [ m ] , int m , int n ) {
  int counter = 0 ;
  for ( int i = 0 ;
  i < m ;
  ++ i ) for ( int j = 0 ;
  j < n ;
  ++ j ) if ( array [ i ] [ j ] == 0 ) ++ counter ;
  return ( counter > ( ( m * n ) / 2 ) ) ;
}
