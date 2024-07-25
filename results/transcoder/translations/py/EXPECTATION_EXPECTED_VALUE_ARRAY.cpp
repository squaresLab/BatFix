double calc_expectation ( double a [ ] , int n ) {
  double prb = 1 / n ;
  double sum = 0 ;
  for ( int i = 0 ;
  i != n ;
  i ++ ) sum += ( a [ i ] * prb ) ;
  return ( double ) sum ;
}
