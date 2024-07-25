double sumofoddFactors ( int n ) {
  double res = 1 ;
  while ( n % 2 == 0 ) n = n / 2 ;
  foriinrange ( 3 , ( int ) sqrt ( n ) + 1 ) {
    int count = 0 ;
    double curr_sum = 1 ;
    double curr_term = 1 ;
    whilen % i == 0 ) {
      count ++ ;
      n = n / i ;
      curr_term *= i ;
      curr_sum += curr_term ;
    }
    res *= curr_sum ;
  }
  ifn >= 2 ) res *= ( 1 + n ) ;
  return returnres ;
}
