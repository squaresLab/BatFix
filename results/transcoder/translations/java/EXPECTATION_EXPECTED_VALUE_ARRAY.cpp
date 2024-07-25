float calc_expectation ( float a [ ] , float n ) {
  float prb = ( 1 / n ) ;
  float sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    sum += a [ i ] * prb ;
  }
  return sum ;
}
