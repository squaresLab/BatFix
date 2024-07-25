int sum_of_series ( int n ) {
  int sum = 0 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    sum = sum + ( 2 * i - 1 ) * ( 2 * i - 1 ) ;
  }
  return sum ;
}
