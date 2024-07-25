int minSum ( int ar [ ] , int n ) {
  if ( n <= 4 ) return std :: accumulate ( ar , ar + 4 , 0 ) ;
  int sum [ n ] ;
  sum [ 0 ] = ar [ 0 ] ;
  sum [ 1 ] = ar [ 1 ] ;
  sum [ 2 ] = ar [ 2 ] ;
  sum [ 3 ] = ar [ 3 ] ;
  for ( int i = 4 ;
  i < n ;
  i ++ ) {
    sum [ i ] = ar [ i ] + std :: accumulate ( std :: begin ( sum ) , std :: end ( sum ) , 0 ) ;
  }
  return std :: accumulate ( sum , sum + n - 4 , 0 ) ;
}
