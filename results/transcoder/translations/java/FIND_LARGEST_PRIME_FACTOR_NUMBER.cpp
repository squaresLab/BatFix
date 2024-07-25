long long max_prime_factors ( long long n ) {
  long long max_prime = - 1 ;
  while ( n % 2 == 0 ) {
    max_prime = 2 ;
    n >>= 1 ;
  }
  for ( int i = 3 ;
  i <= sqrt ( n ) ;
  i += 2 ) {
    while ( n % i == 0 ) {
      max_prime = i ;
      n = n / i ;
    }
  }
  if ( n > 2 ) {
    max_prime = n ;
  }
  return max_prime ;
}
