int divisorSum ( int n ) {
  double sum = 0 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) sum += ( int ) ( n / i ) * i ;
  return ( int ) sum ;
}
