float exponential ( int n , float x ) {
  float sum = 1 ;
  for ( int i = n - 1 ;
  i > 0 ;
  -- i ) {
    sum = 1 + x * sum / i ;
  }
  return sum ;
}
