int sumofoddFactors ( int n ) {
  int res = 1 ;
  while ( n % 2 == 0 ) {
    n = n / 2 ;
  }
  for ( int i = 3 ;
  i <= sqrt ( n ) ;
  i ++ ) {
    int count = 0 , curr_sum = 1 ;
    int curr_term = 1 ;
    while ( n % i == 0 ) {
      count ++ ;
      n = n / i ;
      curr_term *= i ;
      curr_sum += curr_term ;
    }
    res *= curr_sum ;
  }
  if ( n >= 2 ) {
    res *= ( 1 + n ) ;
  }
  return res ;
}
